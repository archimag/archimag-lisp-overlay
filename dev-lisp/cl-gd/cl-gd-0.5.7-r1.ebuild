# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-2 toolchain-funcs

DESCRIPTION="CL-GD is a library for Common Lisp which interfaces to the GD Graphics Library"
HOMEPAGE="http://weitz.de/cl-gd/
		http://www.cliki.net/cl-gd/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND=">=media-libs/gd-2.0.28[jpeg,png,xpm]"
RDEPEND="${DEPEND}
		>=dev-lisp/uffi-1.3.4
		dev-lisp/cffi"

CLSYSTEMS="${PN} ${PN}-test"

src_compile() {
	# I have no idea why it doesn't work with as-needed
	echo $(tc-getCC) ${CFLAGS} ${LDFLAGS} -Wl,--no-as-needed -shared -fPIC -lgd ${PN}-glue.c -o ${PN}-glue.so
	$(tc-getCC) ${CFLAGS} ${LDFLAGS} -Wl,--no-as-needed -shared -fPIC -lgd ${PN}-glue.c -o ${PN}-glue.so
}

src_install() {
	dolib.so ${PN}-glue.so

	common-lisp-install *.{lisp,asd} test
	common-lisp-symlink-asdf

	dodoc CHANGELOG README
	dohtml doc/*
}
