# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp multilib

DESCRIPTION="Portable FFI library for Common Lisp."
HOMEPAGE="http://uffi.b9.com/"
SRC_URI="http://files.b9.com/uffi/uffi-${PV}.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

S=${WORKDIR}/uffi-${PV}

CLPACKAGE=uffi

src_unpack() {
	unpack ${A}
	rm "${S}"/Makefile
}

src_install() {
	dodir "${CLSYSTEMROOT}"
	dodir "${CLSOURCEROOT}"

	insinto "${CLSOURCEROOT}"/uffi/src
	doins src/*.lisp
	insinto "${CLSOURCEROOT}"/uffi
	doins uffi.asd uffi-tests.asd
	dosym "${CLSOURCEROOT}"/uffi/uffi.asd "${CLSYSTEMROOT}"/uffi.asd
	dodoc AUTHORS ChangeLog INSTALL LICENSE NEWS README TODO doc/uffi.pdf doc/COPYING.GFDL
	tar xfz doc/html.tar.gz
	dohtml html/*
	for i in examples benchmarks ; do
		insinto /usr/share/doc/${P}/$i
		doins $i/*
	done
}
