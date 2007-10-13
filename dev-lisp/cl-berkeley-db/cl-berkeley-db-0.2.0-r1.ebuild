# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="cl-berkeley-db is a common-lisp wrapper to the berkeley database
library."
HOMEPAGE="http://common-lisp.net/project/${PN}"
SRC_URI="http://common-lisp.net/project/${PN}/dist/${P}.tar.gz"
LICENSE="BSD"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
SLOT="0"
IUSE=""
DEPEND="=sys-libs/db-4.5*
		dev-lisp/cffi
		dev-lisp/trivial-garbage"

CLSYSTEMS="src/${PN}"

src_install() {
	common-lisp-install src/*.{lisp,asd}
	common-lisp-system-symlink
	dohtml docs/*
}
