# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="R. Scott McIntire's Common Lisp Genetic Programming Library."
HOMEPAGE="http://packages.debian.org/unstable/devel/cl-rsm-gen-prog"
SRC_URI="http://ftp.debian.org/debian/pool/main/c/cl-${PN}/cl-${PN}_${PV}.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/rsm-filter
		dev-lisp/rsm-cache
		dev-lisp/rsm-random"

S="${WORKDIR}"/cl-${P}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml ${PN}.html
}
