# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Package that implements binary trees of various kinds."
HOMEPAGE="http://cliki.net/${PN}/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND=""

src_install() {
	common-lisp-install *.{asd,lisp}
	common-lisp-install LICENSE NEWS README TODO
	common-lisp-symlink-asdf
}
