# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="RFC2229 client for Common Lisp and CLIM"
HOMEPAGE="http://www.davep.org/lisp/"
SRC_URI="http://www.davep.org/lisp/${P}.tar.gz"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/org-davep-dict
		dev-lisp/cl-ppcre
		dev-lisp/mcclim"

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PV}-gentoo.patch
}
