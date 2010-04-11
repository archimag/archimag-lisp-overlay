# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_P=${PN}_${PV}

DESCRIPTION="AspectL is a library that provides aspect-oriented extensions for Common Lisp/CLOS."
HOMEPAGE="http://common-lisp.net/project/closer/"
SRC_URI="http://common-lisp.net/project/closer/ftp/${MY_P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		dev-lisp/lw-compat
		dev-lisp/closer-mop
		dev-lisp/contextl"

S="${WORKDIR}"/${MY_P}

src_install() {
	common-lisp-install *.{lisp,asd} tests/*.lisp
	common-lisp-symlink-asdf
}
