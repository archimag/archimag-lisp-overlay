# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Hyperobject is a Common Lisp library for representing objects."
HOMEPAGE="http://${PN}.b9.com/
	http://www.cliki.net/${PN}"
SRC_URI="http://files.b9.com/${PN}/${PN}-${PV}.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/kmrcl
		dev-lisp/rt
		dev-lisp/clsql"

src_unpack() {
	unpack ${A}
	rm "${S}"/Makefile
}

src_install() {
	common-lisp-install *.{lisp,asd} examples
	common-lisp-symlink-asdf
	dodoc README
	dodoc doc/*.pdf
	tar xfz doc/html.tar.gz -C "${T}"
	dohtml "${T}"/html/*
}
