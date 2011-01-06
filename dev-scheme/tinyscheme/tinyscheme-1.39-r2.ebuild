# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="3"

inherit flag-o-matic

MY_P=${PN}${PV}

DESCRIPTION="Lightweight scheme interpreter"
HOMEPAGE="http://tinyscheme.sourceforge.net"
SRC_URI="mirror://sourceforge/tinyscheme/${MY_P}.zip"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~x86"
IUSE=""

DEPEND="app-arch/unzip"
RDEPEND=""

S=${WORKDIR}/${MY_P}

src_prepare() {
	sed -e 's/PLATFORM_FEATURES = -DUSE_STRLWR=0/#PLATFORM_FEATURES = -DUSE_STRLWR=0/;
		s/CC = gcc -fpic/CC = gcc -fpic ${CFLAGS}/;
		s/CC) -o/CC) ${LDFLAGS} -o/;
		s/LDFLAGS/LOCAL_LDFLAGS/g;
		s/LOCAL_LDFLAGS = -shared/LOCAL_LDFLAGS = -shared ${LDFLAGS}/;
		s/DEBUG=-g -Wno-char-subscripts -O/DEBUG=/' \
		-e "s/LD)/& -Wl,-soname,lib${PN}.so.${PV}/" \
		-i makefile || die "sed failed"
}

src_install() {
	local INIT_DIR=/usr/share/${PN}/
	newbin scheme ${PN} || die "newbin failed"
	dolib libtinyscheme.a libtinyscheme.so || die "dolib failed"
	dodoc Manual.txt || die "dodoc failed"

	# Bug 328967: dev-scheme/tinyscheme-1.39-r1 doesn't install header file
	insinto /usr/include/
	newins scheme.h tinyscheme.h || die "newins scheme.h tinyscheme.h failed"

	insinto ${INIT_DIR}
	doins init.scm || die "doins failed"
	dodir /etc/env.d/ && echo "TINYSCHEMEINIT=\"${INIT_DIR}init.scm\"" > "${D}"/etc/env.d/50tinyscheme
}
