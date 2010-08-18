# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-3

DESCRIPTION="The Common Foreign Function Interface (CFFI)"
HOMEPAGE="http://common-lisp.net/project/cffi/"
SRC_URI="http://github.com/downloads/archimag/archimag-lisp-overlay/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

DEPEND="doc? ( dev-lisp/sbcl virtual/texi2dvi )"
RDEPEND="!dev-lisp/cl-${PN}
		dev-lisp/alexandria
		dev-lisp/babel
		dev-lisp/trivial-features"

CLSYSTEMS="cffi.asd cffi-tests.asd cffi-examples.asd cffi-grovel.asd \
		cffi-uffi-compat.asd"

src_compile() {
	if use doc ; then
		VARTEXFONTS="${T}"/fonts \
			make -C doc manual spec || die "Cannot build docs"
	fi
}

src_install() {
	common-lisp-install-sources examples/ src/ tests/ uffi-compat/
	common-lisp-install-sources -t all grovel/
	common-lisp-install-asdf
	dodoc README TODO doc/*.txt
	if use doc; then
		doinfo doc/*.info
		rm doc/{spec,manual}/cffi*
		insinto /usr/share/doc/${PF}/html
		doins -r doc/{spec,manual}
	fi
}
