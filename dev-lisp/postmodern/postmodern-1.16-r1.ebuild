# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="A Common Lisp library for interacting with PostgreSQL databases."
HOMEPAGE="http://common-lisp.net/project/postmodern/"
SRC_URI="http://github.com/downloads/archimag/gentoo-lisp-overlay/${P}.tgz"

LICENSE="ZLIB"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/md5
		dev-lisp/usocket
		dev-lisp/closer-mop
		dev-lisp/bordeaux-threads
		dev-lisp/fiveam"

CLSYSTEMS="cl-postgres postmodern simple-date s-sql"

src_unpack() {
	unpack ${A}
	cd "${S}"
	epatch "${FILESDIR}"/fix-plist-format-query.patch
}

src_install() {
	common-lisp-install *.asd ${CLSYSTEMS}
	common-lisp-symlink-asdf
	dohtml doc/*
}
