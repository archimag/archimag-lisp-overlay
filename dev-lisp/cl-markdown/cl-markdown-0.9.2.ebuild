# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="CL-Markdown is a Common Lisp rewrite of Markdown."
HOMEPAGE="http://common-lisp.net/project/cl-markdown"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
DEPEND="dev-lisp/metatilities
		dev-lisp/cl-ppcre
		dev-lisp/trivial-shell"

CLSYSTEMS="${PN} ${PN}-test"

src_install() {
	common-lisp-install ${PN}.asd ${PN}-test.asd
	common-lisp-install dev unit-tests website *.config
	common-lisp-symlink-asdf
}
