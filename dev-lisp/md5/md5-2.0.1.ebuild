# Copyright 1999-2013 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-3

MY_P=${PN}_${PV}

DESCRIPTION="A fast implementation of MD5"
HOMEPAGE="http://www.pmsf.de/resources/lisp/MD5.html"
SRC_URI="http://www.pmsf.de/pub/download/${P}.zip"

LICENSE="public-domain"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}"
