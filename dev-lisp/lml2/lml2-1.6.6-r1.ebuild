# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A Common Lisp package for generating HTML and XHTML documents"
HOMEPAGE="http://lml2.b9.com/"
SRC_URI="http://files.b9.com/${PN}/${P}.tar.gz"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		dev-lisp/kmrcl"

CLSYSTEMS="${PN} ${PN}-tests"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc README ChangeLog
	dohtml doc/readme.html
	docinto examples
	dodoc doc/{make.lisp,Makefile,readme.lml}
}
