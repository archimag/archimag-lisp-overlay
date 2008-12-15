# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EGIT_REPO_URI="http://common-lisp.net/project/parenscript/git/parenscript/"

inherit common-lisp-2 git eutils

DESCRIPTION="Parenscript is a small lispy language that can be compiled to JavaScript."
HOMEPAGE="http://common-lisp.net/project/parenscript/"

LICENSE="BSD"
SLOT="0"
KEYWORDS=""
IUSE="doc"

DEPEND="!dev-lisp/cl-${PN}
		!dev-lisp/cl-${PN}-darcs
		!dev-lisp/${PN}-darcs
		doc? ( virtual/latex-base )"

src_compile() {
	use doc && { cd docs ; sh build.sh ; }
}

# TODO: install extras/js-expander.el
src_install() {
	common-lisp-install parenscript.asd src t
	common-lisp-symlink-asdf
	dodoc contributors docs/internal/notes-and-links.txt || die
	use doc && { dodoc docs/*.pdf || die ; }
}
