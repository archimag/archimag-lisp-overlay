# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="R. Scott McIntire's Common Lisp Boolean Function Comparison library."
HOMEPAGE="http://packages.debian.org/unstable/devel/cl-rsm-bool-comp"
SRC_URI="http://ftp.debian.org/debian/pool/main/c/cl-${PN}/cl-${PN}_${PV}.tar.gz"
LICENSE="BSD"
SLOT="0"
# Contains several erroneous type declarations
KEYWORDS="-*"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}"

S="${WORKDIR}"/cl-${P}

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${P}-gentoo.patch
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml ${PN}.html
}
