# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Embedded Common Lisp and template system"
HOMEPAGE="http://common-lisp.net/project/cl-emb/"
# SRC_URI="http://common-lisp.net/project/cl-emb/cl-emb-${PV}.tar.gz"
SRC_URI="mirror://gentoo/${P}.tar.gz"
LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc x86"
IUSE=""

DEPEND="dev-lisp/cl-ppcre"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml examples.*
	dodoc TODO README
}
