# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2

inherit common-lisp-2

DESCRIPTION="Unit Testing for Common Lisp"
HOMEPAGE="https://github.com/adlai/Eos"
SRC_URI="http://archimag-lisp-overlay.googlecode.com/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

CLSYSTEMS="eos"

src_install() {
	common-lisp-install eos.asd src tests
	common-lisp-symlink-asdf
}
