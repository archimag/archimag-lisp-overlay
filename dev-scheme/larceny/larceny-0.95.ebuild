# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

DESCRIPTION="Larceny is a Scheme Interpreter and a Scheme to IA32 and C Compiler"
SRC_URI="http://www.ccs.neu.edu/home/will/Larceny/LarcenyReleases/larceny-${PV}-src.tar.gz
	!mzhost? ( http://www.ccs.neu.edu/home/will/Larceny/LarcenyReleases/larceny-${PV}-bin-native-ia32-linux86.tar.gz )"

HOMEPAGE="http://www.ccs.neu.edu/home/will/Larceny/"

LICENSE="Larceny"
SLOT="0"
KEYWORDS="~amd64"
IUSE="petit mzhost"

DEPEND="mzhost? ( dev-scheme/drscheme )
	dev-lang/nasm"

S="${WORKDIR}/${PN}-${PV}-src"

src_compile() {
	local setupscript

	setupscript="(setup 'scheme:"

	if use mzhost; then
		setupscript="${setupscript} 'mzscheme"
	else
		setupscript="${setupscript} 'larceny"
	fi

	setupscript="${setupscript} 'host: 'linux86"

	if ! use petit; then
		setupscript="${setupscript} 'sassy"
	fi

	setupscript="${setupscript})
		(build-config-files)
		(load-compiler)
		(build-heap)
		(build-runtime)
		(build-executable)
		(build-larceny-files)"

	if use mzhost; then
		echo "${setupscript}"|mzscheme -f setup.sch
	else
		echo "${setupscript}"|${WORKDIR}/${PN}-${PV}-bin-native-ia32-linux86/larceny -- setup.sch || die "compilation failed"
	fi

	echo "(exit)"|./petit-larceny.bin -stopcopy -- src/Build/petit-larceny-heap.sch || die "compilation failed"
	echo "(exit)"|./twobit.bin -stopcopy -- src/Build/petit-twobit-heap.sch || die "compilation failed"

	pushd lib/R6RS
	echo "(require 'r6rsmode)
		(larceny:compile-r6rs-runtime)
		(exit)"|../../larceny || die "failed to build R6RS libraries"
	popd
}

src_install() {
        dodoc COPYRIGHT README-FIRST.txt doc/HOWTO-* || die "installing docs"
        mkdir -p ${D}/opt/larceny
        mv -f larceny*\
                lib\
                startup.sch\
                *.heap\
                twobit\
                scheme-script\
                 "${D}/opt/larceny"
}
