# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="CL-PREVALENCE is an implementation of Object Prevalence for Common Lisp."
HOMEPAGE="http://www.common-lisp.net/project/cl-prevalence/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="dev-lisp/s-xml
		dev-lisp/s-sysdeps"

src_unpack() {
	unpack ${A}
	test -f "${S}"/Makefile && rm -f "${S}"/Makefile
}

src_install() {
	common-lisp-install ${PN}.asd src test
	common-lisp-symlink-asdf
}
