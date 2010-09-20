# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Common Lisp package to read and write ${PN} image files"
HOMEPAGE="http://www.ljosa.com/~ljosa/software/${PN}/
	http://www.cliki.net/${PN}"
SRC_URI="http://www.ljosa.com/~ljosa/software/${PN}/download/${P}.tar.gz"

LICENSE="LGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		dev-lisp/uffi"

S="${WORKDIR}/${P}"

src_unpack() {
	unpack ${A}
	epatch cl-${PN}_${PV}-${DEB_PV}.diff
	epatch "${FILESDIR}"/libz-path-gentoo.patch
}

src_install() {
	common-lisp-install *.{cl,asd}
	common-lisp-symlink-asdf
	dodoc AUTHORS BUGS NEWS README
	dohtml doc/index.html
}
