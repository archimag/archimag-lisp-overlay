# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="CL-Markdown is a Common Lisp rewrite of Markdown."
HOMEPAGE="http://common-lisp.net/project/cl-markdown"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND=">=dev-lisp/metatilities-base-0.6.0
		dev-lisp/metabang-bind
		dev-lisp/dynamic-classes
		>=dev-lisp/cl-containers-0.11.5
		dev-lisp/anaphora
		dev-lisp/cl-ppcre
		dev-lisp/trivial-shell
		dev-lisp/lift
		dev-lisp/lml2
		dev-lisp/cl-html-diff
		dev-lisp/html-encode"

CLSYSTEMS="${PN} ${PN}-test"

src_install() {
	common-lisp-install ${PN}.asd ${PN}-test.asd
	common-lisp-install dev/*.lisp resources unit-tests
	common-lisp-symlink-asdf
	dodoc *.config
}
