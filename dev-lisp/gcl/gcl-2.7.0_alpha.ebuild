# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=1

DEB_PV="84.1"
MY_PN="${PN}cvs"
MY_PV="${PV%_alpha}"
MY_P="${MY_PN}-${MY_PV}"

DESCRIPTION="GCL is the official Common Lisp for the GNU project."
HOMEPAGE="http://www.gnu.org/software/gcl/"

SRC_URI="mirror://debian/pool/main/g/${MY_PN}/${MY_PN}_${MY_PV}-${DEB_PV}.tar.gz"

LICENSE="GPL-2"

SLOT="0"
#KEYWORDS="~amd64"
KEYWORDS=""

IUSE="+readline +ansi"

RDEPEND="readline? ( sys-libs/readline )
	dev-libs/gmp
	sys-devel/autoconf"

DEPEND="${RDEPEND}
	virtual/latex-base"

S="${WORKDIR}/${MY_P}"
RESTRICT="strip"

src_compile() {
	pwd
	econf \
		$(use_enable readline) \
		$(use_enable ansi) \
		|| die "Configure failed."

	emake -j1 || die "emake failed"
}

src_install() {
	emake DESTDIR=${D} install || die "emake install failed."
}
