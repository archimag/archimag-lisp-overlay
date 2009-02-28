# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eutils

MY_PV=${PV/_beta/b}
MY_P=${PN}-${MY_PV}

DESCRIPTION="Larceny is a Scheme Interpreter and a Scheme to IA32 and C Compiler"
#LARCENY_SOURCE=${P}-src
#LARCENY_X86_NATIVE_BINARY=${P}-bin-native-ia32-linux86
SRC_URI="!binary? ( http://www.ccs.neu.edu/home/will/Larceny/LarcenyReleases/${MY_P}-src.tar.gz )
		  binary? ( x86? ( http://www.ccs.neu.edu/home/will/Larceny/LarcenyReleases/${MY_P}-bin-native-ia32-linux86.tar.gz )
				  amd64? ( http://www.ccs.neu.edu/home/will/Larceny/LarcenyReleases/${MY_P}-bin-native-ia32-linux86.tar.gz ) )"

HOMEPAGE="http://www.ccs.neu.edu/home/will/Larceny/"

LICENSE="Larceny"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~ppc64 ~x86"
IUSE="binary"

DEPEND="!dev-scheme/larceny-petit
		dev-lang/nasm
		doc? ( app-text/asciidoc )"
RDEPEND=""

S="${WORKDIR}"/${MY_P}-$(use binary && echo bin-native-ia32-linux86 || echo src)

#echo S= ${S}

# BIG FAT HACK TAKE 2:
# We need a customized version of the timestamp hack from
# common-lisp-common-3.eclass for larceny.

larceny-save-timestamp-hack() {
	tar cpjf "${D}"/usr/share/larceny/portage-timestamp-compensate -C "${D}"/usr/share/larceny lib || \
		die "Failed to create the timestamp hack"
}

larceny-restore-timestamp-hack() {
	tar xjpfo "${ROOT}"/usr/share/larceny/portage-timestamp-compensate -C "${ROOT}"/usr/share/larceny || \
		die "Failed to restore the timestamp hack"
}

larceny-remove-timestamp-hack() {
	[[ -d "${ROOT}"/usr/share/larceny/lib ]] || return 0
	rm -rf "${ROOT}"/usr/share/larceny/lib &>/dev/null || true
}

# pkg_setup() {
# 	if ! use binary; then
# 		if [[ -n ${FORCE_IMPL} ]]; then
# 			einfo "Forcing on bootstrap with ${FORCE_IMPL}"
# 			LARCENY_BOOTSTRAP=${FORCE_IMPL}
# 		elif has_version '>=dev-scheme/larceny-0.95'; then
# 			einfo "Will bootstrap using installed larceny."
# 			LARCENY_BOOTSTRAP=larceny
# 		#elif has_version '>=dev-scheme/larceny-petit-0.95'; then
# 			#einfo "Will bootstrap using installed larceny-petit."
# 			#LARCENY_BOOTSTRAP=petite
# 		elif has_version '>=dev-scheme/drscheme-370'; then
# 			einfo "Will bootstrap using PLT mzscheme."
# 			LARCENY_BOOTSTRAP=mzscheme
# 		else
# 			eerror "You need >=larceny-0.95 or >=drscheme-370"
# 			eerror "to compile larceny from source."
# 			die "please install larceny binary or drscheme"
# 		fi
# 	fi
# }

_src_unpack() {
	unpack ${A}
	cd "${S}"

	if ! use binary; then
		# fix PIC / STACK problems
		epatch "${FILESDIR}"/${P}-textrelfix.patch
		epatch "${FILESDIR}"/${P}-stackfix.patch
	fi
}

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

#		pushd lib/R6RS
		echo "(require 'r6rsmode) (larceny:compile-r6rs-runtime) (exit)" | ./larceny || die
#		popd
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

	SCRIPTS="compile-stale larceny twobit"
	for script in ${SCRIPTS}; do
		dobin ${script} # dosym "${LARCENY_LOCATION}"/${script} /usr/bin/${script}
		dosed "s,# LARCENY_ROOT=.*,LARCENY_ROOT=${LARCENY_LOCATION}," /usr/bin/${script}
	done

	# the binary sometimes has misterious mtime issues.
#	if use binary; then
#		find "${D}"/${LARCENY_LOCATION}/lib -name '*.fasl' -o -name '*.slfasl' -exec touch '{}' +
#	fi

	# sed the scripts with the correct location so they can be symlinked
#	dosed "s:# LARCENY_ROOT=/usr/local/lib/larceny:LARCENY_ROOT=${ROOT}/${LARCENY_LOCATION}:" \
#		"${ROOT}"/${LARCENY_LOCATION}/larceny || die "dosed larceny failed"
#	dosed "s:# LARCENY_ROOT=/usr/local/lib/larceny:LARCENY_ROOT=${ROOT}/${LARCENY_LOCATION}:" \
#		"${ROOT}"/${LARCENY_LOCATION}/scheme-script || die "dosed scheme-script failed"

#	larceny-save-timestamp-hack
}

_pkg_postinst() {
	larceny-restore-timestamp-hack
}

_pkg_prerm() {
	larceny-remove-timestamp-hack
}
