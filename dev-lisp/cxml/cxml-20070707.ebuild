# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp

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

CLPACKAGE='cxml cxml-contrib runes'

S="${WORKDIR}"/${PN}-${MY_PV}

src_unpack() {
	unpack ${A}
	rm "${S}"/GNUmakefile
}

src_install() {
	# install ASD files
	insinto "${CLSOURCEROOT}"/${PN}
	doins *.{dtd,asd} "${FILESDIR}"/${PN}-contrib.asd

	# install sources
	for dir in runes xml xml/sax-tests test contrib dom; do
		insinto "${CLSOURCEROOT}"/${PN}/${dir}
		doins ${dir}/*.lisp
	done

	# symlink ASD files into the central registry
	dodir "${CLSYSTEMROOT}"
	for pack in ${CLPACKAGE}; do
		dosym "${CLSOURCEROOT}"/${PN}/${pack}.asd "${CLSYSTEMROOT}"
	done

	dodoc OLDNEWS TIMES
	dohtml *.{html,css}
	dohtml -r doc
}
