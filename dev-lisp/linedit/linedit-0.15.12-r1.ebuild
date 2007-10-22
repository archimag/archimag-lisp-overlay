# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Linedit is a readline-style library written in Common Lisp that provides customizable line-editing features."
HOMEPAGE="http://www.common-lisp.net/project/${PN}/"
SRC_URI="http://common-lisp.net/project/${PN}/files/${PN}_${PV}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc x86"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/terminfo
		dev-lisp/uffi
		dev-lisp/osicat"

S="${WORKDIR}/${PN}_${PV}"

src_unpack() {
	unpack ${A}
	# adds uffi-loader.lisp, removes building .so files
	epatch "${FILESDIR}"/${PV}-${PN}.asd-uffi-glue-gentoo.patch
	cp "${FILESDIR}"/${PV}-Makefile ${S}/Makefile
}

src_compile() {
	make || die "Cannot compile shared object helper"
}

src_install() {
	common-lisp-install *.{lisp,asd} version.lisp-expr
	common-lisp-symlink-asdf
	dodoc LICENSE
	exeinto /usr/lib/${PN}
	doexe *.so
}
