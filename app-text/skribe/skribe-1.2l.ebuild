# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit multilib

MY_P="${PN}${PV}"

DESCRIPTION="Skribe is a text processor for technical documents written in scheme."
HOMEPAGE="http://www-sop.inria.fr/mimosa/fp/Skribe/"
SRC_URI="ftp://ftp-sop.inria.fr/mimosa/fp/Skribe/${MY_P}.tar.gz"

SLOT="0"
LICENSE="GPL-2"
KEYWORDS="~amd64 ~x86"
IUSE=""

DEPEND="dev-scheme/bigloo"

S="${WORKDIR}/${MY_P}"

src_unpack() {
	unpack ${A}
	cd "${S}"

#	cp ./etc/bigloo/configure ./etc/bigloo/configure.old

	# falsify bigloo auto-strip feature to prevent pre-stripped QA errors
	sed -r 's/^blinkflags="(.*)"$/blinkflags="\1 -eval '\''(set! *strip* \\#f)'\''"/gi' -i ./etc/bigloo/configure

#	diff -u ./etc/bigloo/configure.old ./etc/bigloo/configure
}

src_compile() {
	./configure \
		--with-bigloo \
		--prefix=/usr \
		--mandir=/usr/share/man \
		--libdir=/usr/$(get_libdir) \
		--docdir=/usr/share/doc/${PF} \
		 || die "configure failed"
	emake || die "make failed"
}

src_install() {
	emake DESTDIR="${D}" install || "install failed"
}
