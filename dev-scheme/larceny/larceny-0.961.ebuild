# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eutils

DESCRIPTION="Larceny is a Scheme Interpreter and a Scheme to IA32 and C Compiler"
LARCENY_SOURCE="${P}-src.tar.gz"
LARCENY_X86_NATIVE_BINARY="${P}-bin-native-ia32-linux86.tar.gz"
SRC_URI="http://www.ccs.neu.edu/home/will/Larceny/LarcenyReleases/${LARCENY_SOURCE}
		 !mzhost? ( http://www.ccs.neu.edu/home/will/Larceny/LarcenyReleases/${LARCENY_X86_NATIVE_BINARY} )"

HOMEPAGE="http://www.ccs.neu.edu/home/will/Larceny/"

LICENSE="Larceny"
SLOT="0"
KEYWORDS="~x86"
IUSE="doc petit mzhost"

DEPEND="mzhost? ( dev-scheme/drscheme )
		dev-lang/nasm
		doc? ( app-text/asciidoc )"

S="${WORKDIR}/${P}-src"

src_unpack() {
	unpack ${A}
	cd "${S}"

	# fix PIC / STACK problems
	epatch "${FILESDIR}"/${P}-textrelfix.patch
	epatch "${FILESDIR}"/${P}-stackfix.patch
}

src_compile() {
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
		cat setupscript | mzscheme -f setup.sch || \
			die "Compilation with mzhost failed"
	else
		cat setupscript | "${WORKDIR}"/${P}-bin-native-ia32-linux86/larceny -- setup.sch || \
			die "Compilation with native host failed"
	fi

	if use petit; then
		echo "(exit)" | ./petit-larceny.bin -stopcopy -- src/Build/petit-larceny-heap.sch || \
			die "Compilation of petit larceny heap failed"
		echo "(exit)" | ./twobit.bin -stopcopy -- src/Build/petit-twobit-heap.sch || \
			die "Compilation of petit twobit heap failed"
	else
		echo "(exit)" | ./larceny.bin -stopcopy -- src/Build/iasn-larceny-heap.fasl || \
			die "Compilation of native larceny heap failed"
		echo "(exit)" | ./larceny.bin -stopcopy -- src/Build/iasn-twobit-heap.fasl || \
			die "Compilation of native twobit heap failed"
		cp larceny twobit
	fi

	pushd lib/R6RS
	echo "(require 'r6rsmode)
		(larceny:compile-r6rs-runtime)
		(exit)" | ../../larceny || die "Compilation of R6RS libraries failed"
	popd

	if use doc; then
		pushd doc
		emake user-manual.chunked/index.html || die "Making user manual failed"
		emake larceny-notes.chunked/index.html || die "Making implementation notes failed"
		popd
	fi
}

src_install() {
	dodoc README-FIRST.txt doc/HOWTO-* || die "Installing docs failed"

	LARCENY_LOCATION="/usr/share/larceny"
	dodir ${LARCENY_LOCATION}
	# use cp -a here to preserve the timestamps of the .fasl files in
	# this step of the installation.
	mv -f larceny \
		twobit \
		lib \
		startup.sch \
		*.bin \
		*.heap \
		scheme-script \
		"${D}"/${LARCENY_LOCATION} || \
		die "Installing larceny files failed"

	# sed the scripts with the correct location so they can be symlinked
	LARCENY_SCRIPTS="larceny scheme-script twobit"
	for script in ${LARCENY_SCRIPTS}; do
		dosed "s:# LARCENY_ROOT=/usr/local/lib/larceny:LARCENY_ROOT=${ROOT}/${LARCENY_LOCATION}:" \
			"${ROOT}"/${LARCENY_LOCATION}/${script} || die "dosed on ${script} failed"
	done

	# now we can symlink them to /usr/bin
	dodir /usr/bin
	for script in ${LARCENY_SCRIPTS}; do
		dosym "${ROOT}"/${LARCENY_LOCATION}/${script} "${ROOT}"/usr/bin/${script} || \
			die "dosym on ${script} failed"
	done

	if use doc; then
		cd "${S}"/doc
		docinto LarcenyNotes
		dodoc ./LarcenyNotes/* || die "Installing doc/LarcenyNotes failed"
		docinto LarcenyNotes/html
		dodoc ./larceny-notes.chunked/* || die "Installing doc/LarcenyNotes/html failed"
		docinto UserManual
		dodoc ./UserManual/* || die "Installing doc/UserManual failed"
		docinto UserManual/html
		dodoc ./user-manual.chunked/* || die "Installing doc/UserManual/html failed"
		docinto DevManual
		dodoc ./DevManual/* || die "Installing doc/Devmanual failed"
		docinto OldDocs
		dodoc ./OldDocs/* || die "Installing doc/OldDocs failed"
		cd "${S}"
	fi

	# this oughta prevent bogus 'stale fasl' issues
	find "${D}"/${LARCENY_LOCATION}/lib -name '*.fasl' -exec touch '{}' +
}
