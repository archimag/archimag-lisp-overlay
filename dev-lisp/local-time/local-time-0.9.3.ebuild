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
IUSE="doc"

DEPEND="sys-apps/texinfo
		doc? ( virtual/texi2dvi )"
RDEPEND="dev-lisp/cl-fad
		dev-lisp/fiveam"

src_compile() {
	cd documentation
	makeinfo ${PN}.texinfo -o ${PN}.info || die "Cannot compile info docs"
	if use doc ; then
		VARTEXFONTS="${T}"/fonts \
			texi2pdf ${PN}.texinfo -o ${PN}.pdf || die "Cannot build PDF docs"
	fi
}

src_install() {
	common-lisp-install *.{lisp,asd} zoneinfo
	common-lisp-symlink-asdf
	dodoc CREDITS README TODO
	doinfo doc/${PN}.info
	use doc && dodoc doc/${PN}.pdf
}
