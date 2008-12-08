# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A Common Lisp library for constructing and manipulating MIME objects."
HOMEPAGE="http://www.cliki.net/cl-mime/"
SRC_URI="http://www.bobturf.org/software/${PN}/${P}.tar.gz"
LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND=">=dev-lisp/cl-ppcre-2.0.0
		dev-lisp/cl-base64
		dev-lisp/cl-qprint"

S="${WORKDIR}"/${PN}
