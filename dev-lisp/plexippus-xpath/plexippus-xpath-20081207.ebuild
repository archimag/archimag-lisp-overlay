# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_PV=${PV:0:4}-${PV:4:2}-${PV:6:2}

DESCRIPTION="An XPath implementation written in Common Lisp."
HOMEPAGE="http://www.cliki.net/plexippus-xpath"
SRC_URI="http://common-lisp.net/project/${PN}/download/${PN}-${MY_PV}.tgz"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND=">=dev-lisp/cxml-20081130
		dev-lisp/parse-number
		>=dev-lisp/cl-ppcre-2.0.0
		>=dev-lisp/cl-yacc-0.2"

S="${WORKDIR}"/${PN}-${MY_PV}

CLSYSTEMS="xpath"

src_unpack() {
	unpack ${A}
	find "${S}"/doc -type f -not \( -name '*.html' -or -name '*.css' -or -name '*.gif' \) -delete
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf

	dohtml -r doc/* || die "Cannot install HTML docs"
}
