# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="An ASDF extension that manages Common Lisp binaries (FASL files)."
HOMEPAGE="http://common-lisp.net/project/asdf-binary-locations/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/asdf"

src_install() {
	common-lisp-install *.asd dev/*.lisp test*
	common-lisp-symlink-asdf
	dodoc lift-standard.config
}
