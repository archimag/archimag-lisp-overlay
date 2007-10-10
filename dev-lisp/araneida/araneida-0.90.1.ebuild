# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: Exp $

inherit common-lisp eutils

DESCRIPTION="Araneida is small, highly-portable web server for Common Lisp"
HOMEPAGE="http://www.cliki.net/Araneida"
SRC_URI="http://common-lisp.net/project/${PN}/release/${PN}-version-${PV}.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="standalone"
DEPEND="!dev-lisp/cl-${PN}
	dev-lisp/split-sequence
	dev-lisp/net-telent-date"
#	parenscript? ( dev-lisp/cl-parenscript )"
RDEPEND="${DEPEND}
	!standalone? ( || ( www-servers/apache www-servers/pound ) )"

CLPACKAGE=${PN}

S=${WORKDIR}/${PN}-version-${PV}

src_install() {
	insinto "${CLSOURCEROOT}"/${PN}
	doins *.{asd,lisp} NEWS
	for i in utility obsolete ${PN}-repl compat; do
		insinto "${CLSOURCEROOT}"/${PN}/$i
		doins $i/*
	done
	insinto "${CLSOURCEROOT}"/${PN}/doc
	doins doc/*.{html,css,lisp} doc/PLAN
	common-lisp-system-symlink
	dodoc doc/*.txt LICENCE* RELEASE_NOTES NEWS Notes README TODO
	dosym "${CLSOURCEROOT}"/${PN}/doc/ \
		/usr/share/doc/${PF}/html
	dodoc "${FILESDIR}"/README.Gentoo
}
