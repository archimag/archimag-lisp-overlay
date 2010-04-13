# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A library to supplement xmls which includes support for parsing with side effects, searching and validating XML."
HOMEPAGE="http://www.cliki.net/xmls-tools/"
SRC_URI="http://www.bobturf.org/software/${PN}/${P}.tar.gz"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/xmls"

S="${WORKDIR}"/${PN}
