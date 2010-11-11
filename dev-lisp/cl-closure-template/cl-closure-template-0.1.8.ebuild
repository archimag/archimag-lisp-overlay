# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

#EAPI=0

inherit common-lisp-2 elisp-common eutils

DESCRIPTION="Common Lisp implementation of Google's Closure Templates."
HOMEPAGE="http://code.google.com/p/cl-closure-template/"
SRC_URI="http://cl-closure-template.googlecode.com/files/${P}.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc emacs"

RDEPEND=" dev-lisp/asdf-system-connections
		dev-lisp/babel
		>=dev-lisp/parenscript-2.1
		dev-lisp/split-sequence
		>=dev-lisp/wiki-parser-0.1.2
		dev-lisp/lift
		emacs? ( virtual/emacs )"

CLSYSTEMS="closure-template"
SITEFILE="50${PN}-gentoo.el"

src_unpack() {
	unpack ${A}
	cd "${S}"

	unlink example/float-controls/resources/jquery
}

src_install() {
	common-lisp-install ${CLSYSTEMS}.asd src t
	common-lisp-symlink-asdf

	if use doc; then
		insinto /usr/share/doc/${PF}/examples
		doins -r example/* || die "Cannot install examples"
		#docinto /usr/share/doc/${PF}/examples
		#dodoc  example/* || die "Cannot install examples"

	fi

	if use emacs; then
		elisp-install ${PN} closure-template-html-mode.el || die "Cannot install elisp sources"
		elisp-site-file-install "${FILESDIR}"/${SITEFILE} || die "Cannot install elisp site file"
	fi

	dodoc README.markdown
}

pkg_postinst() {
	use emacs && elisp-site-regen
}

pkg_postrm() {
	use emacs && elisp-site-regen
}

