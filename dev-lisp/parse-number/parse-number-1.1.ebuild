# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-3

DESCRIPTION="Common Lisp library for parsing any number string"
HOMEPAGE="http://www.cliki.net/parse-number"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}"
