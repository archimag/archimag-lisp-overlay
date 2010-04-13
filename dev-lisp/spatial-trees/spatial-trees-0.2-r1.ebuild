# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A Common Lisp library providing access to dynamic index structures for spatially-extended data."
HOMEPAGE="http://www.cliki.net/spatial-trees"
SRC_URI="http://ftp.linux.org.uk/pub/lisp/cclan/${P}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}"

src_install() {
	common-lisp-install *.{lisp,asd} LICENCE TODO
	common-lisp-symlink-asdf
	dodoc BUGS TODO
}
