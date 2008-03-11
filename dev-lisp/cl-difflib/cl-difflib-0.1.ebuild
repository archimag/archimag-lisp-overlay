# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="CL-DIFFLIB is a Lisp library for computing differences between sequences."
HOMEPAGE="http://www.cliki.net/CL-DIFFLIB"
SRC_URI="http://lemonodor.com/code/${PN}_${PV}.tar.gz"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

S="${WORKDIR}"/${PN}_${PV}
