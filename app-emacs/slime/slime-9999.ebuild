# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2

ECVS_SERVER="common-lisp.net:/project/slime/cvsroot"
ECVS_BRANCH="HEAD"
ECVS_MODULE="slime"
ECVS_USER="anonymous"
ECVS_PASS="anonymous"
ECVS_CVS_OPTIONS="-dP"

inherit common-lisp elisp cvs

DESCRIPTION="SLIME, the Superior Lisp Interaction Mode (Extended)"
HOMEPAGE="http://common-lisp.net/project/slime/"
SRC_URI=""
LICENSE="GPL-2"
SLOT="0"
KEYWORDS=""
IUSE="doc"

DEPEND="virtual/emacs
	virtual/commonlisp
	doc? ( virtual/tetex sys-apps/texinfo )"

S="${WORKDIR}/slime"

CLPACKAGE=swank

src_unpack() {
	cvs_src_unpack
	cd ${S}
	epatch "${FILESDIR}"/slime-set-swank-wire-protocol-version.patch
	SWANK_VERSION=$(head -n 1 ChangeLog | awk '{print $1}')
	sed -i "s:@SWANK-WIRE-PROTOCOL-VERSION@:${SWANK_VERSION}:" swank.lisp
	epatch "${FILESDIR}"/slime-fix-module-load.patch
	sed -i "s:@CONTRIBDIR@:${CLSOURCEROOT}/${CLPACKAGE}/contrib/:" swank.lisp
}

fix_elisp-comp() {
	for f in "$@" ; do
		local name=$(basename ${f})
		local dir=$(dirname ${f})
		mv ${name/%el/elc} ${dir}
	done
}

src_compile() {
	elisp-comp *.el contrib/*.el || die "Cannot compile Elisp files"
	# since elisp-comp disregards the files' complete path
	# we must move ourselves the compiled files to contrib/
	fix_elisp-comp contrib/*.el
	use doc && make -C doc all slime.pdf
}

src_install() {
	# install core
	elisp-install ${PN} *.el{,c} ChangeLog ${FILESDIR}/swank-loader.lisp \
		|| die "Cannot install SLIME core"
	elisp-site-file-install ${FILESDIR}/70slime-gentoo.el \
		|| die "Cannot install site file"
	insinto "${CLSOURCEROOT}"/swank
	doins *.lisp ${FILESDIR}/swank.asd
	dodir "${CLSYSTEMROOT}"
	dosym "${CLSOURCEROOT}"/swank/swank.asd \
		"${CLSYSTEMROOT}"
	dosym /usr/share/emacs/site-lisp/${PN}/swank-version.el \
		"${CLSOURCEROOT}"/swank

	# install contribs
	elisp-install ${PN}/contrib/ contrib/*.el{,c} \
		contrib/{README,ChangeLog} || die "Cannot install contribs"
	insinto "${CLSOURCEROOT}"/swank/contrib
	doins contrib/*.lisp

	# install docs
	dodoc README* ChangeLog HACKING NEWS PROBLEMS
	if use doc; then
		dodoc doc/slime.{ps,pdf}
		doinfo doc/slime.info
	fi
}
