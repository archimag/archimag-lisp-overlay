# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp elisp

DESCRIPTION="SLIME, the Superior Lisp Interaction Mode (Extended)"
HOMEPAGE="http://common-lisp.net/project/slime/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="GPL-2 xref.lisp"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

DEPEND="virtual/commonlisp
	doc? ( virtual/tetex sys-apps/texinfo )"

CLPACKAGE=swank
SWANK_VERSION="2007-08-16"
SITEFILE=70${PN}-gentoo.el

src_unpack() {
	unpack ${A}
	cd "${S}"
	epatch "${FILESDIR}"/${PN}-set-swank-wire-protocol-version.patch
	sed -i "s:@SWANK-WIRE-PROTOCOL-VERSION@:${SWANK_VERSION}:" swank.lisp
	epatch "${FILESDIR}"/${P}-fix-slime-edit-definition.patch
}

src_compile() {
	elisp-comp *.el || die "Cannot compile Elisp files"
	use doc && make -C doc all slime.pdf
}

src_install() {
	elisp-install ${PN} *.el{,c} ChangeLog "${FILESDIR}"/swank-loader.lisp \
		|| die "Cannot install SLIME core"
	elisp-site-file-install "${FILESDIR}/${SITEFILE}"
	insinto "${CLSOURCEROOT}"/swank
	doins *.lisp "${FILESDIR}"/swank.asd
	dodir "${CLSYSTEMROOT}"
	dosym "${CLSOURCEROOT}"/swank/swank.asd "${CLSYSTEMROOT}"
	dosym "${SITELISP}"/${PN}/swank-version.el "${CLSOURCEROOT}"/swank

	# install docs
	dodoc README* ChangeLog HACKING NEWS PROBLEMS || die "dodoc failed"
	if use doc; then
		dodoc doc/slime.{ps,pdf} || die "dodoc failed"
		doinfo doc/slime.info
	fi
}
