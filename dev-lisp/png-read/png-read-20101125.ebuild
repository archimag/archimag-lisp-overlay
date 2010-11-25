# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2

inherit common-lisp-2

DESCRIPTION="A PNG decoder for Common Lisp "
HOMEPAGE="http://github.com/Ramarren/png-read"
SRC_URI="http://archimag-lisp-overlay.googlecode.com/files/${P}.tar.bz2"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}
	   dev-lisp/iterate
	   dev-lisp/chipz
	   dev-lisp/babel"

CLSYSTEMS="png-read"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
}
