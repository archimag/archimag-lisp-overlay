# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="FiveAM is a simple regression testing framework designed for Common Lisp."
HOMEPAGE="http://common-lisp.net/project/bese/FiveAM.html"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~x86 ~sparc ~ppc"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}
		!dev-lisp/cl-${PN}-darcs
		dev-lisp/arnesi"

src_install() {
	common-lisp-install ${PN}.asd src t
	common-lisp-symlink-asdf
	dodoc README
}
