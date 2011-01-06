# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="BIND combines LET*, DESTRUCTURING-BIND and MULTIPLE-VALUE-BIND into a single form."
HOMEPAGE="http://www.cliki.net/bind
		http://common-lisp.net/project/metabang-bind"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-bind
		dev-lisp/lift"

CLSYSTEMS="${PN} ${PN}-test"

src_install() {
	common-lisp-install *.asd {unit-tests,dev}/*.lisp
	common-lisp-symlink-asdf
	dodoc *.config
}
