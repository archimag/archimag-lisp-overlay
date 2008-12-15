# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_PV=${PV:0:4}-${PV:4:2}-${PV:6:2}
MY_P=${PN}-${MY_PV}

DESCRIPTION="A thin compatibility layer between Gray Stream Common Lisp implementations"
HOMEPAGE="http://common-lisp.net/project/cl-plus-ssl/#trivial-gray-streams"
SRC_URI="mirror://gentoo/${PN}-${PV}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}"

S="${WORKDIR}"/${PN}

src_unpack() {
	unpack ${A}
	rm "${S}"/Makefile
}
