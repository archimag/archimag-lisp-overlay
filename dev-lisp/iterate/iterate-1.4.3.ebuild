# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="ITERATE is a lispy and extensible replacement for the Common Lisp LOOP macro"
HOMEPAGE="http://common-lisp.net/project/${PN}/ http://www.cliki.net/${PN}/"
SRC_URI="http://common-lisp.net/project/${PN}/releases/${P}.tar.gz"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}"

src_unpack() {
	unpack ${A}
	rm ${S}/Makefile
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc doc/*.pdf
}
