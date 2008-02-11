# Copyright 1999-2008 Gentoo Foundation
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

DEPEND="dev-lisp/cl-ppcre
		sys-apps/texinfo"

S="${WORKDIR}"/${MY_P}

src_unpack() {
	unpack ${A}
	rm -rf "${S}"/{,locales}/CVS
}

src_compile() {
	makeinfo doc/${PN}.texi -o ${PN}.info
}

src_install() {
	common-lisp-install *.{lisp,asd} locales
	common-lisp-symlink-asdf
	dodoc ChangeLog README
	doinfo *.info*
}
