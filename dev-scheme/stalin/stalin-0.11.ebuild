# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eutils

DESCRIPTION="Stalin is an aggressively optimizing Scheme compiler."
HOMEPAGE="http://community.schemewiki.org/?Stalin"
SRC_URI="ftp://ftp.ecn.purdue.edu/qobi/${P}.tgz"

LICENSE="GPL-3"
SLOT="0"
KEYWORDS="~x86"
IUSE=""

RDEPEND="x11-libs/libX11"
DEPEND="${RDEPEND}"

#S=${S%-${PVR}}

src_unpack() {
	unpack ${A}
	cd ${S}
	epatch ${FILESDIR}/${P}-makefile.patch
}
pkg_setup() {
	ewarn "Stalin is an ugly beast, which will eat"
	ewarn "all your memory and stress you processor"
	ewarn "to levels you have never experienced."
	ewarn "If you want to abort, please do it now."
	ewarn "You have been warned."
	epause 10
}

src_compile() {
	einfo "Beginning of stalin's compilation process."
	einfo "It may take several minutes."
	einfo "(140 minutes on a pentium4, 3.2GHz)"
	./build || die "Stalin's compilation failed"	
}

src_test() {
	einfo "This may take REALLY much time and requires"
	einfo "possibly more than 2Gb of RAM+swap."
	cd benchmarks
	./compile-and-run-stalin-old-benchmarks
	./compile-and-run-stalin-bcl-benchmarks
	./compile-and-run-stalin-fdlcc-benchmarks
}

src_install() {
	dodir /usr/include/${PN}
	insinto /usr/include/${PN}
	cd include
	doins gc.h
	doins gc_config_macros.h

	dodir /usr/lib/${PN}
	insinto /usr/lib/${PN}
	doins libgc.a
	doins libstalin.a
	doins stalin
	chmod 755 ${D}/usr/lib/${PN}/stalin
	cd ..

(
cat <<'EOF'
#!/bin/bash

exec /usr/lib/stalin/stalin -I /usr/include/stalin \
-I /usr/lib/stalin -copt -fno-strict-aliasing $@

EOF
) > stalin
	
	exeinto /usr/bin
	doexe stalin
	doman stalin.1
	dodoc ANNOUNCEMENT COPYING MORE README
}








