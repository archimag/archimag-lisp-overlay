# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EDARCS_REPOSITORY="http://common-lisp.net/project/${PN}/repository/${PN}/"

inherit eutils multilib darcs common-lisp

DESCRIPTION="${PN} is a small lispy language that can be compiled to JavaScript."
HOMEPAGE="http://common-lisp.net/project/${PN}/"
SRC_URI=""
LICENSE="BSD"
SLOT="0"
KEYWORDS="~x86"
IUSE=""
DEPEND=""

CLPACKAGE=${PN}

src_install() {
	common-lisp-install ${PN}.asd
	common-lisp-system-symlink
	insinto "${CLSOURCEROOT}"/${CLPACKAGE}/
	doins -r src t
	dodoc COPYING
	insinto /usr/share/doc/${PF}
	doins docs/*.lisp docs/*.pdf
}
