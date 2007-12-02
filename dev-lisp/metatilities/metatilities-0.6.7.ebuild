# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Metatilities is metabang.com's set of core utilities."
HOMEPAGE="http://common-lisp.net/project/metatilities/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"

DEPEND="dev-lisp/asdf-system-connections
		dev-lisp/metatilities-base
		dev-lisp/moptilities
		dev-lisp/cl-containers
		dev-lisp/metabang-bind
		dev-lisp/defsystem-compatibility
		dev-lisp/lift"

src_unpack() {
	unpack ${A}
	rm "${S}"/dev/utilities/copy-file.lisp
}

src_install() {
	common-lisp-install ${PN}.asd website
	common-lisp-install dev/{utilities,allegro,lispworks,mcl,openmcl,sbcl,utilities}
	common-lisp-symlink-asdf
}
