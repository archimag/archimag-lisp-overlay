# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit autotools eutils

DESCRIPTION="Skribilo is a free document production tool."
HOMEPAGE="http://www.nongnu.org/skribilo/"
SRC_URI="mirror://nongnu/${PN}/${P}.tar.gz"
LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~amd64 ~x86"

IUSE=""

DEPEND="\
	>=dev-scheme/guile-1.8
	>=dev-scheme/guile-reader-0.3
	>=app-text/lout-3.36
	media-libs/ploticus"

RDEPEND="${DEPEND}"

#S="${WORKDIR}/${P}"

src_unpack() {
	unpack ${A}
	cd ${S}
}

src_compile() {
	econf --with-guilemoduledir=/usr/share/guile/site || die "econf failed"
	emake -j1 || die "emake failed"
}

src_install() {
	emake DESTDIR="${D}" install || die "emake install failed"
}
