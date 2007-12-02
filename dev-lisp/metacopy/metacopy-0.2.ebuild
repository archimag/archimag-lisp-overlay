# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Flexible Common Lisp shallow/deep copy mechanism."
HOMEPAGE="http://common-lisp.net/project/metacopy/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"

DEPEND="dev-lisp/moptilities"

CLSYSTEMS="${PN} ${PN}-test"

src_install() {
	common-lisp-install *.asd dev unit-tests website
	common-lisp-symlink-asdf
}
