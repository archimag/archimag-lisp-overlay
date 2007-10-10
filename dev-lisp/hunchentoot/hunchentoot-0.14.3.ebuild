# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp

DESCRIPTION="${PN} is a web server written in Common Lisp and at the same time a toolkit for building dynamic websites with Common Lisp."
HOMEPAGE="http://weitz.de/${PN}/"
SRC_URI="http://common-lisp.net/~sionescu/ediware/${PN}_${PV}.orig.tar.gz"
LICENSE="BSD"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="dev-lisp/cl-md5
	dev-lisp/cl-base64
	dev-lisp/cl-rfc2388
	dev-lisp/cl-plus-ssl
	dev-lisp/chunga
	dev-lisp/cl-ppcre
	dev-lisp/url-rewrite
	dev-lisp/cl-who"
SLOT="0"

CLPACKAGE="${PN} ${PN}-test"

src_install() {
	common-lisp-install *.{lisp,asd}
	insinto "${CLSOURCEROOT}"/${PN}/test
	doins test/*
	for i in ${PN}{,-test}; do
		dosym "${CLSOURCEROOT}"/${PN}/$i.asd "${CLSYSTEMROOT}"/$i.asd
	done
	dodoc CHANGELOG* README
	dohtml -r doc/*
}
