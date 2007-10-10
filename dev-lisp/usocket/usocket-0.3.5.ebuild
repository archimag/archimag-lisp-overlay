# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp

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

CLPACKAGE=${PN}

src_unpack() {
	unpack ${A}
	rm "${S}"/Makefile
}

src_install() {
	insinto "${CLSOURCEROOT}"/${PN}
	doins *.{lisp,asd} *.sh

	insinto "${CLSOURCEROOT}"/${PN}/backend
	doins backend/*.lisp

	insinto "${CLSOURCEROOT}"/${PN}/test
	doins `ls test/*.{in,lisp,asd} | grep -v ${PN}.asd`

	common-lisp-system-symlink
	dosym "${CLSOURCEROOT}"/${PN}/test/${PN}-test.asd "${CLSYSTEMROOT}"/${PN}-test.asd
	dodoc LICENSE TODO README doc/*.txt notes/*.txt
}
