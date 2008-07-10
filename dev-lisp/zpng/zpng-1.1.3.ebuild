# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A Common Lisp library for creating PNG files."
HOMEPAGE="http://www.xach.com/lisp/zpng/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.gz"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
DEPEND="dev-lisp/salza2"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml doc/{index.html,mandelbrot.png}
	dodoc doc/mandelbrot.lisp
}
