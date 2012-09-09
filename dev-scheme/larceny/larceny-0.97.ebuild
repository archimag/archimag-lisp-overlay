# Copyright 1999-2012 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eutils

MY_PV=${PV/_beta/b}
MY_P=${PN}-${MY_PV}

DESCRIPTION="Larceny is a simple and efficient implementation of the Scheme programming language."
SRC_URI="!binary? ( http://www.larcenists.org/LarcenyReleases/${MY_P}-src.tar.gz )
		  binary? ( x86? ( http://www.larcenists.org/LarcenyReleases/${MY_P}-bin-native-ia32-linux86.tar.gz )
				  amd64? ( http://www.larcenists.org/LarcenyReleases/${MY_P}-bin-native-ia32-linux86.tar.gz ) )"

HOMEPAGE="http://www.larcenists.org/"

LICENSE="LGPL-2.1" # or less restrictive
SLOT="0"
KEYWORDS="~amd64"
IUSE="binary"

DEPEND="!dev-scheme/larceny-petit
		dev-lang/nasm"
RDEPEND=""

S="${WORKDIR}"/${MY_P}-$(use binary && echo bin-native-ia32-linux86 || echo src)

src_compile() {
	# see doc/HOWTO-BUILD
	if ! use binary; then

		cat > setupscript.gentoo <<EOF
(load "setup.sch")
(setup 'scheme: 'larceny
	   'host: 'linux86
	   'sassy) ;without this flag builds petite (C-backend) instead of native
(build-config-files)
(load-compiler)

(build-heap)
(build-runtime)
(build-executable)

(build-larceny-files)
(exit)
EOF
		cat setupscript.gentoo | larceny ||	die "first install a binary larceny"

		echo "(exit)" | ./larceny.bin -stopcopy -- src/Build/iasn-larceny-heap.fasl || die
		echo "(exit)" | ./larceny.bin -stopcopy -- src/Build/iasn-twobit-heap.fasl || die
		cp larceny twobit

		echo "(require 'r6rsmode) (larceny:compile-r6rs-runtime) (exit)" | ./larceny || die
	fi # ! use binary

	# if use doc; then
	# 	pushd doc
	# 	emake user-manual.chunked/index.html || die "Making user manual failed"
	# 	emake larceny-notes.chunked/index.html || die "Making implementation notes failed"
	# 	popd
	# fi
}

src_install() {
#	dodoc README-FIRST.txt doc/HOWTO-* || die "Installing docs failed"

	LARCENY_LOCATION="/usr/share/larceny"
	dodir "${LARCENY_LOCATION}"
	# -a for preserving timestamps of fasls
	cp -aR * "${D}"/"${LARCENY_LOCATION}" || die

	SCRIPTS="compile-stale larceny scheme-script twobit"
	for script in ${SCRIPTS}; do
		dobin ${script} # dosym "${LARCENY_LOCATION}"/${script} /usr/bin/${script}
		dosed "s,# LARCENY_ROOT=.*,LARCENY_ROOT=${LARCENY_LOCATION}," /usr/bin/${script}
	done
}
