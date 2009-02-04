# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="LOCAL-TIME is a development library for manipulating date and time information."
HOMEPAGE="http://common-lisp.net/project/local-time/"
SRC_URI="http://common-lisp.net/project/${PN}/${P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="doc? ( sys-apps/texinfo )"
RDEPEND="dev-lisp/cl-fad
		dev-lisp/fiveam"

src_compile() {
	use doc && texi2pdf documentation/${PN}.texinfo
}

src_install() {
	common-lisp-install *.{lisp,asd} zoneinfo
	common-lisp-symlink-asdf
	dodoc CREDITS README TODO
	use doc && dodoc ${PN}.pdf
}
