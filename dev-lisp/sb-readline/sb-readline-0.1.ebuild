# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Implementation of GNU Readline support for SBCL"
HOMEPAGE="http://www.cliki.net/sb-readline"
SRC_URI="http://www.caddr.com/lisp/${PN}/${P}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		dev-lisp/sbcl
		sys-libs/readline"

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PV}-load-foreign-library-gentoo.patch
}

src_install() {
	common-lisp-install sb-readline.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml README.html
}
