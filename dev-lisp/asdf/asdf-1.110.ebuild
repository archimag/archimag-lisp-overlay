# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: Exp $

inherit eutils common-lisp-2

DESCRIPTION="ASDF is Another System Definition Facility for Common Lisp"
HOMEPAGE="http://www.cliki.net/asdf"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~mips ~ppc ~ppc-macos ~ppc64 ~s390 ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}"

src_install() {
	common-lisp-install {asdf,wild-modules,asdf-install}.lisp
	dodoc README
	docinto examples && dodoc test/*
}
