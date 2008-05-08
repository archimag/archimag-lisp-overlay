# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

DESCRIPTION="Larceny is a Scheme Interpreter and a Scheme to IA32 and C Compiler"
SRC_URI="!petit? ( http://www.ccs.neu.edu/home/will/Larceny/LarcenyReleases/larceny-${PV}-bin-native-ia32-linux86.tar.gz )
		 petit? ( http://www.ccs.neu.edu/home/will/Larceny/LarcenyReleases/larceny-${PV}-bin-petit-stdc-linux86.tar.gz )"

HOMEPAGE="http://www.ccs.neu.edu/home/will/Larceny/"

LICENSE="Larceny"
SLOT="0"
KEYWORDS="~x86 ~amd64"
IUSE="doc examples petit"

DEPEND="!dev-scheme/larceny"
RDEPEND="${DEPEND}"

if use petit; then
	S="${WORKDIR}/larceny-${PV}-bin-petit-stdc-linux86"
else
	S="${WORKDIR}/larceny-${PV}-bin-native-ia32-linux86"
fi

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

src_compile() {
	# petit needs the R6RS runtime to be built manually.
	if use petit; then
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
	dodoc README-FIRST.txt doc/HOWTO-* || die "Installing docs failed."

	LARCENY_LOCATION="/usr/share/larceny"
	dodir ${LARCENY_LOCATION}
	# use cp -a here to preserve the timestamps of the .fasl files in
	# this step of the installation.
	cp -af larceny \
		larceny-np \
		twobit \
		scheme-script \
		startup.sch \
		*.heap \
		*.bin \
		lib \
		"${D}"/${LARCENY_LOCATION} || \
		die "Installing larceny files failed"

	# sed the scripts with the correct location so they can be symlinked
	LARCENY_SCRIPTS="larceny larceny-np scheme-script twobit"
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
