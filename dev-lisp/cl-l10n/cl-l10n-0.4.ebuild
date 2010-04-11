# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

MY_P=${PN}_${PV}

DESCRIPTION="A portable library for handling program localization."
HOMEPAGE="http://common-lisp.net/project/cl-l10n/"
SRC_URI="http://common-lisp.net/project/${PN}/files/${MY_P}.tgz"

LICENSE="MIT LGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

DEPEND="sys-apps/texinfo
		doc? ( virtual/texi2dvi )"
RDEPEND="dev-lisp/iterate
		dev-lisp/cl-ppcre
		dev-lisp/cl-fad
		dev-lisp/flexi-streams"

S="${WORKDIR}"/${MY_P}

src_unpack() {
	unpack ${A}
	rm -rf "${S}"/{,locales}/CVS
}

src_compile() {
	cd doc
	makeinfo ${PN}.texi -o ${PN}.info || die "Cannot build info docs"
	if use doc ; then
		VARTEXFONTS="${T}"/fonts \
			texi2pdf ${PN}.texi -o ${PN}.pdf || die "Cannot build PDF docs"
	fi
}

src_install() {
	common-lisp-install *.{lisp,asd} languages locales resources
	common-lisp-symlink-asdf
	dodoc ChangeLog README
	doinfo doc/${PN}.info
	use docs && dodoc doc/${PN}.pdf
}
