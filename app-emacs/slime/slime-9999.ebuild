# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

ECVS_SERVER="common-lisp.net:/project/slime/cvsroot"
ECVS_MODULE="slime"
ECVS_PASS="anonymous"

inherit common-lisp-2 elisp cvs

DESCRIPTION="SLIME, the Superior Lisp Interaction Mode (Extended)"
HOMEPAGE="http://common-lisp.net/project/${PN}/"
SRC_URI=""
LICENSE="GPL-2 xref.lisp"
SLOT="0"
KEYWORDS=""
IUSE="doc"

DEPEND="doc? ( virtual/tetex sys-apps/texinfo )"

S="${WORKDIR}"/${PN}

CLPACKAGE=swank
CLSYSTEMS=swank
SITEFILE=70${PN}-gentoo.el

src_unpack() {
	cvs_src_unpack
	cd "${S}"
	epatch "${FILESDIR}"/set-swank-wire-protocol-version.patch
	SWANK_VERSION=$(head -n 1 ChangeLog | awk '{print $1}')
	sed -i "s:@SWANK-WIRE-PROTOCOL-VERSION@:${SWANK_VERSION}:" swank.lisp
	epatch "${FILESDIR}"/fix-module-load.patch
	sed -i "s:@CONTRIBDIR@:${CLSOURCEROOT}/${CLPACKAGE}/contrib/:" swank.lisp
	epatch "${FILESDIR}"/inspect-presentations.patch
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
	if use doc; then make -C doc slime.{ps,pdf,info} || die "Cannot build docs"; fi
}

src_install() {
	# install core
	elisp-install ${PN} *.el{,c} ChangeLog "${FILESDIR}"/swank-loader.lisp \
		|| die "Cannot install SLIME core"
	elisp-site-file-install "${FILESDIR}/${SITEFILE}"
	cp "${FILESDIR}"/swank.asd "${S}"
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dosym "${SITELISP}"/${PN}/swank-version.el "${CLSOURCEROOT}"/swank

	# install contribs
	elisp-install ${PN}/contrib/ contrib/*.el{,c} \
		contrib/{README,ChangeLog} || die "Cannot install contribs"
	insinto "${CLSOURCEROOT}"/swank/contrib
	doins contrib/*.lisp

	# install docs
	dodoc README* ChangeLog HACKING NEWS PROBLEMS
	if use doc; then
		dodoc doc/slime.{ps,pdf} || die "dodoc failed"
		doinfo doc/slime.info || die "dodoc failed"
	fi
}
