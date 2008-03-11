# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="KR is a highly flexible and dynamic prototype-based object system for Common Lisp."
HOMEPAGE="http://www.cliki.net/KR"
SRC_URI="mirror://gentoo/${PN}_${PV}.tar.gz"
LICENSE="public-domain"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${xPN}"

S=${WORKDIR}/${PN}_${PV}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc ${PN}-manual.ps ${PN}.changes
}
