# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_P=${PN}_${PV}

DESCRIPTION="A library meant to make writing portable multi-threaded apps simple."
HOMEPAGE="http://common-lisp.net/project/bordeaux-threads/"
SRC_URI="http://common-lisp.net/project/${PN}/releases/${MY_P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

S="${WORKDIR}"/${MY_P}

src_install() {
	common-lisp-install src test ${PN}.asd
	common-lisp-symlink-asdf
}

pkg_postinst() {
	while read line; do einfo ${line}; done <<EOF

You can find API documentation on the project's wiki:

	http://trac.common-lisp.net/bordeaux-threads/wiki/ApiDocumentation

EOF
}
