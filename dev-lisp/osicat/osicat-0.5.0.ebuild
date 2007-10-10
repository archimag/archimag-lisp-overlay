# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: Exp $

inherit common-lisp eutils

DESCRIPTION="${PN} is a lightweight operating system interface for Common Lisp on Unix-platforms."
HOMEPAGE="http://www.common-lisp.net/project/${PN}/"
SRC_URI="http://common-lisp.net/project/${PN}/files/${PN}_${PV}.tar.gz"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}
	dev-lisp/uffi"

CLPACKAGE=${PN}

S=${WORKDIR}/${PN}_${PV}

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PV}-gentoo.patch
}

src_install() {
	common-lisp-install *.{lisp,asd} *.c version.txt
	common-lisp-system-symlink
	dodoc README LICENSE
}
