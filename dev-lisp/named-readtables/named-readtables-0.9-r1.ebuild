# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-2

DESCRIPTION="A Common Lisp library that provides a namespace for readtables."
HOMEPAGE="http://common-lisp.net/project/editor-hints/"
SRC_URI="http://common-lisp.net/project/editor-hints/releases/${P}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

src_install() {
	common-lisp-install *.{lisp,asd} tests/*.lisp
	common-lisp-symlink-asdf
	dohtml doc/${PN}.html
}
