# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit apache-module eutils

DESCRIPTION="mod_lisp is an Apache module to easily write web applications in Common Lisp"
HOMEPAGE="http://www.fractalconcept.com/asp/mod_lisp"
# SRC_URI="http://www.fractalconcept.com:8000/public/open-source/mod_lisp/mod_lisp2.c"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.c"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~x86"
IUSE=""

APACHE2_MOD_CONF="10_${PN}"
APACHE2_MOD_DEFINE="LISP"

need_apache2

src_unpack() {
	mkdir -p "${S}" || die "mkdir S failed"
	cp -f "${DISTDIR}/${P}.c" "${S}/${PN}.c" || die "source copy failed"
}
