# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="CL-GD is a library for Common Lisp which interfaces ti the GD Graphics Library"
HOMEPAGE="http://weitz.de/${PN} http://www.cliki.net/${PN}"
SRC_URI="http://common-lisp.net/~sionescu/ediware/${PN}_${PV}.orig.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND=">=dev-lisp/uffi-1.3.4
		dev-lisp/cffi
		media-libs/libpng
		media-libs/jpeg
		media-libs/freetype
		>=media-libs/gd-2.0.28
		sys-libs/zlib"

CLSYSTEMS="${PN} ${PN}-test"

src_compile() {
	gcc ${CFLAGS} -fPIC -c ${PN}-glue.c
	ld -shared -lgd -lz -lpng -ljpeg -lfreetype -lm ${PN}-glue.o -o ${PN}-glue.so
	rm ${PN}-glue.o
}

src_install() {
	insinto /usr/lib
	dolib.so ${PN}-glue.so

	common-lisp-install *.{lisp,asd} test
	common-lisp-system-symlink

	dodoc CHANGELOG README
	dohtml doc/*
}
