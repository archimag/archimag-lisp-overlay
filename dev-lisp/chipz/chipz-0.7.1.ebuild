# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="A library for decompressing deflate, zlib, and gzip data."
HOMEPAGE="http://method-combination.net/lisp/chipz/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

src_unpack() {
	unpack ${A} && cd "${S}"
	epatch "${FILESDIR}"/gentoo-fix-asd.patch
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc TODO NEWS
	dohtml doc/{${PN}.html,style.css}
}
