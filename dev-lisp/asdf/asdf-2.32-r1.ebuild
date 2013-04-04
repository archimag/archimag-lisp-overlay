# Copyright 1999-2013 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=5
inherit eutils common-lisp-3

DESCRIPTION="ASDF is Another System Definition Facility for Common Lisp"
HOMEPAGE="http://common-lisp.net/project/asdf/"
SRC_URI="http://common-lisp.net/project/${PN}/archives/${P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

SLOT="2/${PVR}"

RDEPEND="!dev-lisp/cl-${PN}
		!dev-lisp/asdf-binary-locations"
PDEPEND="~dev-lisp/uiop-${PV}
		 >=dev-lisp/gentoo-init-1.1"

S="${WORKDIR}"

src_compile() {
	make
}

src_install() {
	common-lisp-install-sources -t all build contrib test *.lisp version.lisp-expr
	common-lisp-install-asdf asdf.asd asdf-driver.asd
	dodoc README TODO
	dohtml doc/*.{html,css,ico,png}
}
