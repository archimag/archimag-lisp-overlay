# Copyright 1999-2013 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-3

MY_P=cl-ppcre-${PV}

DESCRIPTION="CL-PPCRE is a portable regular expression library for Common Lisp."
HOMEPAGE="http://weitz.de/cl-ppcre/
		  http://www.cliki.net/cl-ppcre"
SRC_URI="mirror://gentoo/${MY_P}.tar.gz"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="=dev-lisp/cl-ppcre-${PV}*
		dev-lisp/cl-unicode"

S="${WORKDIR}"/${MY_P}

src_install() {
	common-lisp-install-sources -t all ${PN}/ test/unicode*
	common-lisp-install-asdf ${PN}.asd
	dodoc CHANGELOG README.md
	dohtml doc/index.html
}
