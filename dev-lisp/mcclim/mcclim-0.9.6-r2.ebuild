# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 elisp eutils

DESCRIPTION="McCLIM is a free software implementation of CLIM."
HOMEPAGE="http://common-lisp.net/project/mcclim
		http://cliki.net/McCLIM"
SRC_URI="http://common-lisp.net/project/${PN}/downloads/${P}.tar.gz"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="emacs doc"

DEPEND="emacs? ( virtual/emacs )
		doc? ( sys-apps/texinfo )"
RDEPEND="emacs? ( virtual/emacs )
		!dev-lisp/cl-${PN}
		dev-lisp/spatial-trees
		>=dev-lisp/flexichain-1.5.1
		dev-lisp/clx
		dev-lisp/cffi
		dev-lisp/skippy
		dev-lisp/cl-jpeg
		dev-lisp/zpb-ttf
		dev-lisp/cl-vectors
		dev-lisp/rt
		dev-lisp/fiveam"

CLSYSTEMS="Apps/Functional-Geometry/functional-geometry
		Apps/Scigraph/scigraph
		Drei/cl-automaton/automaton
		ESA/esa
		Experimental/freetype/mcclim-freetype
		Experimental/freetype/mcclim-truetype
		Experimental/tree-with-cross-edges/mcclim-tree-with-cross-edges
		Extensions/conditional-commands/conditional-commands
		clim-examples clim-listener clouseau mcclim
		mcclim-gif-bitmaps mcclim-jpeg-bitmaps"
SITEFILE="${FILESDIR}"/50mcclim-gentoo.el
ELISP_SOURCES="Tools/Emacs/indent-clim.el Tools/Emacs/hyperclim.el"

src_unpack() {
	unpack ${A} && cd "${S}"
	epatch "${FILESDIR}"/${PV}-mcclim.asd-cmucl.patch
}

src_compile() {
	if use emacs ; then
		mv ${ELISP_SOURCES} .
		rm -rf Tools/Emacs
		elisp-compile *.el
	fi
	if use doc ; then
		cd Spec/src
		texi2pdf clim.tex || die "Cannot build PDF docs"
	fi
}

src_install() {
	common-lisp-install *.{lisp,asd} Apps Backends Drei \
		ESA Examples Experimental Extensions Goatee \
		Images Lisp-Dep Looks Tests Tools
	common-lisp-symlink-asdf
	if use emacs; then
		elisp-install ${PN} *.el{,c}
		elisp-site-file-install ${SITEFILE}
	fi
	dodoc INSTALL* README TODO ReleaseNotes/*
	use doc && dodoc Spec/src/clim.pdf
}
