# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Common Lisp library to parse any number string"
HOMEPAGE="http://www.mapcar.org/~mrd/utilities/
		http://www.cliki.net/parse-number
		http://packages.debian.org/unstable/devel/cl-parse-number.html"
SRC_URI="mirror://debian/pool/main/c/cl-${PN}/cl-${PN}_1.0.orig.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}"

S="${WORKDIR}"/cl-${P}

src_unpack() {
	unpack ${A}
	cp "${FILESDIR}"/${PN}.asd "${S}"
}
