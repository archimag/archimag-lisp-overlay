# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A Common Lisp Library for encoding and decoding strings in quoted-printable format."
HOMEPAGE="http://www.cliki.net/cl-qprint/"
SRC_URI="http://www.bobturf.org/software/${PN}/${P}.tar.gz"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

S="${WORKDIR}"/${PN}
