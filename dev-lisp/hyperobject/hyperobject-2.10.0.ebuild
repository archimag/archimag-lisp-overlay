# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp

DESCRIPTION="Hyperobject is a Common Lisp library for representing objects."
HOMEPAGE="http://${PN}.b9.com/
	http://www.cliki.net/${PN}"
SRC_URI="http://files.b9.com/${PN}/${PN}-${PV}.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}
	dev-lisp/kmrcl
	dev-lisp/rt
	dev-lisp/cl-sql"

CLPACKAGE=${PN}

src_unpack() {
	unpack ${A}
	rm "${S}"/Makefile
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-system-symlink
	dodoc COPYING README
	dodoc doc/*.pdf
	doins -r examples
	tar xfz doc/html.tar.gz -C ${D}/usr/share/doc/${PF}/
}
