# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eutils common-lisp-2

DESCRIPTION="${PN} is a small lispy language that can be compiled to JavaScript."
HOMEPAGE="http://common-lisp.net/project/parenscript/"
SRC_URI="http://common-lisp.net/project/${PN}/release/${P}.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"
DEPEND="!dev-lisp/cl-${PN}
		!dev-lisp/cl-${PN}-darcs
		!dev-lisp/${PN}-darcs
		doc? ( virtual/tetex dev-tex/latex2html )"

src_compile() {
	use doc && { cd docs ; sh build.sh ; }
}

src_install() {
	common-lisp-install parenscript.asd src t
	common-lisp-symlink-asdf
	dodoc contributors docs/*.lisp
	use doc && dodoc docs/*.pdf
}
