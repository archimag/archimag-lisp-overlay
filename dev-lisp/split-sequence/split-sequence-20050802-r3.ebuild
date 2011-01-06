# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=3
inherit common-lisp-3 eutils

DEB_PV=3

DESCRIPTION="Functions to partition a Common Lisp sequence into multiple result sequences"
HOMEPAGE="http://www.cliki.net/SPLIT-SEQUENCE
		http://packages.debian.org/sid/cl-split-sequence"
SRC_URI="mirror://debian/pool/main/c/cl-${PN}/cl-${PN}_${PV}.orig.tar.gz
		mirror://debian/pool/main/c/cl-${PN}/cl-${PN}_${PV}-${DEB_PV}.diff.gz"

LICENSE="public-domain"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}"

S="${WORKDIR}"/cl-${P}.orig

src_prepare() {
	epatch "${WORKDIR}"/cl-${PN}_${PV}-${DEB_PV}.diff
}
