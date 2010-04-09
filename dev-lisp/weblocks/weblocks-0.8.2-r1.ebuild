# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Weblocks is a continuations-based web framework written in Common Lisp."
HOMEPAGE="http://common-lisp.net/project/cl-weblocks/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/closer-mop
		dev-lisp/metatilities
		dev-lisp/hunchentoot
		dev-lisp/cl-who
		dev-lisp/cl-ppcre
		dev-lisp/cl-json
		virtual/puri
		dev-lisp/md5
		dev-lisp/fare-matcher
		dev-lisp/cl-cont
		dev-lisp/parenscript
		dev-lisp/anaphora
		dev-lisp/f-underscore
		dev-lisp/bordeaux-threads
		dev-lisp/cl-fad
		dev-lisp/clsql
		dev-lisp/elephant
		dev-lisp/cl-prevalence
		dev-lisp/rt
		dev-lisp/lift"

CLSYSTEMS="${PN} ${PN}-test ${PN}-scripts ${PN}-store-test
		   src/store/clsql/${PN}-clsql
		   src/store/elephant/${PN}-elephant
		   src/store/memory/${PN}-memory
		   src/store/prevalence/${PN}-prevalence
		   examples/${PN}-clsql-demo/${PN}-clsql-demo
		   examples/${PN}-demo/${PN}-demo
		   examples/${PN}-elephant-demo/${PN}-elephant-demo"

src_install() {
	dodir "${CLSOURCEROOT}"/${PN}/scripts
	cp -a scripts/weblocks-core "${D}/${CLSOURCEROOT}"/${PN}/scripts
	rm -rf scripts/weblocks-core
	common-lisp-install *.asd examples pub scripts src test
	common-lisp-symlink-asdf
	dodoc docs/*
}
