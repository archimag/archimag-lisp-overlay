# Copyright 1999-2008 Gentoo Foundation
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

DEPEND="dev-lisp/closer-mop
		dev-lisp/metatilities
		dev-lisp/hunchentoot
		dev-lisp/cl-who
		dev-lisp/cl-ppcre
		dev-lisp/cl-json
		dev-lisp/puri
		dev-lisp/md5
		dev-lisp/fare-matcher
		dev-lisp/cl-cont
		dev-lisp/cl-fad
		dev-lisp/clsql
		dev-lisp/cl-prevalence
		dev-lisp/rt"

CLSYSTEMS="${PN} ${PN}-test ${PN}-scripts ${PN}-store-test
		   src/store/clsql/${PN}-clsql
		   src/store/memory/${PN}-memory
		   src/store/prevalence/${PN}-prevalence"

src_install() {
	common-lisp-install *.asd pub scripts src test
	common-lisp-symlink-asdf
	dodoc docs/*
	insinto /usr/share/doc/${P}/examples && doins -r examples/*
}
