# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"
inherit common-lisp-2 git eutils

DESCRIPTION="Parenscript is a small lispy language that can be compiled to JavaScript."
HOMEPAGE="http://common-lisp.net/project/parenscript/"
EGIT_REPO_URI="git://common-lisp.net/projects/parenscript/parenscript.git"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

DEPEND="doc? ( virtual/latex-base )"
RDEPEND="!dev-lisp/cl-${PN}
		!dev-lisp/cl-${PN}-darcs
		!dev-lisp/${PN}-darcs
		dev-lisp/anaphora
		dev-lisp/cl-ppcre"

src_compile() {
	if use doc ; then
		cd docs
		sh build.sh || die "Cannot build docs"
	fi
}

# TODO: install extras/js-expander.el
src_install() {
	common-lisp-install parenscript.asd extras/*.lisp runtime src t
	common-lisp-symlink-asdf
	dodoc contributors docs/internal/notes-and-links.txt || die "Cannot install docs"
	use doc && { dodoc docs/*.pdf || die "Cannot install docs" ; }
}
