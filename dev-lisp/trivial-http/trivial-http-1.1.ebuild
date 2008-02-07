# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="TRIVIAL-HTTP is a library for doing HTTP POST and GET over a socket interface"
HOMEPAGE="http://www.cliki.net/trivial-http"
SRC_URI="http://www.unmutual.info/software/${P}.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="!dev-lisp/cl-${PN}
		dev-lisp/trivial-sockets"
