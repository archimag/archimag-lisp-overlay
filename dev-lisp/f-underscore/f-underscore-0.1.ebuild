# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_P=${PN}_${PV}

DESCRIPTION="F-underscore is a tiny library of functional programming utils."
HOMEPAGE="http://groups.google.com/group/cl-terrace/web/f-underscore"
SRC_URI="http://common-lisp.net/project/bpm/release/${MY_P}.tar.gz"

LICENSE="public-domain"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

S="${WORKDIR}"/${MY_P}
