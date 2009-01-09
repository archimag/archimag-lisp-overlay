# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="arnesi is a Common Lisp utility suite used with bese projects"
HOMEPAGE="http://common-lisp.net/project/bese/arnesi.html"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}
		!dev-lisp/cl-${PN}-darcs
		app-emacs/slime
		dev-lisp/cl-ppcre"

src_install() {
	common-lisp-install ${PN}.asd src t
	common-lisp-symlink-asdf
}
