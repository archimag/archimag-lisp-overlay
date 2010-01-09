# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"
inherit common-lisp-2 eutils git

DESCRIPTION="A simple package for different color representations in Common Lisp."
HOMEPAGE="http://common-lisp.net/project/cl-colors/"
EGIT_REPO_URI="git://github.com/tpapp/cl-colors.git"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/cl-utilities"

src_compile() { true; }

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc introduction.txt README
}
