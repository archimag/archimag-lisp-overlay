# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Common Lisp application server"
HOMEPAGE="http://github.com/archimag/restas"
SRC_URI="http://restas.googlecode.com/files/${P}.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/asdf-system-connections
		 >=dev-lisp/cl-routes-0.2.1
		 >=dev-lisp/hunchentoot-1.0.0
		 dev-lisp/garbage-pools"

CLSYSTEMS="${PN}"

src_install() {
	common-lisp-install *.asd src optional contrib
	common-lisp-symlink-asdf

    doinitd "${FILESDIR}"/restas.lo || die "doinitd failed"

	docinto example && dodoc example/*
}

