# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 elisp-common eutils

DESCRIPTION="Climacs is an Emacs-like text editor written in Common Lisp."
HOMEPAGE="http://common-lisp.net/project/climacs"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="LGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

DEPEND="sys-apps/texinfo
		doc? ( virtual/texi2dvi )"
RDEPEND=">=dev-lisp/flexichain-0.4.1
		>=dev-lisp/mcclim-0.9.5_p20080209"

src_compile() {
	cd Doc
	makeinfo --force ${PN}-internals.texi -o ${PN}-internals.info
	[[ -e ${PN}-internals.info ]] || die "Cannot build info docs(internals)"
	makeinfo --force ${PN}-user.texi -o ${PN}-user.info
	[[ -e ${PN}-user.info ]] || die "Cannot build info docs(user manual)"
	if use doc ; then
		VARTEXFONTS="${T}"/fonts \
			texi2pdf ${PN}-internals.texi -o ${PN}-internals.pdf \
			|| die "Cannot build PDF docs(internals)"
		VARTEXFONTS="${T}"/fonts \
			texi2pdf ${PN}-user.texi -o ${PN}-user.pdf \
			|| die "Cannot build PDF docs(user manual)"
	fi
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc INSTALL* README TODO
	doinfo Doc/${PN}-{internals,user}.info
	use doc && dodoc Doc/${PN}-{internals,user}.pdf
}

pkg_postinst() {
	use emacs && elisp-site-regen
}

pkg_postrm() {
	use emacs && elisp-site-regen
}
