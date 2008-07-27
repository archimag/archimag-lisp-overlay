# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="TRIVIAL-FEATURES ensures consistent *FEATURES* across multiple Common Lisp implementations."
HOMEPAGE="http://www.cliki.net/trivial-features"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
DEPEND=""

src_install() {
	common-lisp-install *.asd src/ tests/
	common-lisp-symlink-asdf
	dodoc README SPEC
}
