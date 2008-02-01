# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="CL-containers adds binary search trees, red-black trees, sparse arrays, and other useful containers to CommonLisp."
HOMEPAGE="http://common-lisp.net/project/${PN}/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"

DEPEND="dev-lisp/asdf-system-connections
		dev-lisp/metatilities-base
		dev-lisp/metabang-dynamic-classes
		dev-lisp/lift"

CLSYSTEMS="${PN} ${PN}-test"

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PV}-fix-asd.patch
}

src_install() {
	common-lisp-install *.asd {dev,tests}/*.lisp
	common-lisp-symlink-asdf
	dodoc *.config doc/introduction-to-cl-containers.pdf
}
