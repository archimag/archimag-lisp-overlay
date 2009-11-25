# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="CL-GD is a library for Common Lisp which interfaces to the GD Graphics Library"
HOMEPAGE="http://weitz.de/cl-gd/
		http://www.cliki.net/cl-gd/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="media-libs/libpng
		media-libs/jpeg
		media-libs/freetype
		>=media-libs/gd-2.0.28
		sys-libs/zlib"
RDEPEND="${DEPEND}
		>=dev-lisp/uffi-1.3.4
		dev-lisp/cffi"

CLSYSTEMS="${PN} ${PN}-test"

src_compile() {
	gcc ${CFLAGS} -fPIC -c ${PN}-glue.c
	ld -shared -lgd -lz -lpng -ljpeg -lfreetype -lm ${PN}-glue.o -o ${PN}-glue.so
	rm ${PN}-glue.o
}

src_install() {
	dolib.so ${PN}-glue.so

	common-lisp-install *.{lisp,asd} test
	common-lisp-symlink-asdf

	dodoc CHANGELOG README
	dohtml doc/*
}
