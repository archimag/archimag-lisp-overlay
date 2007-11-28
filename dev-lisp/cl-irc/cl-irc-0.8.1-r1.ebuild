# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A Common Lisp IRC client library"
HOMEPAGE="http://common-lisp.net/project/${PN}/"
SRC_URI="http://common-lisp.net/project/${PN}/releases/${P}.tar.gz"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="dev-lisp/split-sequence
		dev-lisp/usocket
		dev-lisp/flexi-streams"

src_unpack() {
	unpack ${A}
	rm "${S}"/Makefile
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc CREDITS ChangeLog README
	docinto doc && dodoc doc/*.txt
	docinto example && dodoc example/*
}
