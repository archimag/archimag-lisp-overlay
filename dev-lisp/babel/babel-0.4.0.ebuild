# Copyright 1999-2013 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=5

inherit common-lisp-3

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

src_install() {
	common-lisp-install-sources -t all src tests
	common-lisp-install-asdf
	dodoc NOTES README
}
