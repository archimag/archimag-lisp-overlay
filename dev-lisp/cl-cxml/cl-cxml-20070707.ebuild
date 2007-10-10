# Copyright 1999-2005 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: /var/cvsroot/gentoo-x86/dev-lisp/cl-cxml/cl-cxml-20050625.ebuild,v 1.1 2005/12/09 20:12:59 mkennedy Exp $

inherit common-lisp

MY_PV=${PV:0:4}-${PV:4:2}-${PV:6:2}

DESCRIPTION="A Common Lisp XML library implementing namespaces, a validating SAX-like XML 1.0 parser and the DOM Level 1 Core interfaces."
HOMEPAGE="http://common-lisp.net/project/cxml/"
SRC_URI="http://common-lisp.net/project/cxml/download/cxml-${MY_PV}.tgz"
LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="dev-lisp/puri"

CLPACKAGE='cxml cxml-contrib runes'

S="${WORKDIR}"/${PN/cl-/}-${MY_PV}

src_unpack() {
	unpack ${A}
	rm "${S}"/GNUmakefile
}

src_install() {
	# install ASD files
	insinto ${CLSOURCEROOT}/cxml
	doins *.{dtd,asd} $FILESDIR/cxml-contrib.asd

	# install sources
	for dir in runes xml xml/sax-tests test contrib dom; do
		insinto ${CLSOURCEROOT}/cxml/${dir}
		doins ${dir}/*.lisp
	done

	# symlink ASD files into the central registry
	dodir ${CLSYSTEMROOT}
	for pack in ${CLPACKAGE}; do
		dosym ${CLSOURCEROOT}/cxml/${pack}.asd ${CLSYSTEMROOT}
	done

	dodoc OLDNEWS TIMES
	dohtml *.{html,css}
	dohtml -r doc
}
