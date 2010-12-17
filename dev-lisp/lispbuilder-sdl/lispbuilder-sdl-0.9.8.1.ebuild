# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=3
inherit common-lisp-3 eutils

DESCRIPTION="Lisp Application Builder Interface to libSDL"
HOMEPAGE="http://code.google.com/p/lispbuilder/"
SRC_URI="http://lispbuilder.googlecode.com/files/${P}.tgz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="media-libs/libpng
		media-libs/jpeg
		media-libs/tiff
		media-libs/libsdl
		media-libs/sdl-image
		dev-lisp/cffi
		dev-lisp/trivial-garbage
		dev-lisp/cl-vectors
		dev-lisp/zpb-ttf
		dev-lisp/vecto"

S="${WORKDIR}/${PN}"

CLSYSTEMS="lispbuilder-sdl lispbuilder-sdl-assets lispbuilder-sdl-base \
		lispbuilder-sdl-binaries lispbuilder-sdl-examples lispbuilder-sdl-cffi \
		lispbuilder-sdl-cl-vectors lispbuilder-sdl-cl-vectors-examples \
		lispbuilder-sdl-vecto lispbuilder-sdl-vecto-examples"

src_compile() {
	emake
}

src_install() {
	# TODO: install assets/ in /usr/share/
	common-lisp-install-sources base bin \
		cffi examples glue glue-cl-vectors \
		glue-vecto sdl sdl-image
	common-lisp-install-sources -t all assets
	common-lisp-install-asdf
	dolib bin/liblispbuilder-sdl-glue.so
	dohtml documentation/*.{html,png}
}
