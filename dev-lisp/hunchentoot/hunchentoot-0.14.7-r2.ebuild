# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="${PN} is a web server written in Common Lisp and at the same time a toolkit for building dynamic websites with Common Lisp."
HOMEPAGE="http://weitz.de/${PN}/"
SRC_URI="http://common-lisp.net/~sionescu/ediware/${P}.tar.gz"
LICENSE="BSD"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
SLOT="0"
IUSE=""

DEPEND="dev-lisp/md5
		dev-lisp/cl-base64
		dev-lisp/rfc2388
		dev-lisp/cl-plus-ssl
		dev-lisp/chunga
		dev-lisp/cl-ppcre
		dev-lisp/url-rewrite
		dev-lisp/cl-who"

CLSYSTEMS="${PN} ${PN}-test"

src_install() {
	common-lisp-install *.{lisp,asd} test/*
	common-lisp-symlink-asdf

	dodoc CHANGELOG* README
	dohtml -r doc/*
}
