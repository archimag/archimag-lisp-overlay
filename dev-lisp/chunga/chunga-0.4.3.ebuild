# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Portable chunked streams for Common Lisp"
HOMEPAGE="http://weitz.de/chunga/"
SRC_URI="http://common-lisp.net/~sionescu/files/ediware/${P}.tar.bz2"

LICENSE="BSD-2"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
SLOT="0"

RDEPEND="!dev-lisp/cl-${PN}
		dev-lisp/flexi-streams"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc CHANGELOG*
	dohtml doc/index.html
}
