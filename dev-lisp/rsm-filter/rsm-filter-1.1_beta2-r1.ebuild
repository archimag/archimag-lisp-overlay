# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="R. Scott McIntire's Common Lisp Filter Library."
HOMEPAGE="http://packages.debian.org/unstable/devel/cl-rsm-filter"
SRC_URI="http://ftp.debian.org/debian/pool/main/c/cl-${PN}/cl-${PN}_${PV/_beta/b}.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/rsm-queue"

S="${WORKDIR}"/cl-${P/_beta/b}

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PV}_fix-ftype-declarations.patch
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml ${PN}.html
}
