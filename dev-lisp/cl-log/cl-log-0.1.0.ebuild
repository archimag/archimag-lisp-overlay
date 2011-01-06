# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="CL-LOG is a general purpose logging utility."
HOMEPAGE="http://www.nicklevine.org/cl-log/"
SRC_URI="http://www.nicklevine.org/cl-log/${PN}.${PV}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

S="${WORKDIR}"

src_unpack() {
	unpack ${A}
	mv "${S}"/${PN}.asdf "${S}"/${PN}.asd
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc doc/index.txt
}
