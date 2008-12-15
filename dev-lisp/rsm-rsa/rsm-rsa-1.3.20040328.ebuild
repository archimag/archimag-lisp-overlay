# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_PV=${PV:0:3}
CVS_PV=${PV:4:4}.${PV:8:2}.${PV:10}
FULL_PV=${MY_PV}+cvs.${CVS_PV}
MY_P=cl-${PN}_${FULL_PV}

DESCRIPTION="McIntire's Common Lisp RSA Library"
HOMEPAGE="http://packages.debian.org/unstable/devel/cl-rsm-rsa"
SRC_URI="mirror://debian/pool/main/c/cl-${PN}/${MY_P}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/rsm-mod
		dev-lisp/rsm-string
		dev-lisp/cl-plus"

S="${WORKDIR}"/${MY_P}

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PV}-defconstant-gentoo.patch
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml ${PN}.html
}
