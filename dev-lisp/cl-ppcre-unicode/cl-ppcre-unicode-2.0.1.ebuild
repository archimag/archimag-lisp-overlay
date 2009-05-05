# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_P=cl-ppcre-${PV}

DESCRIPTION="CL-PPCRE is a portable regular expression library for Common Lisp."
HOMEPAGE="http://weitz.de/cl-ppcre/
		  http://www.cliki.net/cl-ppcre"
SRC_URI="http://common-lisp.net/~sionescu/files/${MY_P}.tar.bz2"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/cl-ppcre
		dev-lisp/cl-unicode"

S="${WORKDIR}"/${MY_P}

src_install() {
	common-lisp-install ${PN}.asd ${PN}/ test/unicode*
	common-lisp-symlink-asdf
	dodoc CHANGELOG
	dohtml doc/index.html
}
