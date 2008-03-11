# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Common Lisp utilities for printing and parsing date"
HOMEPAGE="http://packages.debian.org/unstable/devel/cl-${PN}
	http://www.cliki.net/${PN}"
SRC_URI="http://ftp.debian.org/debian/pool/main/c/cl-${PN}/cl-${PN}_${PV}.orig.tar.gz"

LICENSE="public-domain"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}"

S="${WORKDIR}/cl-${P}"
