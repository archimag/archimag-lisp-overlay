# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Usocket is a universal socket library for Common Lisp."
HOMEPAGE="http://common-lisp.net/project/usocket/"
SRC_URI="http://common-lisp.net/project/${PN}/releases/${PN}-${PV}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/split-sequence
		dev-lisp/rt"

CLSYSTEMS="${PN} test/${PN}-test"

src_unpack() {
	unpack ${A}
	rm "${S}"/Makefile
}

src_install() {
	common-lisp-install *.{lisp,asd} backend test/*.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc TODO README doc/*.txt notes/*.txt
}
