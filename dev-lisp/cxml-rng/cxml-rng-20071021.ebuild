# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_PV=${PV:0:4}-${PV:4:2}-${PV:6:2}

DESCRIPTION="An implementation of Relax NG schema validation written in Common Lisp, including support for compact syntax, DTD Compatibility, and the XSD type library."
HOMEPAGE="http://www.lichteblau.com/${PN}/"
SRC_URI="http://www.lichteblau.com/${PN}/download/${PN}-${MY_PV}.tgz"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="dev-lisp/cxml
		dev-lisp/cl-ppcre
		dev-lisp/cl-yacc
		dev-lisp/parse-number
		dev-lisp/cl-base64"

S="${WORKDIR}"/${PN}-${MY_PV}

src_unpack() {
	unpack ${A}
	rm "${S}"/GNUmakefile
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc README NEWS NIST *TEST
	dohtml -r doc/* || die "Cannot install documentation"
}
