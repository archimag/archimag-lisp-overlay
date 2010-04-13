# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Common Lisp library for encoding text in various web-savvy formats."
HOMEPAGE="http://www.cliki.net/html-encode"
SRC_URI="http://www.unmutual.info/software/${P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}"
