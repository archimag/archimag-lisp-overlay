# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $
#
# Author Matthew Kennedy <mkennedy@gentoo.org>
#
# This eclass supports the installation of Common Lisp libraries

inherit eutils

CLSOURCEROOT="${ROOT}"/usr/share/common-lisp/source/
CLSYSTEMROOT="${ROOT}"/usr/share/common-lisp/systems/

CLPACKAGE="${PN}"
CLSYSTEMS="${PN}"

DEPEND="virtual/commonlisp"

EXPORT_FUNCTIONS src_install

path-absolute-p() {
	if [ $# -ne 1 ]; then
		die "path-absolute-p must receive exactly one argument"
	fi
    local path="${1}"
    [ "${path:0:1}" == / ]
}

common-lisp-install-relatively() {
	if [ $# -lt 1 ] || [ $# -gt 2 ] ; then
		die "common-lisp-install-relatively must receive one or two arguments"
	fi
    local thing="${1}" ; local dir="${2}"
    insinto "${CLSOURCEROOT}/${CLPACKAGE}/${dir}"
    doins -r "${thing}"
}

common-lisp-install() {
	if [ $# -eq 0 ]; then
		die "common-lisp-install must receive at least one argument"
	fi
	for thing in "$@"; do
        if path-absolute-p "${thing}" ; then
            common-lisp-install-relatively "${thing}"
        else
		    common-lisp-install-relatively "${thing}" "$(dirname "${thing}")"
        fi
	done
}

common-lisp-install-single-system() {
	if [ $# -ne 1 ]; then
		die "common-lisp-install-single-system must receive exactly one argument"
	fi
    [ ! -f "${CLSOURCEROOT}/${CLPACKAGE}/${1}.asd" ] && die "ASDF file ${1} does not exist"
	dosym "${CLSOURCEROOT}/${CLPACKAGE}/${1}.asd" \
		"${CLSYSTEMROOT}/$(basename ${1}).asd"
}

common-lisp-system-symlink() {
	dodir "${CLSYSTEMROOT}"
	# if no arguments received, default to
	# the contents of ${CLSYSTEMS}
	if [ $# -eq 0 ]; then
		for package in ${CLSYSTEMS} ; do
			common-lisp-install-single-system "${package}"
		done
	else
		for package in "$@" ; do
			common-lisp-install-single-system "${package}"
		done
	fi
}

common-lisp-2_src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-system-symlink
	dodoc LICENCE* LICENSE* COPYING* COPYRIGHT README HEADER TODO \
		CHANGELOG ChangeLog BUGS CONTRIBUTORS *NEWS 2> /dev/null
}

# Many of our Common Lisp ebuilds are either inspired by, or actually
# use packages and files from the Debian project's archives.

do-debian-credits() {
	docinto debian
	for i in copyright README.Debian changelog; do
		[ -f "${S}"/debian/${i} ] && dodoc "${S}"/debian/${i}
	done
	docinto .
}

# Local Variables: ***
# mode: shell-script ***
# tab-width: 4 ***
# End: ***
