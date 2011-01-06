# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_PV=${PV:0:4}-${PV:4:2}-${PV:6:2}
MY_P=${PN}-${MY_PV}

DESCRIPTION="Atdoc generates documentation for Common Lisp packages."
HOMEPAGE="http://www.lichteblau.com/atdoc/"
SRC_URI="http://www.lichteblau.com/${PN}/download/${MY_P}.tgz"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/cxml
		dev-lisp/split-sequence
		dev-lisp/xuriella
		dev-lisp/closer-mop
		dev-lisp/cl-ppcre
		app-emacs/slime"

S="${WORKDIR}"/${MY_P}

src_install() {
	common-lisp-install *.{lisp,asd} css gif tex xsl
	common-lisp-symlink-asdf

	dodoc README
}
