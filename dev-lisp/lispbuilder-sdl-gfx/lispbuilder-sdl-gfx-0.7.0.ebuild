# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=3
inherit common-lisp-3

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

CLSYSTEMS="lispbuilder-sdl-gfx lispbuilder-sdl-gfx-cffi lispbuilder-sdl-gfx-examples"

src_prepare() {
	epatch "${FILESDIR}"/gentoo-fix-asd.patch
}

src_install() {
	common-lisp-install-sources cffi examples sdl-gfx
	common-lisp-install-asdf
	dodoc documentation/README
}
