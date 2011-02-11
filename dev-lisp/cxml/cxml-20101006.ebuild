# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A Common Lisp XML library implementing namespaces, a validating SAX-like XML 1.0 parser and the DOM Level 1 Core interfaces."
HOMEPAGE="http://common-lisp.net/project/cxml/"
SRC_URI="http://archimag-lisp-overlay.googlecode.com/files/${P}.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		>=dev-lisp/closure-common-${PV}
		virtual/puri
		dev-lisp/trivial-gray-streams"

CLSYSTEMS="${PN} ${PN}-contrib"

src_unpack() {
	unpack ${A}
	rm "${S}"/GNUmakefile
	cp "${FILESDIR}"/${PN}-contrib.asd "${S}"
}

src_install() {
	common-lisp-install *.{dtd,asd}
	common-lisp-install {contrib,dom,klacks,test,xml,xml/sax-tests}/*.lisp
	common-lisp-symlink-asdf

	dodoc README OLDNEWS TIMES
	dohtml doc/*.{html,css,png}
}
