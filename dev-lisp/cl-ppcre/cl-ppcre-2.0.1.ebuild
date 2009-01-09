# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="CL-PPCRE is a portable regular expression library for Common Lisp."
HOMEPAGE="http://weitz.de/cl-ppcre/
		  http://www.cliki.net/cl-ppcre"
SRC_URI="http://common-lisp.net/~sionescu/files/ediware/${P}.tar.bz2"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="dev-lisp/flexi-streams"
PDEPEND="dev-lisp/cl-ppcre-unicode"

src_unpack() {
	unpack ${A} && cd "${S}"
	rm -rf cl-ppcre-unicode test/unicode*
}

src_install() {
	common-lisp-install *.lisp ${PN}.asd test/
	common-lisp-symlink-asdf
	dodoc CHANGELOG
	dohtml doc/index.html
}
