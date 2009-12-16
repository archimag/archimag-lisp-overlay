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
KEYWORDS="~amd64 ~x86"
IUSE=""

S="${WORKDIR}/${PN}"

CLPACKAGE="lispbuilder-sdl-gfx"

src_install() {
	common-lisp-install *.asd bin/ cffi/ examples/ sdl-gfx/
	common-lisp-symlink-asdf

	dodoc documentation/README || die
}
