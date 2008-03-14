# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: /var/cvsroot/gentoo-x86/dev-scheme/mit-scheme/mit-scheme-20070623.ebuild,v 1.3 2007/10/10 07:30:05 ulm Exp $

inherit multilib

DESCRIPTION="GNU/MIT-Scheme"
HOMEPAGE="http://www.swiss.ai.mit.edu/projects/scheme/"
SRC_URI="http://ftp.gnu.org/gnu/mit-scheme/snapshot.pkg/${PV}/${P}.tar.gz"
LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~amd64"
IUSE="doc"
S="${WORKDIR}/${P}/src"

# RDEPEND="x11-libs/libXau
# 		 x11-libs/libSM
# 		 x11-libs/libXdmcp
# 		 x11-libs/libX11
# 		 x11-libs/libICE"

RDEPEND="
app-crypt/mhash
dev-db/libpq
dev-libs/libmcrypt
dev-libs/openssl
sys-libs/gdbm
sys-libs/ncurses
"

DEPEND="${RDEPEND}"

src_unpack() {
	unpack ${A}; cd "${S}"
	sed "s:CFLAGS=\"\${CFLAGS} -O3\":CFLAGS=\"${CFLAGS}\":" -i {lib/include,microcode}/configure{,.ac}
}

src_compile() {
	./etc/make-liarc.sh --prefix=/usr --exec-prefix=/usr --libdir=/usr/$(get_libdir) || die "making liar C failed"
}

src_install() {
	emake DESTDIR="${D}" install || die "make install failed"
}
