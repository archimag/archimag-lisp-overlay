# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EDARCS_REPOSITORY="http://common-lisp.net/project/parenscript/repository/parenscript/"

inherit eutils multilib darcs common-lisp-2

DESCRIPTION="${PN} is a small lispy language that can be compiled to JavaScript."
HOMEPAGE="http://common-lisp.net/project/parenscript/"
SRC_URI=""
LICENSE="BSD"
SLOT="0"
KEYWORDS="~x86"
IUSE="doc"
DEPEND="!dev-lisp/cl-${PN}
		!dev-lisp/cl-parenscript
		!dev-lisp/parenscript
		doc? ( virtual/tetex dev-tex/latex2html )"

CLPACKAGE="parenscript"
CLSYSTEMS="parenscript"

src_compile() {
	use doc && { cd docs ; sh build.sh ; }
}

src_install() {
	common-lisp-install parenscript.asd src t
	common-lisp-system-symlink
	dodoc contributors docs/*.lisp
	use doc && dodoc docs/*.pdf
}
