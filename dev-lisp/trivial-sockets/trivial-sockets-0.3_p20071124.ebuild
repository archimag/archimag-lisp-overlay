# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A portable Common Lisp networking library for undemanding Internet clients"
HOMEPAGE="http://www.cliki.net/trivial-sockets"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

DEPEND="!dev-lisp/cl-${PN}
		doc? ( sys-apps/texinfo )"

src_compile() {
	if use doc ; then
		texi2pdf ${PN}.texi || die "Cannot build PDF docs"
	fi
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	use doc && dodoc ${PN}.pdf
	dodoc README
}
