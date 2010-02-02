# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=3
inherit common-lisp-2 multilib

MY_P="uffi-${PV}"

DESCRIPTION="Portable FFI library for Common Lisp."
HOMEPAGE="http://uffi.b9.com/"
SRC_URI="http://files.b9.com/uffi/${MY_P}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

S="${WORKDIR}"/${MY_P}

CLSYSTEMS="${PN} ${PN}-tests"

src_compile() { true; }

src_install() {
	common-lisp-install *.asd src tests
	common-lisp-symlink-asdf

	dodoc AUTHORS ChangeLog INSTALL NEWS README \
		TODO doc/uffi.pdf

	tar xfz doc/html.tar.gz -C "${T}"
	dohtml "${T}"/html/*

	for i in examples benchmarks ; do
		docinto ${i}
		dodoc ${i}/*
	done
}
