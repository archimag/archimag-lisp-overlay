# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"
inherit common-lisp-2

DESCRIPTION="Lisp Application Builder Interface to libSDL"
HOMEPAGE="http://code.google.com/p/lispbuilder/"
SRC_URI="http://lispbuilder.googlecode.com/files/${P}.tgz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="media-libs/sdl-gfx
		dev-lisp/cffi
		dev-lisp/lispbuilder-sdl"

S="${WORKDIR}/${PN}"

CLSYSTEMS="lispbuilder-sdl-gfx lispbuilder-sdl-gfx-examples lispbuilder-sdl-gfx-cffi"

src_prepare() {
	epatch "${FILESDIR}"/gentoo-fix-asd.patch
	rm -f lispbuilder-sdl-gfx-binaries.asd
}

src_install() {
	common-lisp-install *.asd cffi/ examples/ sdl-gfx/
	common-lisp-symlink-asdf

	dodoc documentation/README
}
