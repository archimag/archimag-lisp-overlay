# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Ironclad is a Common Lisp library similar to OpenSSL, GNU TLS or Crypto++"
HOMEPAGE="http://www.cliki.net/${PN}"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}"

S="${WORKDIR}/${PN}_${PV}"

src_install() {
	common-lisp-install *.{lisp,asd} test-vectors/*.lisp
	common-lisp-symlink-asdf
	dodoc README TODO NEWS
}
