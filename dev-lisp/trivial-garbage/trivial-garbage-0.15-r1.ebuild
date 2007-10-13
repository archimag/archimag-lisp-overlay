# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="trivial-garbage is a simple library that provides a portable API to
finalizers, weak hash-tables and weak pointers."
HOMEPAGE="http://www.cliki.net/${PN}"
SRC_URI="http://common-lisp.net/~loliveira/tarballs/${PN}/${PN}_${PV}.tar.gz"
LICENSE="public-domain"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}"

S="${WORKDIR}/${PN}_${PV}"
