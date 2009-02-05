# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="CL-YACC is a LALR(1) parser generator for Common Lisp"
HOMEPAGE="http://www.pps.jussieu.fr/~jch/software/cl-yacc/
		http://www.cliki.net/CL-Yacc"
SRC_URI="http://www.pps.jussieu.fr/~jch/software/files/old/${P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

DEPEND="sys-apps/texinfo
		doc? ( virtual/texi2dvi )"

CLPACKAGE="yacc"
CLSYSTEMS="yacc"

src_compile() {
	cd doc
	makeinfo ${PN}.texi -o ${PN}.info || die "Cannot build info docs"
	if use doc ; then
		VARTEXFONTS="${T}"/fonts \
			texi2pdf ${PN}.texi -o ${PN}.pdf || die "Cannot build PDF docs"
	fi
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc README
	doinfo doc/${PN}.info
	use doc && doc/${PN}.pdf
}
