# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="R. Scott McIntire's Common Lisp Genetic Algorithm Library."
HOMEPAGE="http://packages.debian.org/unstable/devel/cl-rsm-genetic-alg"
SRC_URI="http://ftp.debian.org/debian/pool/main/c/cl-${PN}/cl-${PN}_${PV}.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~x86 ~ppc"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/rsm-cache"

S="${WORKDIR}"/cl-${P}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml ${PN}.html
}
