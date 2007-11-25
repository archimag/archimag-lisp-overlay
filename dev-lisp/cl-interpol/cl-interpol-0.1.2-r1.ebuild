# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="String interpolation for Common Lisp similar to Perl or Unix shell scripts."
HOMEPAGE="http://weitz.de/${PN}/
	http://www.cliki.net/${PN}"
SRC_URI="http://common-lisp.net/~sionescu/ediware/${PN}_${PV}.orig.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND=""

src_install() {
	common-lisp-install *.{asd,lisp}
	common-lisp-symlink-asdf
	dodoc CHANGELOG README
	dohtml doc/index.html
}
