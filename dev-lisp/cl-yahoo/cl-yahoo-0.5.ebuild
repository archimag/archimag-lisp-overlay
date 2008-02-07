# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="CL-YAHOO is a Common Lisp interface to the Yahoo! API"
HOMEPAGE="http://www.cliki.net/cl-yahoo"
SRC_URI="mirror://gentoo/${P}.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="dev-lisp/s-xml
		dev-lisp/trivial-http"
