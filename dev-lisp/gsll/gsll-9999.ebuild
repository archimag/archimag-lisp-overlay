# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EGIT_REPO_URI="git://repo.or.cz/gsll.git"

inherit common-lisp-2 git

DESCRIPTION="Common Lisp interface to the GNU Scientific Library."
HOMEPAGE="http://common-lisp.net/project/gsll/"

LICENSE="LLGPL-2.1 FDL-1.2"
SLOT="0"
KEYWORDS=""
IUSE=""

RDEPEND=">=sci-libs/gsl-1.9
		>=dev-lisp/cffi-0.10.0
		dev-lisp/fsbv
		dev-lisp/trivial-garbage
		dev-lisp/cl-utilities
		dev-lisp/iterate
		dev-lisp/asdf-system-connections"

CLSYSTEMS="${PN} ${PN}-tests"

src_install() {
	common-lisp-install *.{lisp,asd} calculus/ data/ eigensystems/ \
		fast-fourier-transforms/ floating-point/ histogram/ init/ \
		interpolation/ linear-algebra/ mathematical/ \
		ordinary-differential-equations/ physical-constants/ random/ \
		solve-minimize-fit/ special-functions/ statistics/ tests/ test-unit/
	common-lisp-symlink-asdf
	dohtml documentation/*.{html,css}
	dodoc documentation/*.text
}
