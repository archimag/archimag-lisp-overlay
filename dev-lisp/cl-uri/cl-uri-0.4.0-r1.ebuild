# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A library to parse/manipulate/use uris"
HOMEPAGE="http://common-lisp.net/project/cl-uri"
SRC_URI="http://common-lisp.net/project/${PN}/dist/${P}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

CLSYSTEMS="src/${PN}"

src_install() {
	common-lisp-install src/*.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml -r docs/*
}
