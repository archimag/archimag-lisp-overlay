# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eutils

DESCRIPTION="Larceny is a Scheme Interpreter and a Scheme to IA32 and C Compiler"
SRC_URI="http://www.ccs.neu.edu/home/will/Larceny/LarcenyReleases/larceny-${PV}-src.tar.gz
	!mzhost? ( http://www.ccs.neu.edu/home/will/Larceny/LarcenyReleases/larceny-${PV}-bin-native-ia32-linux86.tar.gz )"

HOMEPAGE="http://www.ccs.neu.edu/home/will/Larceny/"

LICENSE="Larceny"
SLOT="0"
KEYWORDS="~x86"
IUSE="petit mzhost"

DEPEND="mzhost? ( dev-scheme/drscheme )
	dev-lang/nasm"

S="${WORKDIR}/${PN}-${PV}-src"

src_unpack() {
	unpack ${A}
	cd ${S}

	# fix PIC / STACK problems
	epatch "${FILESDIR}"/${P}-textrelfix.patch
	epatch "${FILESDIR}"/${P}-stackfix.patch
}

src_compile() {
	local setupscript

	setupscript="(setup 'scheme: $(
				( use mzhost && echo "'mzscheme" ) ||
				( echo "'larceny" )
			)
			'host: 'linux86
			$( ! use petit && echo "'sassy" ))
		(build-config-files)
		(load-compiler)
		(build-heap)
		(build-runtime)
		(build-executable)
		(build-larceny-files)
		$( use petit && echo "(build-twobit)" )
		(exit)"

	if use mzhost; then
		echo "${setupscript}" | mzscheme -f setup.sch
	else
		echo "${setupscript}" | ${WORKDIR}/${PN}-${PV}-bin-native-ia32-linux86/larceny -- setup.sch || die "compilation failed"
	fi

	if use petit; then
		echo "(exit)" | ./petit-larceny.bin -stopcopy -- src/Build/petit-larceny-heap.sch || die "compilation failed"
		echo "(exit)" | ./twobit.bin -stopcopy -- src/Build/petit-twobit-heap.sch || die "compilation failed"
	else
		echo "(exit)" | ./larceny.bin -stopcopy -- src/Build/iasn-larceny-heap.fasl || die "compilation failed"
		echo "(exit)" | ./larceny.bin -stopcopy -- src/Build/iasn-twobit-heap.fasl || die "compilation failed"
		cp larceny twobit
	fi

	pushd lib/R6RS
	echo "(require 'r6rsmode)
		(larceny:compile-r6rs-runtime)
		(exit)" | ../../larceny || die "failed to build R6RS libraries"
	popd
}

src_install() {
        dodoc COPYRIGHT README-FIRST.txt doc/HOWTO-* || die "installing docs"
        mkdir -p ${D}/opt/larceny
        mv -f larceny\
		twobit\
                lib\
                startup.sch\
		*.bin\
                *.heap\
                scheme-script\
                 "${D}/opt/larceny"
}
