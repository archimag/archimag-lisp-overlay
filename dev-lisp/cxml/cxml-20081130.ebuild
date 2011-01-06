# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_PV=${PV:0:4}-${PV:4:2}-${PV:6:2}

DESCRIPTION="A Common Lisp XML library implementing namespaces, a validating SAX-like XML 1.0 parser and the DOM Level 1 Core interfaces."
HOMEPAGE="http://common-lisp.net/project/cxml/"
SRC_URI="http://common-lisp.net/project/${PN}/download/${PN}-${MY_PV}.tgz"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		>=dev-lisp/closure-common-${PV}
		dev-lisp/puri
		dev-lisp/trivial-gray-streams"

CLSYSTEMS="${PN} ${PN}-contrib"

S="${WORKDIR}"/${PN}-${MY_PV}

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
