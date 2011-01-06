# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="A Common Lisp IRC logger library"
HOMEPAGE="http://www.cliki.net/irc-logger"
SRC_URI="http://files.b9.com/${PN}/${P}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		dev-lisp/cl-irc
		dev-lisp/cl-ppcre
		dev-lisp/acl-compat"

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PV}-acl-compat-gentoo.patch
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc "${FILESDIR}"/README.Gentoo
}

pkg_postinst() {
	while read line; do einfo "${line}"; done < "${FILESDIR}"/README.Gentoo
}
