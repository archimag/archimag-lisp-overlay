# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_P=${PN}-${PV:0:4}-${PV:4:2}-${PV:6:2}

DESCRIPTION="A Common Lisp implementation of XSLT 1.0"
HOMEPAGE="http://common-lisp.net/project/xuriella/"
SRC_URI="http://common-lisp.net/project/${PN}/download/${MY_P}.tgz"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

RDEPEND="dev-lisp/cxml
		dev-lisp/cxml-stp
		dev-lisp/closure-html
		dev-lisp/plexippus-xpath
		dev-lisp/split-sequence"

S="${WORKDIR}"/${MY_P}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc SYNTAX
	use doc && dohtml -r doc/{atdoc,index.css,*.html}
}
