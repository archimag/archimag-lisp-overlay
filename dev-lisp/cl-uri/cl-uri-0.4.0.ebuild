# Copyright 1999-2006 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp

DESCRIPTION="A library to parse/manipulate/use uris"
HOMEPAGE="http://common-lisp.net/project/cl-uri"
SRC_URI="http://common-lisp.net/project/cl-uri/dist/${P}.tar.gz"
LICENSE="BSD"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="virtual/commonlisp"

SLOT="0"

CLPACKAGE=cl-uri

src_install() {
	common-lisp-install src/*.lisp src/*.asd
	common-lisp-system-symlink
	dodoc doc/*
}
