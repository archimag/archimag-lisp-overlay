# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_P=${PN}_${PV}

DESCRIPTION="Common Lisp package for MD5 Message Digests"
HOMEPAGE="http://www.pmsf.de/resources/lisp/MD5.html"
SRC_URI="mirror://gentoo/cl-${MY_P}.orig.tar.gz"

LICENSE="public-domain"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}"

S="${WORKDIR}"/cl-${P}
