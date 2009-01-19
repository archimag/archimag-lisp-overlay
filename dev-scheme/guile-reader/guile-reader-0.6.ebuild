# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit autotools eutils git

DESCRIPTION="Guile-reader is a simple framework for building readers for GNU Guile."
HOMEPAGE="http://www.nongnu.org/guile-reader/"
#SRC_URI="ftp://foo.bar.com/${P}.tar.gz"
EGIT_REPO_URI="git://git.sv.gnu.org/guile-reader.git"
LICENSE="LGPL-3"
SLOT="0"
KEYWORDS="~amd64 ~x86"

IUSE=""

DEPEND="\
	>=dev-scheme/guile-1.8"

RDEPEND="${DEPEND}"

#S="${WORKDIR}/${P}"

src_unpack() {
	git_src_unpack
	eautoreconf -i
}

src_compile() {
	econf --with-guilemoduledir=/usr/share/guile/site || die "econf failed"
	emake || die "emake failed"
}

src_install() {
	emake DESTDIR="${D}" install || die "emake install failed"
}
