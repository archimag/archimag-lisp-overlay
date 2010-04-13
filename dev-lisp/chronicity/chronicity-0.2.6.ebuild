# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_P=${PN}-v${PV}

DESCRIPTION="A natural language date and time parser for Common Lisp."
HOMEPAGE="http://chaitanyagupta.com/lisp/chronicity/"
SRC_URI="http://chaitanyagupta.com/lisp/${PN}/downloads/${MY_P}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND=">=dev-lisp/cl-ppcre-2.0.0
		 dev-lisp/cl-interpol
		 >=dev-lisp/local-time-1.0.1"

CLPACKAGES="${PN} ${PN}-test"

S="${WORKDIR}"/${MY_P}

src_install() {
	common-lisp-install *.asd src test
	common-lisp-symlink-asdf
	dodoc README
}
