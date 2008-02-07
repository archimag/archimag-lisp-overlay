# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Common Lisp package to provide a markup language for generation XHTML web pages"
HOMEPAGE="http://${PN}.b9.com/
		http://www.cliki.net/LML"
SRC_URI="http://files.b9.com/${PN}/${P}.tar.gz"
LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml doc/readme.html
	docinto examples && dodoc doc/readme.lml
}
