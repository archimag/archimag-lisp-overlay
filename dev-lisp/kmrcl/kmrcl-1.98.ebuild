# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="General Utilities for Common Lisp Programs from Kevin Rosenberg"
HOMEPAGE="http://b9.com/debian.html"
SRC_URI="http://files.b9.com/${PN}/${P}.tar.gz"
LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"

DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/rt"

CLSYSTEMS="${PN} ${PN}-tests"

src_unpack() {
	unpack ${A}
	rm "${S}"/Makefile
}
