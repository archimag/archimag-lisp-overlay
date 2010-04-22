# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-3 eutils

DESCRIPTION="A collection of public domain utilities."
HOMEPAGE="http://common-lisp.net/project/alexandria/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2
		doc? ( http://common-lisp.net/project/alexandria/draft/alexandria.pdf )"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

src_install() {
	common-lisp-3_src_install
	if use doc ; then
		dodoc "${DISTDIR}"/alexandria.pdf
	fi
}
