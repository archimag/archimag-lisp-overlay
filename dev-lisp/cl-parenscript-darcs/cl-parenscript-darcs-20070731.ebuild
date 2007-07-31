# Copyright 1999-2006 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: /var/cvsroot/gentoo-x86/dev-lisp/cl-parenscript-darcs/cl-parenscript-darcs-20060825.ebuild,v 1.1 2006/08/25 06:11:31 mkennedy Exp $

EDARCS_REPOSITORY="http://common-lisp.net/project/parenscript/repository/parenscript/"

inherit eutils multilib darcs common-lisp

DESCRIPTION="ParenScript is a small lispy language that can be compiled to JavaScript."
HOMEPAGE="http://common-lisp.net/project/parenscript/"
SRC_URI=""
LICENSE="BSD"
SLOT="0"
KEYWORDS="~x86"
IUSE=""
DEPEND="virtual/commonlisp"

CLPACKAGE=parenscript

src_install() {
	common-lisp-install parenscript.asd
	common-lisp-system-symlink
	insinto ${CLSOURCEROOT}/${CLPACKAGE}/
	doins -r src t
	dodoc COPYING
	insinto /usr/share/doc/${PF}
	doins docs/*.lisp docs/*.pdf
}
