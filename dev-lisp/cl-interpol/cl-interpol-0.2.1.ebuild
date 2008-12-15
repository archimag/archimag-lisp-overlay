# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="String interpolation for Common Lisp similar to Perl or Unix shell scripts."
HOMEPAGE="http://weitz.de/cl-interpol/
		http://www.cliki.net/cl-interpol"
SRC_URI="http://common-lisp.net/~sionescu/files/ediware/${P}.tar.bz2"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="dev-lisp/cl-unicode
		dev-lisp/flexi-streams"

src_install() {
	common-lisp-install *.{asd,lisp} test/
	common-lisp-symlink-asdf
	dodoc CHANGELOG
	dohtml doc/index.html
}
