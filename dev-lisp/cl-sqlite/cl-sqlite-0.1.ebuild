# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A CommonLisp interface to the SQLite embedded relational database engine."
HOMEPAGE="http://common-lisp.net/project/cl-sqlite/"
SRC_URI="http://common-lisp.net/project/${PN}/releases/${P}.tar.gz"

LICENSE="public-domain"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/cffi
		 dev-lisp/iterate"

CLSYSTEMS="sqlite"

S="${WORKDIR}"/${PN}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml index.html style.css
}
