# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

DESCRIPTION="Ikarus is a free optimizing incremental native-code compiler for R6RS Scheme."
HOMEPAGE="http://www.cs.indiana.edu/~aghuloum/ikarus/index.html"
SRC_URI="http://www.cs.indiana.edu/~aghuloum/ikarus/${P}.tar.gz"

LICENSE="GPL-3"
SLOT="0"

KEYWORDS="-* ~x86"
IUSE="sse2"

DEPEND="dev-libs/gmp"
#for docs probably need dev-texlive/texlive-xetex but I can't test
RDEPEND="${DEPEND}"

src_compile() {
	#dies if sse2 global use flag is not enabled
	if use !sse2; then \
		eerror "You must have a processor who supports \
		SSE2 instructions" && die
	fi
	econf || die "econf failed"
	emake || die "emake failed"
}

src_install() {
	emake DESTDIR="${D}" install || die "emake install failed"
}
