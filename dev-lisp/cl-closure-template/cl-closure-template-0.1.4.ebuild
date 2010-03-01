# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"
inherit common-lisp-2 eutils elisp

DESCRIPTION="Common Lisp implementation of Google's Closure Templates."
HOMEPAGE="http://code.google.com/p/cl-closure-template/"
SRC_URI="http://cl-closure-template.googlecode.com/files/${P}.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="emacs"

RDEPEND=" dev-lisp/asdf-system-connections
		dev-lisp/babel
		>=dev-lisp/parenscript-2.1
		dev-lisp/split-sequence
		dev-lisp/wiki-parser
		dev-lisp/lift
		emacs? ( virtual/emacs )"

CLSYSTEMS="closure-template"
SITEFILE="50${PN}-gentoo.el"

src_install() {
	common-lisp-install ${CLSYSTEMS}.asd src t example
	common-lisp-symlink-asdf

	if use emacs; then
		elisp-install ${PN} closure-template-html-mode.el || die
		elisp-site-file-install "${FILESDIR}"/${SITEFILE} || die
	fi

	dodoc README.markdown
}

pkg_postinst() {
	use emacs && elisp-site-regen
}
