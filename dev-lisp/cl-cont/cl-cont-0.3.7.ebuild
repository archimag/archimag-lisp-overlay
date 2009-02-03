# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_P=${PN}_${PV}

DESCRIPTION="CL-CONT is a code walker that implements delimited continuations in Common Lisp."
HOMEPAGE="http://common-lisp.net/project/cl-cont/"
SRC_URI="http://common-lisp.net/project/${PN}/releases/${MY_P}.tar.gz"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/closer-mop
		dev-lisp/rt"

CLSYSTEMS="${PN} ${PN}-test"

S="${WORKDIR}"/${MY_P}

src_install() {
	common-lisp-install *.asd src test
	common-lisp-symlink-asdf
	dodoc doc/*
}
