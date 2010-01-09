# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"
inherit common-lisp-2 eutils

DESCRIPTION="Common Lisp implementation of Google's Closure Templates."
HOMEPAGE="http://code.google.com/p/cl-closure-template/"
SRC_URI="http://cl-closure-template.googlecode.com/files/${P}.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/asdf-system-connections
		dev-lisp/babel
		dev-lisp/parenscript
		dev-lisp/split-sequence
		dev-lisp/wiki-parser
		dev-lisp/lift"

CLSYSTEMS="closure-template"

src_prepare() {
	epatch "${FILESDIR}"/gentoo-use-babel.patch
}

# TODO: install closure-template-html-mode.el
src_install() {
	common-lisp-install ${CLSYSTEMS}.asd src t example
	common-lisp-symlink-asdf
	dodoc README.markdown
}
