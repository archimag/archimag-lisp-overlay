# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

MY_P=${PN}_${PV}

DESCRIPTION="CGI handlers for Hunchentoot."
HOMEPAGE="http://www.cyrusharmon.org/projects?project=hunchentoot-cgi"
SRC_URI="http://cyrusharmon.org/static/releases/${MY_P}.tar.gz"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND=">=dev-lisp/hunchentoot-1.0.0"

S="${WORKDIR}"/${MY_P}

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/fix-asd.patch
}

src_install() {
	common-lisp-install *.{lisp,asd} version.lisp-expr
	common-lisp-symlink-asdf
	dodoc NEWS README
}
