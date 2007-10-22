# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DEB_PV=2

DESCRIPTION="Common Lisp regression tester from MIT"
HOMEPAGE="http://www-2.cs.cmu.edu/afs/cs/project/ai-repository/ai/lang/lisp/code/testing/${PN}/
		http://packages.debian.org/unstable/devel/cl-${PN}.html
		http://www.cliki.net/${PN}"
SRC_URI="http://ftp.debian.org/debian/pool/main/c/cl-${PN}/cl-${PN}_${PV}.orig.tar.gz
		http://ftp.debian.org/debian/pool/main/c/cl-${PN}/cl-${PN}_${PV}-${DEB_PV}.diff.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}"

S="${WORKDIR}/cl-${P}"

src_unpack() {
	unpack ${A}
	epatch cl-${PN}_${PV}-${DEB_PV}.diff
	cp "${FILESDIR}"/${PN}.asd "${S}"
}

src_install() {
	common-lisp-install ${PN}.{lisp,asd}
	common-lisp-system-symlink
	dodoc rt-doc.txt rt-test.lisp || die "Cannot install tests"
}
