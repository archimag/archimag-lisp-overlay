# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

# binary-types moved to http://www.common-lisp.net/project/movitz recently

DESCRIPTION="Binary-types is a Library for accessing binary files with fixed bit-length code-words."
HOMEPAGE="http://www.cliki.net/Binary-types
		http://www.cs.uit.no/~frodef/sw/binary-types/"
SRC_URI="http://www.cs.uit.no/~frodef/sw/${PN}/${P}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}"

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PV}-gentoo.patch
}

src_install() {
	cp "${FILESDIR}"/binary-types.asd "${S}"
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc example.lisp README README-bitfield ChangeLog type-hierarchy.{ps,png}
}
