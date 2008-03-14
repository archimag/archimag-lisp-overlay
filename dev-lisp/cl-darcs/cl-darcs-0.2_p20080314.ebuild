# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="CL-DARCS is a client for the darcs version control system written in Common Lisp."
HOMEPAGE="http://common-lisp.net/project/cl-darcs
		http://www.cliki.net/CL-DARCS"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
USE="doc"

DEPEND="dev-lisp/split-sequence
		dev-lisp/drakma
		dev-lisp/puri
		dev-lisp/trivial-gray-streams
		dev-lisp/ironclad
		dev-lisp/flexi-streams
		dev-lisp/cl-fad
		dev-lisp/cl-ppcre
		dev-lisp/cl-difflib
		doc? ( virtual/latex-base sys-apps/texinfo )"

src_compile() {
	if use doc ; then
		cd doc
		texi2pdf ${PN}.texi
	fi
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	use doc && dodoc doc/${PN}.pdf
	dodoc README
}
