# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils git

EAPI="2"

DESCRIPTION="A simple package for different color representations in Common Lisp"
HOMEPAGE="http://common-lisp.net/project/cl-colors/"
SRC_URI=""
EGIT_REPO_URI="git://github.com/tpapp/cl-colors.git"

LICENSE="LLGPL"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND=">=dev-lisp/cl-utilities-1.2.4"

CLSYSTEMS="cl-colors"

S="${WORKDIR}"/${PN}

src_compile() {
    true
}

src_install() {
    common-lisp-install *.asd *.lisp
    common-lisp-symlink-asdf
    dodoc introduction.txt README
}
