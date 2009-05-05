# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION='CL-WHO (is yet another Lisp Markup Language).'
HOMEPAGE="http://weitz.de/cl-who/
		http://www.cliki.net/cl-who/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc CHANGELOG
	dohtml doc/*.html
}
