# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: Exp $

inherit common-lisp-2

DESCRIPTION="A Common Lisp library implementing an abstraction layer over platform dependent functionality."
HOMEPAGE="http://homepage.mac.com/svc/s-sysdeps/"
SRC_URI="mirror://gentoo/${P}.tar.gz"
LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}"

src_unpack() {
	unpack ${A}
	rm "${S}"/Makefile
}

src_install() {
	common-lisp-install src test ${PN}.asd
	common-lisp-symlink-asdf
	dohtml doc/*.html
	dodoc README.txt
}
