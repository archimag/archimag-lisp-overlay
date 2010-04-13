# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Hunchentoot is a web server written in Common Lisp."
HOMEPAGE="http://weitz.de/hunchentoot/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/md5
		dev-lisp/cl-base64
		dev-lisp/rfc2388
		dev-lisp/cl-plus-ssl
		dev-lisp/chunga
		dev-lisp/cl-ppcre
		dev-lisp/url-rewrite
		dev-lisp/cl-who
		dev-lisp/cl-fad"

CLSYSTEMS="${PN} ${PN}-test"

src_install() {
	common-lisp-install *.{lisp,asd} test/*
	common-lisp-symlink-asdf
	dodoc CHANGELOG* README
	dohtml -r doc/*
}
