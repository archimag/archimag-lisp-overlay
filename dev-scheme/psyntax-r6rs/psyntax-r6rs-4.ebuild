# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

DESCRIPTION="A portable R6RS library and syntax-case system."
HOMEPAGE="http://www.cs.indiana.edu/~aghuloum/r6rs-libraries/"
SRC_URI="http://www.cs.indiana.edu/~aghuloum/r6rs-libraries/${PN}-rev${PV}.tgz"

SLOT="0"
LICENSE="MIT"
KEYWORDS="~x86"

DEPEND="dev-scheme/ikarus"

S="${WORKDIR}/${PN}"
