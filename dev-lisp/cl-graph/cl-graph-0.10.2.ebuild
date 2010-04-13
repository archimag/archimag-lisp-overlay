# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Graph manipulation utilities for Common Lisp."
HOMEPAGE="http://common-lisp.net/project/cl-graph"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/asdf-system-connections
		>=dev-lisp/metatilities-base-0.6.0
		>=dev-lisp/moptilities-0.3.10
		>=dev-lisp/metatilities-0.6.15
		>=dev-lisp/cl-containers-0.11.0
		dev-lisp/lift"

CLSYSTEMS="${PN} ${PN}-test"

src_unpack() {
	unpack ${A} && cd "${S}"
	epatch "${FILESDIR}"/fix-deps.patch
}

src_install() {
	common-lisp-install *.asd dev/{*.lisp,graphviz} unit-tests
	common-lisp-symlink-asdf
	docinto examples && dodoc dev/examples/*
}
