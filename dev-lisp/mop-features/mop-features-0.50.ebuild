# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_P=${PN}_${PV:0:3}

DESCRIPTION="Provides a way to check what features a Common Lisp implementation supports."
HOMEPAGE="http://common-lisp.net/project/closer/features.html"
SRC_URI="http://common-lisp.net/project/closer/ftp/${MY_P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/lw-compat"

CLSYSTEMS="mop-feature-tests"

S="${WORKDIR}"/${MY_P}

src_install() {
	common-lisp-install *.{lisp,asd} tests/*.lisp
	common-lisp-symlink-asdf
	dodoc release-notes.txt
}
