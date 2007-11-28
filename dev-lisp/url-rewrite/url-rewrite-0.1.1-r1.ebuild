# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Rewrite (X)HTML attributes with Common Lisp."
HOMEPAGE="http://www.weitz.de/${PN}/"
SRC_URI="http://common-lisp.net/~sionescu/ediware/${PN}_${PV}.orig.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc CHANGELOG README
	dohtml doc/index.html
}
