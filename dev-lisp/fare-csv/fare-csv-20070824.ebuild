# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_PV=${PV:0:4}-${PV:4:2}-${PV:6:2}

DESCRIPTION="FARE-CSV is a Common Lisp library for importing CSV (Common Separated Values) formatted text files"
HOMEPAGE="http://www.cliki.net/fare-csv"
SRC_URI="http://fare.tunes.org/asdf-packages/${PN}-${MY_PV}.tar.gz"
LICENSE="No-Problem-Bugroff"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-csv"

S="${WORKDIR}"/${PN}
