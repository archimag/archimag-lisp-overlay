# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 elisp eutils

DESCRIPTION="SLIME, the Superior Lisp Interaction Mode (Extended)"
HOMEPAGE="http://common-lisp.net/project/slime/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="GPL-2 xref.lisp"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

RDEPEND="virtual/commonlisp dev-lisp/asdf"
DEPEND="${RDEPEND}
	doc? ( virtual/texi2dvi )"

CLPACKAGE=swank
CLSYSTEMS=swank
SITEFILE=70${PN}-gentoo.el

src_unpack() {
	unpack ${A}
	cd "${S}"

	epatch "${FILESDIR}"/${PV}/fix-inspect-presentations.patch
	epatch "${FILESDIR}"/${PV}/fix-slime-indentation.patch
	epatch "${FILESDIR}"/${PV}/fix-swank-sbcl-arglist.patch
	epatch "${FILESDIR}"/${PV}/gentoo-module-load.patch
	epatch "${FILESDIR}"/${PV}/gentoo-dont-call-init.patch
	epatch "${FILESDIR}"/${PV}/gentoo-changelog-date.patch

	# extract date of last update from ChangeLog, bug 233270
	SLIME_CHANGELOG_DATE=$(awk '/^[-0-9]+ / { print $1; exit; }' ChangeLog)
	[ -n "${SLIME_CHANGELOG_DATE}" ] || die "cannot determine ChangeLog date"

	sed -i '/^section :=/d' doc/Makefile || die "sed doc/Makefile failed"
	sed -i "/(defvar \*swank-wire-protocol-version\*/s:nil:\"${SLIME_CHANGELOG_DATE}\":" swank.lisp \
		|| die "sed swank.lisp failed"
	sed -i "s:@SLIME-CHANGELOG-DATE@:${SLIME_CHANGELOG_DATE}:" slime.el \
		|| die "sed slime.el failed"
}

src_compile() {
	elisp-compile *.el || die "Cannot compile core Elisp files"
	BYTECOMPFLAGS="${BYTECOMPFLAGS} -L contrib -l slime" \
		elisp-compile contrib/*.el || die "Cannot compile contrib Elisp files"
	emake -j1 -C doc slime.info || die "Cannot build info docs"
	if use doc; then
		VARTEXFONTS="${T}"/fonts \
			emake -j1 -C doc slime.{ps,pdf} || die "emake doc failed"
	fi
}

src_install() {
	## install core
	elisp-install ${PN} *.el{,c} "${FILESDIR}"/swank-loader.lisp \
		|| die "Cannot install SLIME core"
	elisp-site-file-install "${FILESDIR}"/${PV}/${SITEFILE} \
		|| die "elisp-site-file-install failed"
	cp "${FILESDIR}"/${PV}/swank.asd "${S}"
	# remove upstream swank-loader, since it won't be used
	rm "${S}"/swank-loader.lisp
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf

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
	use doc && dodoc doc/slime.{ps,pdf}
}

pkg_postinst() {
	elisp-site-regen
	while read line; do elog "${line}"; done <<-EOF

	SLIME notes for Gentoo
	----------------------

	If you're interested in hacking this ebuild, SLIME uses its own
	swank.asd system definition file and swank-loader.lisp.

	As always with CVS ebuilds, DO NOT report problems to upstream.
	Always report problems to the Gentoo Bugzilla at
	http://bugs.gentoo.org

	Gentoo LISP Project <http://www.gentoo.org/proj/en/lisp/>

EOF
}
