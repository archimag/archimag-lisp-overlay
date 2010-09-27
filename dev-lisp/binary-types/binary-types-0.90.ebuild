# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=1

inherit common-lisp-2 eutils

# binary-types moved to http://www.common-lisp.net/project/movitz recently
GIT_V="9ec4204"
DESCRIPTION="Binary-types is a Library for accessing binary files with fixed bit-length code-words."
HOMEPAGE="http://www.cliki.net/Binary-types
		http://www.cs.uit.no/~frodef/sw/binary-types/"
SRC_URI="http://download.github.com/frodef-${PN}-${GIT_V}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}"

S="${WORKDIR}/frodef-${PN}-${GIT_V}"

src_compile() {
	:
}

src_install() {
	cd "${S}"
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc example.lisp README README-bitfield ChangeLog type-hierarchy.{ps,png}
}
