# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="A simple library for generating a backtrace portably."
HOMEPAGE="http://common-lisp.net/project/trivial-backtrace"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"

CLSYSTEMS="${PN} ${PN}-test"

src_install() {
	common-lisp-install *.asd dev test
	common-lisp-symlink-asdf
	dodoc *.config
}
