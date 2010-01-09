# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit elisp

DESCRIPTION="Zenburn color-theme for Emacs"
HOMEPAGE="http://slinky.imukuppi.org/zenburnpage/"
SRC_URI="http://brockman.se/2003/${PN}-el/${PN}.el"

LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~amd64 ~x86"
IUSE=""

DEPEND="app-emacs/color-theme"
RDEPEND="${DEPEND}"

src_unpack() {
	cp ${DISTDIR}/${PN}.el ${WORKDIR}/color-theme-${PN}.el
}

pkg_postinst() {
	einfo "Add to your ~/.emacs:"
	einfo "(require 'color-theme)"
	einfo "(color-theme-initialize)"
	einfo "(color-theme-zenburn)"
	einfo "to enable zenburn color-theme"
}
