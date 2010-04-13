# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="A small library for doing UTF-8-based input and output."
HOMEPAGE="http://common-lisp.net/project/trivial-utf-8/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="ZLIB"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

CLPACKAGE="trivial-utf-8"
CLSYSTEMS="trivial-utf-8"

src_install() {
	common-lisp-install *.{lisp,asd} test.txt
	common-lisp-symlink-asdf
	dohtml doc/*
}
