# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="A JPEG library for Common Lisp"
HOMEPAGE="http://sourceforge.net/projects/cljl"
SRC_URI="mirror://sourceforge/cljl/cljl-${PV}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc x86"
IUSE=""

DEPEND="dev-lisp/cl-plus"

S="${WORKDIR}"/cljl

src_unpack() {
	unpack ${A}
	# patch: defconstant - compilation fix for SBCL
	# patch: exports - export symbols at load time as well
	# patch: quantize-optimization-clisp - dont bother on CLISP
	epatch "${FILESDIR}"/${PV}-defconstant-gentoo.patch
	epatch "${FILESDIR}"/${PV}-exports-gentoo.patch
	epatch "${FILESDIR}"/${PV}-quantize-optimization-clisp-gentoo.patch
}
