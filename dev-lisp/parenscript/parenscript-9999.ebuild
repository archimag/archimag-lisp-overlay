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
KEYWORDS=""
IUSE="doc"

RDEPEND="!dev-lisp/cl-${PN}
		!dev-lisp/cl-${PN}-darcs
		!dev-lisp/${PN}-darcs
		dev-lisp/anaphora
		dev-lisp/cl-ppcre"

# TODO: install extras/js-expander.el
src_install() {
	common-lisp-install parenscript.asd extras/*.lisp runtime src t
	common-lisp-symlink-asdf
	dodoc contributors || die "Cannot install docs"
	if use doc ; then
		dodoc docs/introduction.lisp || die "Cannot install docs"
		dohtml -r docs
	fi
}
