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

DEPEND="!dev-lisp/cl-${PN}
		!dev-lisp/asdf-binary-locations
		!dev-lisp/gentoo-init"
RDEPEND="${DEPEND}"
PDEPEND="~dev-lisp/uiop-${PV}"

S="${WORKDIR}"

src_compile() {
	make
}

src_install() {
	common-lisp-install-sources -t all build version.lisp-expr
	dodoc README TODO
	dohtml doc/*.{html,css,ico,png}

	insinto /etc/common-lisp
	doins "${FILESDIR}"/gentoo-init.lisp "${FILESDIR}"/source-registry.conf
}
