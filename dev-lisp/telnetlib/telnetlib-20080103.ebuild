# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_PN=telnetlib-for-common-lisp
MY_P=${MY_PN}-${PV}

DESCRIPTION="A CommonLisp port from Python's telnetlib library."
HOMEPAGE="http://telnetlib-for-common-lisp.googlecode.com/
		http://www.cliki.net/telnetlib"
SRC_URI="http://${MY_PN}.googlecode.com/files/${MY_P}.zip"

LICENSE="GPL-3"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/usocket
		dev-lisp/flexi-streams"

S="${WORKDIR}"/${MY_P}
