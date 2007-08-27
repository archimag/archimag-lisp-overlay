# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2

inherit common-lisp elisp

DESCRIPTION="SLIME, the Superior Lisp Interaction Mode (Extended)"
HOMEPAGE="http://common-lisp.net/project/slime/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~x86"
IUSE="doc"

DEPEND="virtual/emacs
	virtual/commonlisp
	doc? ( virtual/tetex sys-apps/texinfo )"

#S="${WORKDIR}/slime"

CLPACKAGE=swank
SWANK_VERSION="2007-08-22"

src_unpack() {
	unpack ${A}
	cd ${S}
	epatch "${FILESDIR}"/slime-set-swank-wire-protocol-version.patch
	sed -i "s:@SWANK-WIRE-PROTOCOL-VERSION@:${SWANK_VERSION}:" swank.lisp
}

src_compile() {
	elisp-comp *.el || die "Cannot compile Elisp files"
	use doc && make -C doc all slime.pdf
}

src_install() {
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

	# install docs
	dodoc README* ChangeLog HACKING NEWS PROBLEMS
	if use doc; then
		dodoc doc/slime.{ps,pdf}
		doinfo doc/slime.info
	fi
}
