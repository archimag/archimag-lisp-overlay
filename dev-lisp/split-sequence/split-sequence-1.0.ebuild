# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=3
inherit common-lisp-3 eutils

DESCRIPTION="Functions to partition a Common Lisp sequence into multiple result sequences"
HOMEPAGE="http://www.cliki.net/SPLIT-SEQUENCE"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.gz"

LICENSE="public-domain"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		dev-lisp/fiveam"
