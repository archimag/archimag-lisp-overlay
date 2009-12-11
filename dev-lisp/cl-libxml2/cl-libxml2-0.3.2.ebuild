# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2

inherit common-lisp-2 eutils toolchain-funcs

DESCRIPTION="High-level Common Lisp wrapper around libxml2 and libxslt."
HOMEPAGE="http://code.google.com/p/cl-libxml2/"
SRC_URI="http://cl-libxml2.googlecode.com/files/${P}.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~sparc ~ppc ~x86"
IUSE=""

DEPEND="dev-libs/libxml2
		dev-libs/libxslt"
RDEPEND="${DEPEND}
		 >=dev-lisp/cffi-0.10.2
		 dev-lisp/iterate
		 dev-lisp/puri
		 dev-lisp/flexi-streams
		 dev-lisp/alexandria
		 >=dev-lisp/garbage-pools-0.1.2
		 dev-lisp/metabang-bind
		 dev-lisp/lift"

CLSYSTEMS="${PN} cl-libxslt xfactory xoverlay"

src_compile () {
	make -C foreign CC=$(tc-getCC) || die "Cannot build helper library"
}

src_install () {
	common-lisp-install *.asd html tree xfactory xpath xslt xoverlay test
	common-lisp-symlink-asdf

	dolib.so foreign/cllibxml2.so

	dodoc ChangeLog
	docinto examples && dodoc examples/*
}
