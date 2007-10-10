# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp

DESCRIPTION="FLEXI-STREAMS implements \"virtual\" bivalent streams that can be layered atop real binary or bivalent streams."
HOMEPAGE="http://weitz.de/${PN}/
	http://www.cliki.net/${PN}"
SRC_URI="http://common-lisp.net/~sionescu/ediware/${PN}_${PV}.orig.tar.gz"
LICENSE="BSD"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND=">=dev-lisp/trivial-gray-streams-20060925
		!dev-lisp/cl-${PN}"
SLOT="0"

CLPACKAGE=${PN}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-system-symlink
	dodoc CHANGELOG
	dohtml doc/index.html
	insinto /usr/share/doc/${PF}/html
	doins doc/foo.txt
}
