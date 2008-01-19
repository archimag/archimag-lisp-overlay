# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="A compatibility layer that helps make different system definitions play nicely using the same rules."
HOMEPAGE="http://common-lisp.net/project/cl-containers/defsystem-compatibility"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"

DEPEND="dev-lisp/metatilities-base
		dev-lisp/lift"

CLSYSTEMS="${PN} ${PN}-test"

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PV}-fix-asd.patch
}

src_install() {
	common-lisp-install *.asd dev unit-tests
	common-lisp-symlink-asdf
}
