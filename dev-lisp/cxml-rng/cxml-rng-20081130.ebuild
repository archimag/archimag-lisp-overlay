# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_PV=${PV:0:4}-${PV:4:2}-${PV:6:2}

DESCRIPTION="An implementation of Relax NG schema validation written in Common Lisp."
HOMEPAGE="http://www.lichteblau.com/cxml-rng/"
SRC_URI="http://www.lichteblau.com/${PN}/download/${PN}-${MY_PV}.tgz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND=">=dev-lisp/cxml-${PV}
		>=dev-lisp/cl-ppcre-2.0.0
		>=dev-lisp/cl-yacc-0.2
		>=dev-lisp/parse-number-1.0
		dev-lisp/cl-base64"

S="${WORKDIR}"/${PN}-${MY_PV}

src_unpack() {
	unpack ${A} && cd "${S}"

	rm "${S}"/GNUmakefile
}

src_install() {
	common-lisp-install *.{lisp,asd,rng,rnc}
	common-lisp-symlink-asdf
	dodoc README NEWS NIST *TEST
	dohtml -r doc/* || die "Cannot install HTML documentation"
}
