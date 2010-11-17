# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=3
inherit common-lisp-3

DEB_PV=1

DESCRIPTION="A Common Lisp library implementing an abstraction layer over platform dependent functionality."
HOMEPAGE="http://homepage.mac.com/svc/s-sysdeps/"
SRC_URI="mirror://debian/pool/main/s/${PN}/${PN}_${PV}.orig.tar.gz
		mirror://debian/pool/main/s/${PN}/${PN}_${PV}-${DEB_PV}.diff.gz"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}"

S="${WORKDIR}"/${P}.orig

src_prepare() {
	rm "${S}"/Makefile
}

src_install() {
	common-lisp-install-sources src test
	common-lisp-install-asdf ${PN}.asd
	dohtml doc/*.html
	dodoc README.txt
}
