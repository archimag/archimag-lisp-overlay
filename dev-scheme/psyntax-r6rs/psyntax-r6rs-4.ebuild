# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

DESCRIPTION="A portable R6RS library and syntax-case system."
HOMEPAGE="http://www.cs.indiana.edu/~aghuloum/r6rs-libraries/"
SRC_URI="http://www.cs.indiana.edu/~aghuloum/r6rs-libraries/${PN}-rev${PV}.tgz"

SLOT="0"
LICENSE="MIT"
KEYWORDS="~x86"

DEPEND="bigloo? ( >=dev-scheme/bigloo-3.0b )
	chicken? ( >=dev-scheme/chicken-2.170 )
	gambit? ( >=dev-scheme/gambit-4.0_beta20 )
	ikarus? ( dev-scheme/ikarus )
	larceny? ( || ( >=dev-scheme/larceny-0.93 >=dev-scheme/larceny-bin-0.93 ) )
	mit-scheme? ( dev-scheme/mit-scheme-c )
	mzscheme? ( dev-scheme/drscheme )
	scheme48? ( dev-scheme/scheme48-1.7 )"

S="${WORKDIR}/${PN}"

IUSE="bigloo chicken gambit ikarus larceny mit-scheme mzscheme scheme48"

src_unpack() {
	unpack ${A}
	cd "${S}"

	# upstream's makefile requires Chez Petite and Ikarus to be installed
	# for anything to be built.  copy in a new makefile that uses the
	# provided pre-built files to bootstrap the other interpreters and
	# avoid this requirement
	cp "${FILESDIR}/${P}-Makefile" ./Makefile
}

src_compile() {
	for i in ${IUSE} ; do
		use ${i} && ( emake psyntax-${i}.pp || die "make failed" )
	done
}
