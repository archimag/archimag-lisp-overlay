# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="TrueType font file access library for Common Lisp"
HOMEPAGE="http://www.xach.com/lisp/zpb-ttf"
SRC_URI="mirror://gentoo/${P}.tgz"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
DEPEND="!dev-lisp/cl-${PN}"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml *.{html,png}
}
