# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-3

DESCRIPTION="Common Lisp docuwiki parser."
HOMEPAGE="http://github.com/archimag/wiki-parser"
SRC_URI="http://cl-closure-template.googlecode.com/files/${P}.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/alexandria
		dev-lisp/iterate
		dev-lisp/cl-ppcre"

src_install() {
	common-lisp-install-sources src
	common-lisp-install-asdf ${PN}.asd
}
