# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit versionator eutils

#version magic thanks to masterdriverz and UberLord using bash array instead of tr
trarr="0abcdefghi"
MY_PV="$(get_version_component_range 1)${trarr:$(get_version_component_range 2):1}$(get_version_component_range 3)"

MY_P=${PN}-${MY_PV}
S=${WORKDIR}/${PN}
DESCRIPTION="SCM is a Scheme implementation conforming to Revised5 Report on the Algorithmic Language Scheme and the IEEE P1178 specification."
SRC_URI="http://groups.csail.mit.edu/mac/ftpdir/scm/${MY_P}.zip"
HOMEPAGE="http://swiss.csail.mit.edu/~jaffer/SCM"

SLOT="0"
LICENSE="LGPL-3"
KEYWORDS="" #~x86 ~amd64"
IUSE="arrays bignums cautious dynamic-linking engineering-notation gsubr inexact
ioext macro ncurses posix readline regex sockets unix"

#unzip for unpacking
DEPEND="\
	app-arch/unzip
	>=dev-scheme/slib-3.1.5
	ncurses? ( sys-libs/ncurses )
	readline? ( sys-libs/libtermcap-compat )"
RDEPEND="${DEPEND}"

src_unpack() {
	unpack ${A}
	cd "${S}"

	epatch "${FILESDIR}"/${P}-gentoo.patch
}

src_compile() {
	# SLIB is required to build SCM.
	local slibpath="/usr/share/slib/"
	if [ -n "$SCHEME_LIBRARY_PATH" ]; then
		einfo using SLIB $SCHEME_LIBRARY_PATH
	elif [ -d ${slibpath} ]; then
		export SCHEME_LIBRARY_PATH=${slibpath}
	fi

	einfo "Making scmlit"
	emake -j1 scmlit clean || die "faild to build scmlit"

	einfo "Building scm"
	local features=""
	use arrays && features="${features} arrays"
	use bignums && features="${features} bignums"
	use cautious && features="${features} cautious"
	use engineering-notation && features="${features} engineering-notation"
	use inexact && features="${features} inexact"
	use macro && features="${features} macro"

	( use readline ||
	  use ncurses ||
	  use regex ||
	  use posix ||
	  use ioext ||
	  use gsubr ||
	  use sockets ||
	  use unix ||
	  use dynamic-linking ) && features="${features} dynamic-linking"

	./build \
		--compiler-options="${CFLAGS}" \
		--linker-options="${LDFLAGS}" \
		-s /usr/lib/scm \
		-F ${features:="none"} \
		-h system \
		-o scm || die

	einfo "Building DLLs"
	if use readline; then
		./build \
			--compiler-options="${CFLAGS}" \
			--linker-options="${LDFLAGS}" \
			-F edit-line \
			-h system \
			-t dll || die
	fi
	if use ncurses ; then
		./build \
			--compiler-options="${CFLAGS}" \
			--linker-options="${LDFLAGS}" \
			-F curses \
			-h system \
			-t dll || die
	fi
	if use regex ; then
		./build \
			--compiler-options="${CFLAGS}" \
			--linker-options="${LDFLAGS}" \
			-c rgx.c \
			-h system \
			-t dll || die
	fi
	if use gsubr ; then
		./build \
			--compiler-options="${CFLAGS}" \
			--linker-options="${LDFLAGS}" \
			-c gsubr.c \
			-h system \
			-t dll || die
	fi
	if use ioext ; then
		./build \
			--compiler-options="${CFLAGS}" \
			--linker-options="${LDFLAGS}" \
			-c ioext.c \
			-h system \
			-t dll || die
	fi
	if use posix; then
		./build \
			--compiler-options="${CFLAGS}" \
			--linker-options="${LDFLAGS}" \
			-c posix.c \
			-h system \
			-t dll || die
	fi
	if use sockets ; then
		./build \
			--compiler-options="${CFLAGS}" \
			--linker-options="${LDFLAGS}" \
			-c socket.c \
			-h system \
			-t dll || die
	fi
	if use unix ; then
		./build \
			--compiler-options="${CFLAGS}" \
			--linker-options="${LDFLAGS}" \
			-c unix.c \
			-h system \
			-t dll || die
	fi
}

src_test() {
	emake check
}

src_install() {
	emake DESTDIR="${D}" install || die "Install failed"

	doinfo scm.info
	doinfo hobbit.info
}

pkg_postinst() {
	[ "${ROOT}" == "/" ] && pkg_config
}

pkg_config() {
	einfo "Regenerating catalog..."
	scm -e "(require 'new-catalog)"
}
