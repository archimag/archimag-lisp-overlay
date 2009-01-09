# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EGIT_REPO_URI="git://repo.or.cz/gsll.git"

inherit common-lisp-2 git

DESCRIPTION="Common Lisp interface to the GNU Scientific Library."
HOMEPAGE="http://common-lisp.net/project/gsll/"

LICENSE="LLGPL-2.1 FDL"
SLOT="0"
KEYWORDS=""
IUSE=""

DEPEND=">=sci-libs/gsl-1.9
		>=dev-lisp/cffi-0.10.0
		dev-lisp/trivial-garbage
		dev-lisp/cl-utilities"

CLSYSTEMS="${PN} ${PN}-tests"

src_install() {
	common-lisp-install *.{lisp,asd} data/ floating-point/ histogram/ init/ \
		interpolation/ linear-algebra/ ordinary-differential-equations/ \
		random/ solve-minimize-fit/ special-functions/ statistics/ \
		tests/ test-unit/
	common-lisp-symlink-asdf
	dohtml documentation/*.{html,css}
	dodoc documentation/*.text
}
