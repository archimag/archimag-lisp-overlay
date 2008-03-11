# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="CL-PDF is a cross-platform Common Lisp library for generating PDF files"
HOMEPAGE="http://www.fractalconcept.com/asp/cl-pdf"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~sparc ~ppc ~x86"
IUSE=""

DEPEND="dev-lisp/salza
		dev-lisp/iterate"

CLSYSTEMS="${PN} ${PN}-parser"

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PV}-gentoo.patch
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	insinto /usr/share/fonts/afm && doins afm/*.afm
	insinto /usr/share/doc/${PF}/examples && doins examples/*
	insinto /usr/share/doc/${PF}/contrib && doins contrib/*
	dodoc *.txt
}
