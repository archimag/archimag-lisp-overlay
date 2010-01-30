# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"
inherit common-lisp-2 eutils git

DESCRIPTION="Comon Lisp bindings for Cairo"
HOMEPAGE="http://common-lisp.net/project/cl-cairo2/"
EGIT_REPO_URI="git://github.com/tpapp/cl-cairo2.git"

LICENSE="LLGPL-2.1"

SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/cl-utilities
		 dev-lisp/cffi
		 dev-lisp/cl-colors
		 dev-lisp/trivial-garbage
		 dev-lisp/trivial-features
		 >=x11-libs/cairo-1.6"

CLSYSTEMS="${PN} ${PN}-x11 ${PN}-mac ${PN}-win"

src_compile() {	true; }

src_install() {
	common-lisp-install *.asd src
	common-lisp-symlink-asdf
	dodoc README* TODO
	docinto tutorial && dodoc tutorial/*.{lisp,pdf}
}
