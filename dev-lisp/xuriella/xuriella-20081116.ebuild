# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A Common Lisp implementation of XSLT 1.0"
HOMEPAGE="http://common-lisp.net/project/xuriella/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/cxml
		dev-lisp/cxml-stp
		dev-lisp/closure-html
		dev-lisp/plexippus-xpath
		dev-lisp/split-sequence"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc SYNTAX
}
