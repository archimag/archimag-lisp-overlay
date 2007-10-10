# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp

DESCRIPTION="General Utilities for Common Lisp Programs from Kevin Rosenberg"
HOMEPAGE="http://packages.debian.org/sid/cl-${PN}
	http://b9.com/debian.html"
SRC_URI="http://files.b9.com/${PN}/${P}.tar.gz"
LICENSE="LLGPL"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}
	dev-lisp/rt"

CLPACKAGE=${PN}

src_unpack() {
	unpack ${A}
	rm "${S}"/Makefile
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-system-symlink
	common-lisp-system-symlink ${CLPACKAGE}-tests
	dodoc README || die "Cannot install docs"
}
