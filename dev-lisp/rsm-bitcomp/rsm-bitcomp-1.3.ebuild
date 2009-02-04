# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="McIntire's Common Lisp Bit Compression Library"
HOMEPAGE="http://packages.debian.org/unstable/devel/cl-rsm-bitcomp"
SRC_URI="mirror://debian/pool/main/c/cl-${PN}/cl-${PN}_${PV}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		dev-lisp/rsm-queue"

S="${WORKDIR}"/cl-${PN}

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PV}-gentoo-fix-defconstant.patch
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml ${PN}.html
}
