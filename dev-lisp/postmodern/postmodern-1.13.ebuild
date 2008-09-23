# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="A Common Lisp library for interacting with PostgreSQL databases."
HOMEPAGE="http://common-lisp.net/project/postmodern/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
LICENSE="ZLIB"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
DEPEND="dev-lisp/md5
		dev-lisp/usocket
		dev-lisp/ieee-floats
		dev-lisp/trivial-utf8
		dev-lisp/closer-mop
		dev-lisp/bordeaux-threads
		dev-lisp/fiveam"

CLSYSTEMS="cl-postgres postmodern simple-date s-sql"

src_install() {
	common-lisp-install *.asd ${CLSYSTEMS}
	common-lisp-symlink-asdf
	dohtml doc/*
}
