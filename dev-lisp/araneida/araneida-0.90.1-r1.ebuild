# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: Exp $

inherit common-lisp-2 eutils

PKG="${PN}-version-${PV}"

DESCRIPTION="Araneida is small, highly-portable web server for Common Lisp"
HOMEPAGE="http://www.cliki.net/Araneida"
SRC_URI="http://common-lisp.net/project/${PN}/release/${PKG}.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="standalone"
DEPEND="!dev-lisp/cl-${PN}
	dev-lisp/split-sequence
	dev-lisp/net-telent-date"
RDEPEND="${DEPEND}
	!standalone? ( || ( www-servers/apache www-servers/pound ) )"

S="${WORKDIR}/${PKG}"

src_install() {
	common-lisp-install *.{asd,lisp} NEWS
	common-lisp-install utility obsolete ${PN}-repl compat
	common-lisp-system-symlink

	dohtml doc/*.{html,css,lisp} doc/PLAN
	dosym /usr/share/doc/${PF}/html "${CLSOURCEROOT}"/${PN}/doc

	dodoc doc/*.txt LICENCE* RELEASE_NOTES NEWS Notes README TODO
	dodoc "${FILESDIR}"/README.Gentoo
}
