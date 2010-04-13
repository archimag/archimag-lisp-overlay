# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-2

DESCRIPTION="Lisp Application Builder Interface to libSDL"
HOMEPAGE="http://code.google.com/p/lispbuilder/"
SRC_URI="http://lispbuilder.googlecode.com/files/${P}.tgz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="media-libs/libsdl
		dev-lisp/cffi
		dev-lisp/trivial-garbage
		dev-lisp/cl-vectors
		dev-lisp/zpb-ttf
		dev-lisp/vecto"

S="${WORKDIR}/${PN}"

CLSYSTEMS="lispbuilder-sdl lispbuilder-sdl-examples lispbuilder-sdl-assets \
		lispbuilder-sdl-base lispbuilder-sdl-cffi \
		lispbuilder-sdl-cl-vectors lispbuilder-sdl-cl-vectors-examples \
		lispbuilder-sdl-vecto lispbuilder-sdl-vecto-examples"

src_prepare() {
	rm -rf lispbuilder-sdl-binaries.asd trivial-garbage.asd
	epatch "${FILESDIR}"/gentoo-dont-load-audio-glue.patch
}

src_install() {
	# TODO: install assets/ in /usr/share/
	common-lisp-install *.asd assets/ base/ \
		cffi/ examples/ glue-cl-vectors \
		glue-sdl/ glue-vecto/ sdl/
	common-lisp-symlink-asdf
	dohtml documentation/*.{html,png}
}
