# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A small Common Lisp library implementing various Common Lisp idioms."
HOMEPAGE="http://www.unmutual.info/software/old/common-idioms/"
SRC_URI="mirror://gentoo/${P}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}"

src_unpack() {
	unpack ${A}
	rm "${S}"/Makefile
}

src_install() {
	common-lisp-install *.{asd,lisp}
	common-lisp-symlink-asdf
	dodoc README
	dohtml docs/*.{html,css}
	dohtml -r docs/icons
}
