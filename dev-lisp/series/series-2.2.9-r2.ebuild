# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Common Lisp extension for general iteration"
HOMEPAGE="http://${PN}.sf.net"
SRC_URI="mirror://sourceforge/${PN}/${PN}-${PV}.tar.bz2"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}"

src_unpack() {
	unpack ${A}
	cd "${S}"
	epatch "${FILESDIR}"/${PN}-subseries.patch
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc RELEASE-NOTES ChangeLog s-doc.txt
}
