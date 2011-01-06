# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="3"

inherit multilib eutils

MY_P="${PN}${PV}"

DESCRIPTION="Skribe is a text processor for technical documents written in scheme."
HOMEPAGE="http://www-sop.inria.fr/mimosa/fp/Skribe/"
SRC_URI="ftp://ftp-sop.inria.fr/mimosa/fp/Skribe/${MY_P}.tar.gz"

SLOT="0"
LICENSE="GPL-2"
KEYWORDS="~amd64 ~x86"
IUSE=""

DEPEND="dev-scheme/bigloo"
RDEPEND="${DEPEND}"

S="${WORKDIR}/${MY_P}"

src_prepare() {
	# falsify bigloo auto-strip feature to prevent pre-stripped QA errors
	sed -r 's/^blinkflags="(.*)"$/blinkflags="\1 -eval '\''(set! *strip* \\#f)'\''"/gi' \
		-i ./etc/bigloo/configure || die "sed failed"

	# Put the new emacs file (only if bigloo[emacs]) in DESTDIR instead of live filesystem
	epatch "${FILESDIR}/${P}-proper_skribe_el_installation.patch"
}

src_configure() {
	./configure \
		--with-bigloo \
		--ldopt="${LDFLAGS}" \
		--prefix=/usr \
		--mandir=/usr/share/man \
		--libdir=/usr/$(get_libdir) \
		--docdir=/usr/share/doc/${PF} || die "configure failed"
}

src_compile() {
	emake -j1 || die "emake failed"
}

src_install() {
	emake DESTDIR="${D}" install || die "install failed"
}
