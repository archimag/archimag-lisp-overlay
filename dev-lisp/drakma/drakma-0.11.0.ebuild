# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp

DESCRIPTION="Drakma is a Common Lisp HTTP client."
HOMEPAGE="http://weitz.de/${PN}/"
SRC_URI="http://common-lisp.net/~sionescu/ediware/${PN}_${PV}.orig.tar.gz"
LICENSE="BSD"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
SLOT="0"
DEPEND="!dev-lisp/cl-${PN}
	dev-lisp/chunga
	dev-lisp/puri
	>=dev-lisp/cl-base64-3.3.2
	dev-lisp/usocket
	dev-lisp/cl-plus-ssl"

CLPACKAGE=${PN}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-system-symlink
	dodoc CHANGELOG*
	dohtml doc/index.html
}
