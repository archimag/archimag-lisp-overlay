# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eutils

DESCRIPTION="Larceny is a Scheme Interpreter and a Scheme to IA32 and C Compiler"
LARCENY_SOURCE="http://www.ccs.neu.edu/home/will/Larceny/LarcenyReleases/${PN}-${PV}-src.tar.gz"
LARCENY_X86_NATIVE_BINARY="http://www.ccs.neu.edu/home/will/Larceny/LarcenyReleases/${PN}-${PV}-bin-native-ia32-linux86.tar.gz"
SRC_URI="${LARCENY_SOURCE}
		 !mzhost? ( ${LARCENY_X86_NATIVE_BINARY} )"

HOMEPAGE="http://www.ccs.neu.edu/home/will/Larceny/"

LICENSE="Larceny"
SLOT="0"
KEYWORDS="~x86"
IUSE="petit mzhost"

DEPEND="mzhost? ( dev-scheme/drscheme )
		dev-lang/nasm"

S="${WORKDIR}/${PN}-${PV}-src"

src_unpack() {
	unpack ${LARCENY_SOURCE}

	# do it this way so we're 100% sure of preserving the timestamps of the .fasl files,
	# regardless of package manager quirks.
	if ! use mzhost; then
		gzip -dc "${DISTDIR}"/${LARCENY_X86_NATIVE_BINARY} | tar xf - --no-same-owner --same-order
	fi

	cd "${S}"

	# fix PIC / STACK problems
	epatch "${FILESDIR}"/${P}-textrelfix.patch
	epatch "${FILESDIR}"/${P}-stackfix.patch
}

src_compile() {
	local setupscript

	# stays a little more readable like this, yea? :)
	cat > setupscript <<EOF
(setup 'scheme: $(
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
		(exit)
EOF


	if use mzhost; then
		cat setupscript | mzscheme -f setup.sch
	else
		cat setupscript | "${WORKDIR}"/${PN}-${PV}-bin-native-ia32-linux86/larceny -- setup.sch || die "compilation failed"
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

		LARCENY_LOCATION="/opt/larceny"
		dodir ${LARCENY_LOCATION}
		# use cp -a here to preserve the times of the .fasl files
		cp -af larceny \
			twobit \
			lib \
			startup.sch \
			*.bin \
			*.heap \
			scheme-script \
			"${D}"/${LARCENY_LOCATION}

		# sed the scripts with the correct location so they can be symlinked
		LARCENY_SCRIPTS="larceny scheme-script twobit"
		for script in ${LARCENY_SCRIPTS}; do
			dosed "s:# LARCENY_ROOT=/usr/local/lib/larceny:LARCENY_ROOT=${LARCENY_LOCATION}:" ${LARCENY_LOCATION}/${script}
		done

		# now we can symlink them to /usr/bin
		dodir /usr/bin
		pushd "${D}"/usr/bin &>/dev/null
		for script in ${LARCENY_SCRIPTS}; do
			dosym ../..${LARCENY_LOCATION}/${script} ${script}
		done
		popd &>/dev/null
}
