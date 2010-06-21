# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-3 eutils

MY_P=${PN}_${PV}

DESCRIPTION="DIFF is a Common Lisp library for computing the unified or context difference between two files."
HOMEPAGE="http://www.cliki.net/DIFF"
SRC_URI="http://method-combination.net/lisp/files/${MY_P}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}"

S="${WORKDIR}"/${MY_P}

src_prepare() {
	epatch "${FILESDIR}"/gentoo-fix-asd.patch
	epatch "${FILESDIR}"/gentoo-fix-compilation.patch
}
