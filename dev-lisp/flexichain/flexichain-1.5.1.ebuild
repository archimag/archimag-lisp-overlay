# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Flexichain is an API for editable sequences."
HOMEPAGE="http://common-lisp.net/project/flexichain/"
SRC_URI="http://www.common-lisp.net/~sionescu/files/${P}.tar.bz2
		doc? ( http://common-lisp.net/project/${PN}/download/StrandhVilleneuveMoore.pdf
				http://common-lisp.net/project/${PN}/download/${PN}.pdf )"

LICENSE="LGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

src_install() {
	common-lisp-install *.{lisp,asd} version.lisp-expr
	common-lisp-symlink-asdf
	if use doc ; then
		dodoc "${DISTDIR}"/{StrandhVilleneuveMoore,${PN}}.pdf
	fi
}
