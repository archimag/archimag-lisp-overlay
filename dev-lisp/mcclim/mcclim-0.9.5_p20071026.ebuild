# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 elisp eutils

DESCRIPTION="McCLIM is a free software implementation of CLIM."
HOMEPAGE="http://common-lisp.net/project/${PN}
		http://cliki.net/McCLIM"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="emacs doc"

DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/spatial-trees
		dev-lisp/flexichain
		dev-lisp/clx
		emacs? ( virtual/emacs )"

CLSYSTEMS="Apps/Functional-Geometry/functional-geometry
		Apps/Scigraph/scigraph
		Backends/beagle/beagle-backend
		Drei/cl-automaton/automaton
		ESA/esa
		Experimental/freetype/mcclim-freetype
		Experimental/freetype/mcclim-freetype-cffi
		Experimental/tree-with-cross-edges/mcclim-tree-with-cross-edges
		Extensions/conditional-commands/conditional-commands
		clim-examples clim-listener clouseau mcclim"
SITEFILE="${FILESDIR}"/50mcclim-gentoo.el
ELISP_SOURCES="Tools/Emacs/hyperclim.el Tools/Emacs/indent-clim.el"

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PV}-mcclim.asd-cmucl.patch
}

src_compile() {
	if use emacs ; then
		mv ${ELISP_SOURCES} .
		rm -rf "${S}"/Tools/Emacs
		elisp-comp *.el
	fi
}

src_install() {
	common-lisp-install *.{lisp,asd} Apps Backends Drei \
		ESA Examples Experimental Extensions Goatee \
		Images Lisp-Dep Looks Tests Tools
	common-lisp-symlink-asdf
	dodoc INSTALL* README TODO ReleaseNotes/* Webpage/clim-paper.pdf
	if use emacs; then
		elisp-install ${PN} *.el{,c}
		elisp-site-file-install ${SITEFILE}
	fi
}
