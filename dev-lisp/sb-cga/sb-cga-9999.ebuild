# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EGIT_REPO_URI="git://github.com/3b/sb-cga.git"

inherit common-lisp-2 git

DESCRIPTION="Computer graphics algebra library for SBCL"
HOMEPAGE="http://github.com/3b/sb-cga"
SRC_URI=""

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~x86"
IUSE=""

RDEPEND="dev-lisp/sbcl"

src_install() {
	common-lisp-install *.lisp
	dodoc NOTES || die
}
