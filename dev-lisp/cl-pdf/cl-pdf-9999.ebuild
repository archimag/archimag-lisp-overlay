# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"
inherit common-lisp-2 eutils subversion

DESCRIPTION="CL-PDF is a cross-platform Common Lisp library for generating PDF files"
HOMEPAGE="http://www.fractalconcept.com/asp/cl-pdf"
ESVN_REPO_URI="http://www.fractalconcept.com:8000/public/open-source/cl-pdf/"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~sparc ~ppc ~x86"
IUSE=""

RDEPEND="dev-lisp/salza2
		dev-lisp/iterate"

CLSYSTEMS="${PN} ${PN}-parser"

src_prepare() {
	epatch "${FILESDIR}"/gentoo-no-bundled-libs.patch
}

src_install() {
	common-lisp-install *.{lisp,asd} contrib
	common-lisp-symlink-asdf
	insinto /usr/share/fonts/afm && doins afm/*.afm
	dodoc *.txt
	docinto examples && dodoc examples/*
}
