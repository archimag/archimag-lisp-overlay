# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils git

EAPI="2"

DESCRIPTION="Comon Lisp bindings for Cairo"
HOMEPAGE="http://common-lisp.net/project/cl-cairo2/"
SRC_URI=""
EGIT_REPO_URI="git://github.com/tpapp/cl-cairo2.git"

LICENSE="LLGPL"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND=">=dev-lisp/cl-utilities-1.2.4
         >=dev-lisp/cffi-0.10.4
         >=dev-lisp/cl-colors-9999
         >=dev-lisp/trivial-garbage-0.18
         >=dev-lisp/trivial-features-0.6"

CLSYSTEMS="cl-cairo2"

S="${WORKDIR}"/${PN}

src_compile() {
    true
}

src_install() {
    common-lisp-install *.lisp *.asd *.i
        
    common-lisp-symlink-asdf
    dodoc README README.mac README.win TODO
    find tutorial -exec dodoc {} \;
}
