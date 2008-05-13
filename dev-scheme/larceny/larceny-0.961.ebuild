# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eutils

DESCRIPTION="Larceny is a Scheme Interpreter and a Scheme to IA32 and C Compiler"
LARCENY_SOURCE=${P}-src
LARCENY_X86_NATIVE_BINARY=${P}-bin-native-ia32-linux86
SRC_URI="!binary? ( http://www.ccs.neu.edu/home/will/Larceny/LarcenyReleases/${LARCENY_SOURCE}.tar.gz )
		 binary? ( http://www.ccs.neu.edu/home/will/Larceny/LarcenyReleases/${LARCENY_X86_NATIVE_BINARY}.tar.gz )"

HOMEPAGE="http://www.ccs.neu.edu/home/will/Larceny/"

LICENSE="Larceny"
SLOT="0"
KEYWORDS="~x86 ~amd64"
IUSE="binary doc examples"

DEPEND="dev-lang/nasm
		doc? ( app-text/asciidoc )"

if use binary; then
	MY_P=${LARCENY_SOURCE}
else
	MY_P=${LARCENY_X86_NATIVE_BINARY}
fi

S="${WORKDIR}"/${MY_P}

# BIG FAT HACK TAKE 2:
# We need a customized version of the timestamp hack from
# common-lisp-common-3.eclass for larceny.

larceny-save-timestamp-hack() {
	tar cpjf "${D}"/usr/share/larceny/portage-timestamp-compensate -C "${D}"/usr/share/larceny/lib . || \
		die "Failed to create the timestamp hack"
}

larceny-restore-timestamp-hack() {
	tar xjpfo "${ROOT}"/usr/share/larceny/portage-timestamp-compensate -C "${ROOT}"/usr/share/larceny/lib || \
		die "Failed to restore the timestamp hack"
}

larceny-remove-timestamp-hack() {
	[[ -e "${ROOT}"/usr/share/larceny/lib ]] || return 0
	rm -rf "${ROOT}"/usr/share/larceny/lib &>/dev/null || true
}

pkg_setup() {
	if ! use binary; then
		if [[ -n ${FORCE_IMPL} ]]; then
			LARCENY_BOOTSTRAP=${FORCE_IMPL}
		elif has_version '>=dev-scheme/larceny-0.95'; then
			einfo "Will bootstrap using installed larceny."
			LARCENY_BOOTSTRAP=larceny
		elif has_version '>=dev-scheme/larceny-petit-0.95'; then
			einfo "Will bootstrap using installed larceny-petit."
			LARCENY_BOOTSTRAP=petite
		elif has_version '>=dev-scheme/drscheme-370'; then
			einfo "Will bootstrap using PLT mzscheme."
			LARCENY_BOOTSTRAP=mzscheme
		else
			eerror "You need >=larceny-0.95 or >=drscheme-370"
			eerror "to compile larceny from source."
			die "please install larceny binary or drscheme"
		fi
	fi
}

src_unpack() {
	unpack ${A}
	cd "${S}"

	if ! use binary; then
		# fix PIC / STACK problems
		epatch "${FILESDIR}"/${P}-textrelfix.patch
		epatch "${FILESDIR}"/${P}-stackfix.patch
	fi
}

src_compile() {
	if ! use binary; then

		# stays a little more readable like this, yea? :)
		cat > setupscript <<EOF
(setup 'scheme: '${LARCENY_BOOTSTRAP}
	   'host: 'linux86
	   'sassy
(build-config-files)
(load-compiler)
(build-heap)
(build-runtime)
(build-executable)
(build-larceny-files)
(exit)
EOF

		case ${LARCENY_BOOSTRAP} in
			larceny)
				cat setupscript | larceny -- setup.sch || \
					die "Compilation with native host failed"
				;;
			mzscheme)
				cat setupscript | mzscheme -f setup.sch || \
					die "Compilation with mzscheme host failed"
				;;
		esac

		echo "(exit)" | ./larceny.bin -stopcopy -- src/Build/iasn-larceny-heap.fasl || \
			die "Compilation of native larceny heap failed"
		echo "(exit)" | ./larceny.bin -stopcopy -- src/Build/iasn-twobit-heap.fasl || \
			die "Compilation of native twobit heap failed"
		cp larceny twobit

		pushd lib/R6RS
		echo "(require 'r6rsmode)
			  (larceny:compile-r6rs-runtime)
			  (exit)" | ../../larceny || die "Compilation of R6RS libraries failed"
		popd
	fi

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
	cp -af startup.sch \
		compile-stale \
		*.bin \
		*.heap \
		lib \
		"${D}"/${LARCENY_LOCATION} || \
		die "Installing larceny base files failed"

	if use binary; then
		LARCENY_SCRIPTS="larceny larceny-np scheme-script twobit"
	else
		LARCENY_SCRIPTS="larceny scheme-script twobit"
	fi

	cp -af ${LARCENY_SCRIPTS} "${D}"/${LARCENY_LOCATION} || \
		die "Installing larceny scripts failed"

	# sed the scripts with the correct location so they can be symlinked
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

	if use examples; then
		cp -af examples "${D}"/${LARCENY_LOCATION} || die "Installing examples failed."
	fi

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

	larceny-save-timestamp-hack
}

pkg_postinst() {
	larceny-restore-timestamp-hack
}

pkg_prerm() {
	larceny-remove-timestamp-hack
}
