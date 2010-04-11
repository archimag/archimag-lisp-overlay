# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=1

inherit common-lisp-2

DESCRIPTION="A common-lisp wrapper to the Berkeley database library."
HOMEPAGE="http://common-lisp.net/project/cl-berkeley-db/"
SRC_URI="http://common-lisp.net/project/${PN}/dist/${P}.tar.gz"

LICENSE="BSD"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
SLOT="0"
IUSE=""

RDEPEND="sys-libs/db:4.6
		dev-lisp/cffi
		dev-lisp/trivial-garbage"

CLSYSTEMS="src/${PN}"

src_install() {
	common-lisp-install src/*.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc docs/AUTHORS
	dohtml docs/{api,index.html,style.css}
}
