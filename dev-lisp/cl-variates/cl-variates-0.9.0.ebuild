# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Portable Common Lisp Random Number Generation."
HOMEPAGE="http://common-lisp.net/project/cl-variates/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"

DEPEND="dev-lisp/lift"

CLSYSTEMS="${PN} ${PN}-test"

src_install() {
	common-lisp-install *.asd dev tests website *.config
	common-lisp-symlink-asdf
}
