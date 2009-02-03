# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="CLX is the Common Lisp interface to the X11 protocol primarily for SBCL."
HOMEPAGE="http://www.cliki.net/CLX"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="as-is"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="sys-apps/texinfo"
RDEPEND="!dev-lisp/cl-${PN}"

src_compile() {
	makeinfo manual/clx.texinfo || die "Cannot compile documentation"
}

src_install() {
	common-lisp-install *.{lisp,asd} {demo,test,debug}/*.lisp \
		excl* sock* manual/clx.texinfo \
		NEWS CHANGES README README-R5
	common-lisp-symlink-asdf
	dodoc NEWS CHANGES README*
	doinfo clx.info*
}
