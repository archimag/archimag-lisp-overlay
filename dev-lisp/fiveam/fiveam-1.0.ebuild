# Copyright 1999-2013 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=5

inherit common-lisp-3

MY_PV="v${PV}"

DESCRIPTION="FiveAM is a simple regression testing framework designed for Common Lisp."
HOMEPAGE="http://common-lisp.net/project/fiveam/"
SRC_URI="https://github.com/sionescu/${PN}/archive/${MY_PV}.tar.gz -> ${P}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~x86 ~sparc ~ppc"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		!dev-lisp/cl-${PN}-darcs
		dev-lisp/arnesi"

src_install() {
	common-lisp-install-sources -t all src t
	common-lisp-install-asdf
	dodoc README
}
