# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="${PN} is a universal socket library for Common Lisp."
HOMEPAGE="http://common-lisp.net/project/${PN}/"
SRC_URI="http://common-lisp.net/project/${PN}/releases/${PN}-${PV}.tar.gz"
LICENSE="MIT"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
SLOT="0"
DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/split-sequence
		dev-lisp/rt"

CLSYSTEMS="${PN} test/${PN}-test"

src_unpack() {
	unpack ${A}
	rm "${S}"/{Makefile,test/${PN}.asd}
}

src_install() {
	common-lisp-install *.{lisp,asd} *.sh
	common-lisp-install backend/*.lisp test/*.{in,lisp,asd}
	common-lisp-symlink-asdf
	dodoc TODO README doc/*.txt notes/*.txt
}
