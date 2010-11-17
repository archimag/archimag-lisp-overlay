# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2

inherit common-lisp-2

DESCRIPTION="A CommonLisp library of functions which accept an arbitrary string and attempt to parse it into one of the standard Common Lisp number types, if possible, or else it signals an error of type invalid-number."
HOMEPAGE="http://www.cliki.net/PARSE-NUMBER"
SRC_URI="http://archimag-lisp-overlay.googlecode.com/files/${P}.tar.bz2"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}"

CLSYSTEMS="parse-number"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
}
