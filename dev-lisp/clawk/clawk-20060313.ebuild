# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="An AWK-like text processing language with a Lispy implementation."
HOMEPAGE="http://www.geocities.com/mparker762/clawk.html#clawk
		http://www.cl-user.net/asp/libs/tputils-clawk"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
LICENSE="BSD"

SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-awk
		dev-lisp/regex"
