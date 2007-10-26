# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="A collection of public domain utilities."
HOMEPAGE="http://common-lisp.net/project/${PN}/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2
		doc? ( http://common-lisp.net/project/alexandria/draft/alexandria.pdf )"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"
DEPEND=""

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PN}-fix-asd.patch
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	if use doc ; then
		dodoc "${DISTDIR}"/alexandria.pdf
	fi
}
