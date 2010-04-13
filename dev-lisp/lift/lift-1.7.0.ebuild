# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="LIFT is an SUnit variant and much much more."
HOMEPAGE="http://common-lisp.net/project/lift/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

CLSYSTEMS="${PN} ${PN}-test"

src_install() {
	common-lisp-install *.asd {dev,timeout,test}/*.lisp
	common-lisp-symlink-asdf
	for i in compare data examples resources; do
		docinto ${i} && dodoc ${i}/*
	done
	dodoc ${PN}-standard.config RELNOTES
}
