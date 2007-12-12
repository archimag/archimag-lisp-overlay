# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Vecto is a simplified interface to the powerful CL-VECTORS vector rasterization library."
HOMEPAGE="http://www.xach.com/lisp/vecto"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.gz"
LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
DEPEND="dev-lisp/cl-vectors
		dev-lisp/zpb-ttf
		>=dev-lisp/salza-png-1.0.1"
