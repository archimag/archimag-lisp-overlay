# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=3
inherit common-lisp-3

DESCRIPTION="Lisp Application Builder Interface to SDL_ttf"
HOMEPAGE="http://code.google.com/p/lispbuilder/"
SRC_URI="http://lispbuilder.googlecode.com/files/${P}.tgz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="media-libs/sdl-ttf
		dev-lisp/cffi
		dev-lisp/lispbuilder-sdl"

S="${WORKDIR}/${PN}"

CLSYSTEMS="lispbuilder-sdl-ttf lispbuilder-sdl-ttf-binaries \
		lispbuilder-sdl-ttf-cffi lispbuilder-sdl-ttf-examples"

src_prepare() {
	epatch "${FILESDIR}"/gentoo-fix-asd.patch
}

src_compile() {
	emake
}

src_install() {
	common-lisp-install-sources bin cffi examples sdl-ttf
	common-lisp-install-asdf
	dolib bin/liblispbuilder-sdl-ttf-glue.so
	dodoc documentation/*.{html,png}
}
