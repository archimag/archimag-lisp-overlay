# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-3

MY_P=${PN}_${PV}

DESCRIPTION="Package that implements binary trees of various kinds."
HOMEPAGE="http://cliki.net/trees/"
SRC_URI="http://method-combination.net/lisp/files/${MY_P}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

S="${WORKDIR}"/${MY_P}
