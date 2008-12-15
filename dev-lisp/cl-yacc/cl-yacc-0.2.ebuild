# Copyright 1999-2008 Gentoo Foundation
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

DEPEND="doc? ( sys-apps/texinfo )"

CLPACKAGE="yacc"
CLSYSTEMS="yacc"

src_compile() {
	if use doc; then
		makeinfo ${PN}.texi || die "Cannot build Texinfo docs"
	fi
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	use doc && doinfo ${PN}.info
	dodoc README
}
