# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A Common Lisp library of semi-standard utilities."
HOMEPAGE="http://common-lisp.net/project/cl-utilities/"
SRC_URI="http://common-lisp.net/project/cl-utilities/${P}.tar.gz"

LICENSE="public-domain"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

src_install() {
	common-lisp-install *.lisp ${PN}.asd
	common-lisp-symlink-asdf
	dodoc README
	dohtml doc/*
}
