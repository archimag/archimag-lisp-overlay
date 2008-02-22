# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="LOCAL-TIME is a development library for manipulating date and time information in a semi-standard manner."
HOMEPAGE="http://common-lisp.net/project/local-time/"
SRC_URI="http://common-lisp.net/project/${PN}/${P}.tar.gz"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"

DEPEND="dev-lisp/cl-fad
		dev-lisp/fiveam"

src_install() {
	common-lisp-install *.{lisp,asd} zoneinfo
	common-lisp-symlink-asdf
	dodoc ChangeLog README TODO
}
