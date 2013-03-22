# Copyright 1999-2013 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=5

inherit common-lisp-3 darcs

DESCRIPTION="arnesi is a Common Lisp utility suite"
HOMEPAGE="http://common-lisp.net/project/bese/arnesi.html"
EDARCS_REPOSITORY="http://common-lisp.net/project/bese/repos/arnesi_dev/"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="+slime"

RDEPEND="!dev-lisp/cl-${PN}
	!dev-lisp/cl-${PN}-darcs
	slime? ( app-emacs/slime )
	dev-lisp/cl-ppcre"

src_install() {
	common-lisp-install-sources src t
	common-lisp-install-asdf
}
