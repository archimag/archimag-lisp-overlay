# Copyright 1999-2008 Gentoo Foundation
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

DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/rsm-queue
		dev-lisp/cl-plus"

S="${WORKDIR}"/cl-${P}

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PV}-defconstant-gentoo.patch
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml ${PN}.html
}
