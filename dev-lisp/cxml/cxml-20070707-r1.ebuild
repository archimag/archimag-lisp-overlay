# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_PV=${PV:0:4}-${PV:4:2}-${PV:6:2}

DESCRIPTION="A Common Lisp XML library implementing namespaces, a validating SAX-like XML 1.0 parser and the DOM Level 1 Core interfaces."
HOMEPAGE="http://common-lisp.net/project/${PN}/"
SRC_URI="http://common-lisp.net/project/${PN}/download/${PN}-${MY_PV}.tgz"
LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/puri"

CLSYSTEMS="${PN} ${PN}-contrib runes"

S="${WORKDIR}"/${PN}-${MY_PV}

src_unpack() {
	unpack ${A}
	rm "${S}"/GNUmakefile
	cp "${FILESDIR}/${PN}-contrib.asd" "${S}"
}

src_install() {
	# install ASD files
	common-lisp-install *.{dtd,asd}

	# install sources
	common-lisp-install {runes,xml,xml/sax-tests,test,contrib,dom}/*.lisp

	# symlink ASD files into the central registry
	common-lisp-system-symlink

	dodoc OLDNEWS TIMES
	dohtml *.{html,css}
	dohtml -r doc
}
