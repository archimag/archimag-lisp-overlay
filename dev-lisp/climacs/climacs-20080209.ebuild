# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 elisp eutils

DESCRIPTION="Climacs is an Emacs-like text editor written in Common Lisp."
HOMEPAGE="http://common-lisp.net/project/climacs"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="LGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

DEPEND=">=dev-lisp/flexichain-0.4.1
		>=dev-lisp/mcclim-0.9.5_p20080209"

src_compile() {
	if use doc ; then
		cd Doc
		texi2pdf ${PN}-{internals,user}.texi || die "Cannot build PDF docs"
	fi
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc INSTALL* README TODO
	use doc && dodoc Doc/${PN}-{internals,user}.pdf
}
