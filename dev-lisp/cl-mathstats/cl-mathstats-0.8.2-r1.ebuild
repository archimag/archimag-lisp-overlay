# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Common Lisp math and statistics routines."
HOMEPAGE="http://common-lisp.net/project/cl-mathstats"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/metatilities-base
		dev-lisp/cl-containers
		dev-lisp/lift"

CLSYSTEMS="${PN} ${PN}-test"

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PV}-fix-asd.patch
}

src_install() {
	common-lisp-install *.asd dev/*.lisp unit-tests
	common-lisp-symlink-asdf
}
