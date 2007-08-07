# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2

ECVS_SERVER="common-lisp.net:/project/slime/cvsroot"
ECVS_BRANCH="HEAD"
ECVS_MODULE="slime"
ECVS_USER="anonymous"
ECVS_PASS="anonymous"
ECVS_CVS_OPTIONS="-dP"

inherit elisp cvs

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
	sed -i "s:\\\$SWANK-WIRE-PROTOCOL-VERSION\\\$:${SWANK_VERSION}:" swank.lisp
}

src_compile() {
	elisp-comp *.el || die
	use doc && make -C doc all slime.pdf
}

src_install() {
	elisp-install ${PN} *.{el,elc} ChangeLog ${FILESDIR}/swank-loader.lisp
	elisp-site-file-install ${FILESDIR}/70slime-gentoo.el
	dodoc README* ChangeLog HACKING NEWS PROBLEMS
	insinto /usr/share/common-lisp/source/swank
	doins *.lisp ${FILESDIR}/swank.asd
	dodir /usr/share/common-lisp/systems
	dosym /usr/share/common-lisp/source/swank/swank.asd \
		/usr/share/common-lisp/systems
	dosym /usr/share/emacs/site-lisp/${PN}/swank-version.el \
		/usr/share/common-lisp/source/swank
	if use doc; then
		dodoc doc/slime.{ps,pdf}
		doinfo doc/slime.info
	fi
}
