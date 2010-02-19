# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Parenscript is a small lispy language that can be compiled to JavaScript."
HOMEPAGE="http://common-lisp.net/project/parenscript/"
SRC_URI="http://github.com/downloads/archimag/gentoo-lisp-overlay/${P}.tar.bz2"


LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

DEPEND="doc? ( virtual/latex-base )"
RDEPEND="dev-lisp/cl-ppcre
		 dev-lisp/anaphora
		!dev-lisp/cl-${PN}
		!dev-lisp/cl-${PN}-darcs
		!dev-lisp/${PN}-darcs"

# TODO: install extras/js-expander.el
src_install() {
	common-lisp-install parenscript.asd extras/*.lisp runtime src t
	common-lisp-symlink-asdf
	dodoc contributors COPYING || die "Cannot install docs"
	use doc && { dodoc docs/* || die "Cannot install docs" ; }
}
