# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp

DESCRIPTION="Common Lisp interface to the terminfo database."
HOMEPAGE="http://users.actrix.co.nz/mycroft/cl.html"
SRC_URI="http://common-lisp.net/project/linedit/files/${PN}_${PV}.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}
	sys-libs/ncurses"

CLPACKAGE=${PN}

S=${WORKDIR}/${PN}_${PV}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-system-symlink
}
