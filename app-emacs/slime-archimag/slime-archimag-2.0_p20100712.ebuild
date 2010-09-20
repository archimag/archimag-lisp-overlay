# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 elisp eutils

DESCRIPTION="SLIME, the Superior Lisp Interaction Mode (Extended)"
HOMEPAGE="http://common-lisp.net/project/slime/"
SRC_URI="http://github.com/downloads/archimag/archimag-lisp-overlay/${P}.tar.bz2"

LICENSE="GPL-2 xref.lisp"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

RDEPEND="virtual/commonlisp
		dev-lisp/asdf
		!app-emacs/slime"
DEPEND="sys-apps/texinfo
		doc? ( virtual/texi2dvi )"

CLPACKAGE=swank
CLSYSTEMS=swank
SITEFILE=70${PN}-gentoo.el

src_compile() {
	elisp-compile *.el || die "Cannot compile core Elisp files"
	BYTECOMPFLAGS="${BYTECOMPFLAGS} -L contrib -l slime" \
		elisp-compile contrib/*.el || die "Cannot compile contrib Elisp files"
	emake -j1 -C doc slime.info || die "Cannot build info docs"
	if use doc; then
		VARTEXFONTS="${T}"/fonts \
			emake -j1 -C doc slime.pdf || die "emake doc failed"
	fi
}

src_install() {
	## install core
	elisp-install ${PN} *.el{,c} "${FILESDIR}"/swank-loader.lisp \
		|| die "Cannot install SLIME core"
	elisp-site-file-install "${FILESDIR}"/${SITEFILE} \
		|| die "elisp-site-file-install failed"
	# remove upstream swank-loader, since it won't be used
	rm "${S}"/swank-loader.lisp
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf

	# install ChangeLog
	doins ChangeLog

	## install contribs
	elisp-install ${PN}/contrib/ contrib/*.{el,elc,scm,goo} \
		|| die "Cannot install contribs"
	insinto "${CLSOURCEROOT%/}"/swank/contrib
	doins contrib/*.lisp

	## install docs
	dodoc README* ChangeLog HACKING NEWS PROBLEMS
	newdoc contrib/README README.contrib
	newdoc contrib/ChangeLog ChangeLog.contrib
	doinfo doc/slime.info
	use doc && dodoc doc/slime.pdf
}
