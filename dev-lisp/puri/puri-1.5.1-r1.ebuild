# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Portable URI library for Common Lisp based on the Franz, Inc. :net.uri module."
HOMEPAGE="http://${PN}.b9.com/"
SRC_URI="http://files.b9.com/${PN}/${P}.tar.gz"
LICENSE="LLGPL"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/ptester"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-system-symlink
	dohtml uri.html
	dodoc README LICENSE
}
