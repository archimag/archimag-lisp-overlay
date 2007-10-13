# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION='FLEXI-STREAMS implements "virtual" bivalent streams that can be layered atop real binary or bivalent streams.'
HOMEPAGE="http://weitz.de/${PN}/
	http://www.cliki.net/${PN}"
SRC_URI="http://common-lisp.net/~sionescu/ediware/${P}.tar.gz"
LICENSE="BSD"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
SLOT="0"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}
		>=dev-lisp/trivial-gray-streams-20060925"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-system-symlink
	dodoc CHANGELOG
	dohtml doc/index.html
	docinto html
	dodoc doc/foo.txt
}
