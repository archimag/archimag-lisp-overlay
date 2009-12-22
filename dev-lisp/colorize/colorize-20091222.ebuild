# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Colorize is a Common Lisp application for colorizing source code."
HOMEPAGE="http://www.cliki.net/colorize"
SRC_URI="http://cloud.github.com/downloads/archimag/colorize/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		dev-lisp/html-encode
		dev-lisp/split-sequence
		~dev-lisp/hyperspec-7.0"

src_install() {
	common-lisp-install *.{lisp,asd} *-expr Mop_Sym.txt
	common-lisp-symlink-asdf
}
