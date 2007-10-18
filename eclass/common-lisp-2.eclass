# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $
#
# Maintained by the Gentoo Common Lisp project
# herd: <common-lisp@gentoo.org>, list: <gentoo-lisp@gentoo.org>
#
# This eclass supports the installation of Common Lisp libraries
#
# Public functions:
#
# common-lisp-install path [<other_paths>...]
#   Used to install files or directories(recursively) into
#   $CLSOURCEROOT/$CLPACKAGE. If a path is absolute, it gets installed directly
#   under $CLSOURCEROOT/$CLPACKAGE; if a path is relative, it gets copied by
#   concatenating its path to $CLSOURCEROOT/$CLPACKAGE. If one of the paths does
#   not exist, common-lisp-install dies specifying the erroneous path
#   Example:
#      common-lisp-install foo/bar/baz.lisp
#   installs baz.lisp into the directory $CLSOURCEROOT/$CLPACKAGE/foo/bar/
#
# common-lisp-system-symlink [<paths>...]
#   I receives a list of ASDF systems(as relative paths into
#   $CLSOURCEROOT/$CLPACKAGE/) which will be symlinked into $CLSYSTEMROOT.
#   The list members *must not* end in ".asd" as that extension is supplied
#   by common-lisp-system-symlink.
#   If called with no arguments, the contents of $CLSYSTEMS will be used
#   as default. The specified files must alrady have been installed at the
#   time of the call, otherwise common-lisp-system-symlink dies
#   specifying the .asd file which could not be found.
#   Example:
#     CLSYSTEMS="src/foo" will symlink $CLSOURCEROOT/$CLPACKAGE/src/foo.asd
#   to $CLSYSTEMROOT/foo.asd


inherit eutils

CLSOURCEROOT="${ROOT}"/usr/share/common-lisp/source/
CLSYSTEMROOT="${ROOT}"/usr/share/common-lisp/systems/

# Sources will be installed into ${CLSOURCEROOT}/${CLPACKAGE}/
# Any asdf files will be symlinked in ${CLSYSTEMROOT}/${CLSYSTEM} as they may be
# in an arbitrarily deeply nested directory under ${CLSOURCEROOT}/${CLPACKAGE}/

# To override, set these after inheriting this eclass
CLPACKAGE="${PN}"
CLSYSTEMS="${PN}"

DEPEND="virtual/commonlisp"

EXPORT_FUNCTIONS src_install

# check whether all arguments are absolute paths
# absolute-path-p() {
#	for path in "$@" ; do
#		[[ $path = /* ]] || return 1
#	done
#	return 0
#}

absolute-path-p() {
	[[ $# = 1 ]] || die "${FUNCNAME[0]} must receive one argument"
	return [[ $1 = /* ]]
}

common-lisp-install-relatively() {
	[[ $# = [12] ]] || die "${FUNCNAME[0]} must receive one or two arguments"

	local thing="${1}" ; local dir="${2}"
	insinto "${CLSOURCEROOT}/${CLPACKAGE}/${dir}"
	doins -r "${thing}" || die "Cannot install ${dir}/${thing}"
}

common-lisp-install() {
	[[ $# = 0 ]] && die "${FUNCNAME[0]} must receive at least one argument"
	for thing in "$@"; do
		if absolute-path-p "${thing}" ; then
			common-lisp-install-relatively "${thing}"
		else
			common-lisp-install-relatively "${thing}" "$(dirname "${thing}")"
		fi
	done
}

common-lisp-install-single-system() {
	[[ $# != 1 ]] && die "${FUNCNAME[0]} must receive exactly one argument"
	if [ ! -f "${D}/${CLSOURCEROOT}/${CLPACKAGE}/${1}.asd" ]; then
		die "${D}/${CLSOURCEROOT}/${CLPACKAGE}/${1}.asd does not exist"
	fi
	dosym "${CLSOURCEROOT}/${CLPACKAGE}/${1}.asd" \
		"${CLSYSTEMROOT}/$(basename ${1}).asd"
}

common-lisp-system-symlink() {
	dodir "${CLSYSTEMROOT}"
	# if no arguments received, default to the contents of ${CLSYSTEMS}
	if [[ $# = 0 ]]; then
		for package in ${CLSYSTEMS} ; do
			common-lisp-install-single-system "${package}"
		done
	else
		for package in "$@" ; do
			common-lisp-install-single-system "${package}"
		done
	fi
}

# Stelian, please test this replacement -- Marijn

# if no arguments received, default to the contents of ${CLSYSTEMS}
_common-lisp-system-symlink() {
	dodir "${CLSYSTEMROOT}"

	for package in $([[ $# = 0 ]] && echo ${CLSYSTEMS} || echo "$@") ; do
		common-lisp-install-single-system "${package}"
	done
}

common-lisp-2_src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-system-symlink
	dodoc COPYRIGHT README HEADER TODO CHANGELOG ChangeLog \
		BUGS CONTRIBUTORS *NEWS 2> /dev/null
}
