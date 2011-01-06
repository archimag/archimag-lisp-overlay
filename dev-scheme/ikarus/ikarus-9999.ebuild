# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eutils flag-o-matic autotools bzr

DESCRIPTION="A free optimizing incremental native-code compiler for R6RS Scheme."
HOMEPAGE="http://www.cs.indiana.edu/~aghuloum/ikarus/"

LICENSE="GPL-3"
SLOT="0"

KEYWORDS="-* ~x86"
IUSE="sse2 doc"

RDEPEND=">=dev-libs/gmp-4.2.2"
DEPEND="${RDEPEND}"

EBZR_REPO_URI="http://ikarus-scheme.org/ikarus.dev"

src_compile() {
	if use !sse2; then \
		eerror "You must have a processor who supports \
		SSE2 instructions" && die
	fi

	append-flags "-std=gnu99"

	econf
	emake
}

src_test() {
	cd benchmarks
	make benchall || die "Tests failed"
	if [ -e timelog ]
	then
		cat timelog || die "stdout test logs failed."
	fi
}

src_install() {
	emake DESTDIR="${D}" install || die "emake install failed"
	rm -R "${D}/usr/share"
	dodoc README ACKNOWLEDGMENTS
	if use doc; then
		dodoc doc/*.pdf
	fi
}
