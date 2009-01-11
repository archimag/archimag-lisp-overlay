# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eutils autotools

DESCRIPTION="A library that generates assembly language code at run-time."
HOMEPAGE="http://www.gnu.org/software/lightning/"
SRC_URI="http://ftp.gnu.org/gnu/lightning/${P}.tar.gz"

LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="debug"

src_unpack() {
	unpack ${A} && cd "${S}"
	epatch "${FILESDIR}"/fix-install-main-include-file.patch
	eautoreconf
}

src_compile() {
	econf $(use_enable debug assertions) || die "econf failed"
	emake || die "emake failed"
}

src_install() {
	emake DESTDIR="${D}" install || die "emake install failed"
	dodoc AUTHORS NEWS README THANKS
}
