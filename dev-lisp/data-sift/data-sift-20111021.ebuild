# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-2

DESCRIPTION="Common Lisp library for validataion and transformation of string data"
HOMEPAGE="https://github.com/archimag/data-sift"
SRC_URI="http://archimag-lisp-overlay.googlecode.com/files/${P}.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/cl-ppcre
        dev-lisp/parse-number
        dev-lisp/alexandria
        virtual/puri
	    dev-lisp/lift"

src_install() {
	common-lisp-install *.asd src t
	common-lisp-symlink-asdf
	dodoc README
}
