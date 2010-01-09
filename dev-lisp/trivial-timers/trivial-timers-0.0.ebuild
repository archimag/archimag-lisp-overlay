# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"
inherit common-lisp-2

MY_P=${PN}_${PV}

DESCRIPTION="Trivial timer library."
HOMEPAGE="http://www.cliki.net/trivial-timers/"
SRC_URI="http://releases.unknownlamer.org/trivial-timers/${MY_P}.tar.gz"

LICENSE="public-domain"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/bordeaux-threads"

S="${WORKDIR}"/${MY_P}

