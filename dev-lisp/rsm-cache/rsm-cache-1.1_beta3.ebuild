# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="R. Scott McIntire's Common Lisp cache library."
HOMEPAGE="http://packages.debian.org/unstable/devel/cl-rsm-cache"
SRC_URI="mirror://debian/pool/main/c/cl-${PN}/cl-${PN}_${PV/_beta/b}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/rsm-queue"

S="${WORKDIR}"/cl-${PN/_beta/b}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml ${PN}.html
}
