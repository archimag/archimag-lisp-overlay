# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

ECVS_SERVER="common-lisp.net:/project/slime/cvsroot"
ECVS_MODULE="slime"
ECVS_PASS="anonymous"

inherit common-lisp-2 elisp cvs

DESCRIPTION="SLIME, the Superior Lisp Interaction Mode (Extended)"
HOMEPAGE="http://common-lisp.net/project/slime/"
SRC_URI=""

LICENSE="GPL-2 xref.lisp"
SLOT="0"
KEYWORDS=""
IUSE="doc"

RDEPEND="virtual/commonlisp"
DEPEND="${RDEPEND}
		doc? ( virtual/texi2dvi )"

S="${WORKDIR}"/${PN}

CLPACKAGE=swank
CLSYSTEMS=swank
SITEFILE=70${PN}-gentoo.el

src_unpack() {
	cvs_src_unpack && cd "${S}"

	SWANK_VERSION=$(head -n 1 "${S}"/ChangeLog | awk '{print $1}')
	sed "s:(defvar \*swank-wire-protocol-version\* nil:(defvar \*swank-wire-protocol-version\* \"${SWANK_VERSION}\":" -i "${S}"/swank.lisp

	epatch "${FILESDIR}"/${PV}/module-load-gentoo.patch
	epatch "${FILESDIR}"/${PV}/dont-call-init.patch
	epatch "${FILESDIR}"/${PV}/inspect-presentations.patch
	epatch "${FILESDIR}"/${PV}/fix-ecl.patch
	epatch "${FILESDIR}"/${PV}/fix-swank-listener-hooks-contrib.patch
	epatch "${FILESDIR}"/${PV}/fix-slime-indentation.patch
}

rel_elisp-comp() {
	test $# -gt 0 || return 1

	if test -z "${EMACS}" || test "${EMACS}" = "t"; then
		# Value of "t" means we are running in a shell under Emacs.
		# Just assume Emacs is called "emacs".
		EMACS=/usr/bin/emacs
	fi
	einfo "Compiling GNU Emacs Elisp files ..."

	"${EMACS}" -batch -q --no-site-file --no-init-file \
		-L . -L contrib --eval "(require 'slime)" -f batch-byte-compile "$@"
	return $?
}

src_compile() {
	elisp-comp *.el || die "Cannot compile core Elisp files"
	rel_elisp-comp contrib/*.el || die "Cannot compile contrib Elisp files"
	emake -j1 -C doc slime.info || die "Cannot build info docs"
	if use doc; then
		VARTEXFONTS="${T}"/fonts \
			emake -j1 -C doc slime.{ps,pdf} || die "emake doc failed"
	fi
}

src_install() {
	## install core
	elisp-install ${PN} *.el{,c} ChangeLog "${FILESDIR}"/swank-loader.lisp || die "Cannot install SLIME core"
	elisp-site-file-install "${FILESDIR}"/${PV}/${SITEFILE} || die "Cannot install site file"
	cp "${FILESDIR}"/${PV}/swank.asd "${S}"
	# remove upstream swank-loader, since it won't be used
	rm "${S}"/swank-loader.lisp
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf

	## install contribs
	elisp-install ${PN}/contrib/ contrib/*.{el,elc,scm,goo} \
		contrib/{README,ChangeLog} || die "Cannot install contribs"
	insinto "${CLSOURCEROOT}"/swank/contrib
	doins contrib/*.lisp

	## install docs
	dodoc README* ChangeLog HACKING NEWS PROBLEMS
	doinfo doc/slime.info
	use doc && dodoc doc/slime.{ps,pdf}
}
