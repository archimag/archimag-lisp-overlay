# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

MY_P=${PN}_${PV}

DESCRIPTION="A charset encoding/decoding library."
HOMEPAGE="http://common-lisp.net/project/babel/"
SRC_URI="http://common-lisp.net/project/${PN}/releases/${MY_P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/alexandria
		dev-lisp/trivial-features
		dev-lisp/trivial-gray-streams
		dev-lisp/rt"

S="${WORKDIR}"/${MY_P}

CLSYSTEMS="babel babel-streams"

src_unpack() {
	unpack ${A}
	cd "${S}"
	epatch "${FILESDIR}"/${PV}/archimag-add-cp1251.patch
	cp "${FILESDIR}"/${PV}/enc-cp1251.lisp src/
}


src_install() {
	common-lisp-install *.asd src/ tests/
	common-lisp-symlink-asdf
	dodoc NOTES README
}
