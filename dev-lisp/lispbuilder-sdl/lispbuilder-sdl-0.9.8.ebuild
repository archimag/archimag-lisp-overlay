# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Lisp Application Builder Interface to libSDL"
HOMEPAGE="http://code.google.com/p/lispbuilder/"
SRC_URI="http://lispbuilder.googlecode.com/files/${P}.tgz"

LICENSE="MIT"
SLOT="0"
DEPEND="media-libs/libsdl"
KEYWORDS="~amd64 ~x86"
IUSE=""

S="${WORKDIR}/${PN}"

CLPACKAGE="lispbuilder-sdl"

src_install() {
	common-lisp-install *.asd assets/ base/ \
		bin/ cffi/ cocoahelper/ examples/ glue-cl-vectors \
		glue-sdl/ glue-vecto/ sdl/ starter-pack/ trivial-garbage/
	common-lisp-symlink-asdf
	dohtml documentation/*.html documentation/*.png || die
}
