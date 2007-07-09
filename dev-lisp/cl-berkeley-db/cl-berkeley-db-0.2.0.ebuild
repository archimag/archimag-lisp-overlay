# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp

DESCRIPTION="cl-berkeley-db is a common-lisp wrapper to the berkeley database
library."
HOMEPAGE="http://common-lisp.net/project/cl-berkeley-db"
SRC_URI="http://common-lisp.net/project/cl-berkeley-db/dist/${P}.tar.gz"
LICENSE="BSD"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="virtual/commonlisp
        =sys-libs/db-4.5*
		dev-lisp/cl-cffi
		dev-lisp/cl-trivial-garbage"

SLOT="0"

CLPACKAGE=cl-berkeley-db

src_install() {
	common-lisp-install src/*.lisp src/*.asd
	common-lisp-system-symlink
	dohtml -r doc/*
}
