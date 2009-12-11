# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="CL-PDF is a cross-platform Common Lisp library for generating PDF files"
HOMEPAGE="http://www.fractalconcept.com/asp/cl-pdf"
SRC_URI="http://cloud.github.com/downloads/archimag/cl-pdf/cl-pdf-20091211.tar.bz2"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~sparc ~ppc ~x86"
IUSE=""

RDEPEND="dev-lisp/salza2
		 dev-lisp/iterate
		 >=dev-lisp/zpb-ttf-1.0"

CLSYSTEMS="${PN} ${PN}-parser"

src_install() {
	common-lisp-install *.{lisp,asd} contrib
	common-lisp-symlink-asdf
	insinto /usr/share/fonts/afm && doins afm/*.afm
	dodoc *.txt
	docinto examples && dodoc examples/*
}
