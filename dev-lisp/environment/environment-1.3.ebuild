# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Provides an CLOS (CL Object System) encapsulation of the current CL implementation environment"
HOMEPAGE="http://packages.debian.org/unstable/devel/cl-environment"
SRC_URI="http://ftp.debian.org/debian/pool/main/c/cl-${PN}/cl-${PN}_${PV}.orig.tar.gz"
LICENSE="LGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}"

S="${WORKDIR}"/cl-${PN}-${PV}.orig

# FIXME: does not work with current SBCLs

src_unpack() {
	unpack ${A}
	cp "${FILESDIR}"/${PN}.asd "${S}"
}

src_install() {
	common-lisp-install *.{lisp,asd} impl-dependent
	common-lisp-symlink-asdf
	dodoc README
}
