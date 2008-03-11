# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_P=${PN}_${PV}

DESCRIPTION="Closer to MOP is a compatibility layer that rectifies many of the absent or incorrect MOP features as detected by MOP Feature Tests."
HOMEPAGE="http://common-lisp.net/project/closer/closer-mop.html"
SRC_URI="http://common-lisp.net/project/closer/ftp/${MY_P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/lw-compat"

S="${WORKDIR}"/${MY_P}

src_install() {
	common-lisp-install *.{asd,lisp} allegro clisp ecl lispworks mcl pcl test
	common-lisp-symlink-asdf
	dodoc *.txt
}
