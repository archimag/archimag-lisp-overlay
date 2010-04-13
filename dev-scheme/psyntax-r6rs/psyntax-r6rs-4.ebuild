# Copyright 1999-2010 Gentoo Foundation
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
	larceny? ( >=dev-scheme/larceny-0.93 )
	mit-scheme? ( dev-scheme/mit-scheme-c )
	mzscheme? ( dev-scheme/drscheme )
	scheme48? ( >=dev-scheme/scheme48-1.7 )"

S="${WORKDIR}"/${PN}

IUSE="bigloo chicken examples gambit ikarus larceny mit-scheme mzscheme scheme48"

# used to determine all use-flags that associate with scheme implementations
SCHEME_USES="bigloo chicken gambit ikarus larceny mit-scheme mzscheme scheme48"

src_unpack() {
	unpack ${A}
	cd "${S}"

	# upstream's makefile requires Chez Petite and Ikarus to be installed
	# for anything to be built.  copy in a new makefile that uses the
	# provided pre-built files to bootstrap the other interpreters and
	# avoid this requirement
	cp "${FILESDIR}"/${P}-Makefile ./Makefile
}

src_compile() {
	for i in ${SCHEME_USES} ; do
		use ${i} && ( emake psyntax-${i}.pp || die "make failed" )
	done
}

src_install() {
	dodoc README.txt || die "Installing docs failed"

	PSYNTAX_LOCATION="/usr/share/psyntax-r6rs"
	dodir ${PSYNTAX_LOCATION}

	if use examples ; then
		cp -af examples "${D}"/${PSYNTAX_LOCATION} || \
			die "Installing examples failed"
	fi

	for i in ${SCHEME_USES} ; do
		if use ${i} ; then
			# install the compiled psyntax-*.pp file
			cp -af psyntax-${i}.pp "${D}"/${PSYNTAX_LOCATION} || \
				die "Installing psyntax library file failed"

			# only install the *.r6rs.ss script if it exists
			[ -e ${i}.r6rs.ss ] && ( \
				cp -af ${i}.r6rs.ss \
					"${D}"/${PSYNTAX_LOCATION} || \
					die "Installing psyntax script file failed" )
		fi
	done
}
