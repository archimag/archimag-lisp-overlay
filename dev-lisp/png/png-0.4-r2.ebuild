# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DEB_PV=2

DESCRIPTION="Common Lisp package to read and write ${PN} image files"
HOMEPAGE="http://www.pvv.ntnu.no/~musum/lisp/code/
	http://www.cliki.net/${PN}
	http://packages.debian.org/unstable/devel/cl-${PN}.html"
SRC_URI="http://ftp.debian.org/debian/pool/main/c/cl-${PN}/cl-${PN}_${PV}.orig.tar.gz
		http://ftp.de.debian.org/debian/pool/main/c/cl-${PN}/cl-${PN}_${PV}-${DEB_PV}.diff.gz"
LICENSE="LGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/uffi"

S="${WORKDIR}/cl-${P}"

src_unpack() {
	unpack ${A}
	epatch cl-${PN}_${PV}-${DEB_PV}.diff
	epatch "${FILESDIR}"/libz-path-gentoo.patch
}

src_install() {
	common-lisp-install *.{cl,asd}
	common-lisp-system-symlink
	dodoc COPYING README
	do-debian-credits
}
