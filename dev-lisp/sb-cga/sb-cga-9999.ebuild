# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EGIT_REPO_URI="git://github.com/3b/sb-cga.git"

EAPI=2
inherit common-lisp-2 git

DESCRIPTION="Computer graphics algebra library for SBCL."
HOMEPAGE="http://github.com/3b/sb-cga"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/sbcl
		dev-lisp/alexandria"

src_install() {
	common-lisp-install *.{lisp,asd} ports/
	common-lisp-symlink-asdf
	dodoc NOTES || die
}
