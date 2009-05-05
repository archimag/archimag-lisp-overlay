# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A library which provides Common Lisp implementations with knowledge about Unicode characters."
HOMEPAGE="http://weitz.de/cl-unicode/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/cl-ppcre"

src_install() {
	common-lisp-install *.{lisp,asd} test/
	common-lisp-symlink-asdf
	dodoc CHANGELOG.txt
	dohtml doc/index.html
}
