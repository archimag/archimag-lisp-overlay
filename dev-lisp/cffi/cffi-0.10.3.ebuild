# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_P=${PN}_${PV}

DESCRIPTION="The Common Foreign Function Interface (CFFI)"
HOMEPAGE="http://common-lisp.net/project/cffi/"
SRC_URI="http://common-lisp.net/project/${PN}/releases/${MY_P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/alexandria
		dev-lisp/babel
		dev-lisp/trivial-features
		doc? ( dev-lisp/sbcl virtual/texi2dvi )"

CLSYSTEMS="${PN} ${PN}-tests ${PN}-examples ${PN}-grovel ${PN}-uffi-compat"

S="${WORKDIR}"/${MY_P}

src_compile() {
	if use doc ; then
		make -C doc manual spec || die "Cannot build docs"
	fi
}

src_install() {
	common-lisp-install *.asd examples/ grovel/ src/ tests/ uffi-compat/
	common-lisp-symlink-asdf
	dodoc README TODO doc/*.txt
	if use doc; then
		doinfo doc/*.info
		rm doc/{spec,manual}/cffi*
		insinto /usr/share/doc/${PF}/html
		doins -r doc/{spec,manual}
	fi
}
