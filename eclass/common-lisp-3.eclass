# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $
#
# Maintained by the Gentoo Common Lisp project
# irc: #gentoo-lisp, herd: <common-lisp@gentoo.org>, list: <gentoo-lisp@gentoo.org>
#
# This eclass supports the installation of Common Lisp libraries
#
# Public functions:
#
# common-lisp-install-sources path [<other_paths>...]
#   recursively install sources
#   When given a directory, that will be recursively scanned
#   for Lisp source files with common suffixes: .lisp , .lsp or .cl
#
# common-lisp-install-asdf path [<other_paths>...]
#   install ASDF files and create symlinks in $CLSYSTEMROOT
#   When given a directory, that will be recursively scanned
#   for ASDF systems - files ending in .asd
#
# common-lisp-export-impl-args lisp-implementation
#   export a few variables containing the switches necessary
#   to make the CL implementation perform basic functions:
#   * CL_NORC: don't load syste-wide or user-specific initfiles
#   * CL_LOAD: load a certain file
#   * CL_EVAL: eval a certain expression at startup
#

inherit eutils

# CL packages in the overlay don't have their tarballs on the mirrors
# so it's useless to mirror them
RESTRICT="mirror"

CLSOURCEROOT="${ROOT%/}"/usr/share/common-lisp/source
CLSYSTEMROOT="${ROOT%/}"/usr/share/common-lisp/systems

# Sources will be installed into ${CLSOURCEROOT}/${CLPACKAGE}/
# Any asdf files will be symlinked in ${CLSYSTEMROOT}/${CLSYSTEM} as they may be
# in an arbitrarily deeply nested directory under ${CLSOURCEROOT}/${CLPACKAGE}/

# To override, set these after inheriting this eclass
CLPACKAGE="${PN}"

RDEPEND="virtual/commonlisp"

EXPORT_FUNCTIONS src_compile src_install

common-lisp-3_src_compile() { true; }

absolute-path-p() {
	[[ $# -eq 1 ]] || die "${FUNCNAME[0]} must receive one argument"
	[[ ${1} == /* ]]
}

common-lisp-install-one-source() {
	[[ $# -eq 3 ]] || die "${FUNCNAME[0]} must receive exactly three arguments"

	local fpredicate=${1}
	local source=${2}
	local target="${CLSOURCEROOT}/${CLPACKAGE}/${3}"

	if absolute-path-p "${source}" ; then
		die "Cannot install files with absolute path: ${source}"
	fi

	if ${fpredicate} "${source}" ; then
		insinto "${target}"
		doins "${source}" || die "Failed to install ${source} into $(dirname "${target}")"
	fi
}

lisp-file-p() {
	[[ $# -eq 1 ]] || die "${FUNCNAME[0]} must receive one argument"

	[[ ${1} =~ \.(lisp|lsp|cl)$ ]]
}

common-lisp-get-fpredicate() {
	[[ $# -eq 1 ]] || die "${FUNCNAME[0]} must receive one argument"

	local ftype=${1}
	case ${ftype} in
		"lisp") echo "lisp-file-p" ;;
		"all" ) echo "true" ;;
		* ) die "Unknown filetype specifier ${ftype}" ;;
	esac
}

common-lisp-install-sources() {
	local ftype="lisp"
	if [[ ${1} == "-t" ]] ; then
		ftype=${2}
		shift ; shift
	fi

	[[ $# -ge 1 ]] || die "${FUNCNAME[0]} must receive one non-option argument"

	local fpredicate=$(common-lisp-get-fpredicate "${ftype}")

	for path in "${@}" ; do
		if [[ -f ${path} ]] ; then
			common-lisp-install-one-source ${fpredicate} "${path}" "$(dirname "${path}")"
		elif [[ -d ${path} ]] ; then
			common-lisp-install-sources -t ${ftype} $(find "${path}" -type f)
		else
			die "${path} it neither a regular file nor a directory"
		fi
	done
}

common-lisp-install-one-asdf() {
	[[ $# != 1 ]] && die "${FUNCNAME[0]} must receive exactly one argument"

	local source=${1}
	if [[ ! ${source} =~ \.asd$ ]] ; then
		die "${source} is not an ASDF file"
	fi
	common-lisp-install-one-source true "${source}" "$(dirname "${source}")"
	local target="${CLSOURCEROOT%/}/${CLPACKAGE}/${source}"
	dosym "${target}" "${CLSYSTEMROOT%/}/$(basename ${target})"
}

common-lisp-install-asdf() {
	dodir "${CLSYSTEMROOT}"

	[[ $# = 0 ]] && set - ${CLSYSTEMS}
	[[ $# = 0 ]] && set - $(find . -type f -name \*.asd)
	for sys in "${@}" ; do
		common-lisp-install-one-asdf ${sys}
	done
}

common-lisp-3_src_install() {
	# Recursively install Lisp sources
	common-lisp-install-sources .
	common-lisp-install-asdf
	for i in AUTHORS README* HEADER TODO* CHANGELOG Change[lL]og CHANGES BUGS CONTRIBUTORS *NEWS* ; do
		[[ -f ${i} ]] && dodoc ${i}
	done
}

common-lisp-export-impl-args() {
	if [[ $# != 1 ]]; then
		eerror "Usage: ${FUNCNAME[0]} lisp-implementation"
		die "${FUNCNAME[0]}: wrong number of arguments: $#"
	fi
	case ${1} in
		clisp)
			CL_NORC="-norc"
			CL_LOAD="-i"
			CL_EVAL="-x"
			;;
		clozure | ccl | openmcl)
			CL_NORC="--no-init"
			CL_LOAD="--load"
			CL_EVAL="--eval"
			;;
		cmucl)
			CL_NORC="-nositeinit -noinit"
			CL_LOAD="-load"
			CL_EVAL="-eval"
			;;
		ecl)
			CL_NORC="-norc"
			CL_LOAD="-load"
			CL_EVAL="-eval"
			;;
		sbcl)
			CL_NORC="--sysinit /dev/null --userinit /dev/null"
			CL_LOAD="--load"
			CL_EVAL="--eval"
			;;
		*)
			die ${1} is not supported by ${0}
			;;
	esac
	export CL_NORC CL_LOAD CL_EVAL
}
