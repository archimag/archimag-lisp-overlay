# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="4"

inherit eutils

DESCRIPTION="Programming environment based on Scheme."
SRC_URI="http://download.racket-lang.org/installers/${PV}/${PN}/${P}-src-unix.tgz"
HOMEPAGE="http://www.racket-lang.org"

LICENSE="LGPL-2.1"
SLOT="0"
KEYWORDS="~x86 ~amd64"
IUSE="-backtrace cairo cgc doc opengl profile X slatex sgc -futures -places +foreign static -plain"
# jit
REQUIRED_USE="cgc? ( !sgc )"

RDEPEND="X? ( x11-libs/libX11
			x11-libs/libXaw
			x11-libs/libXft
			x11-libs/libXrender
			media-libs/jpeg
			media-libs/libpng
			opengl? ( virtual/opengl )
			cairo? ( x11-libs/cairo[X] ) )
		slatex? ( virtual/latex-base )
		!dev-scheme/plt-scheme"
DEPEND="${RDEPEND}"

S="${WORKDIR}/${P}/src"
MY_PNUM="01"

pkg_setup() {
	for my_flag in backtrace futures places
	do
		if use "${my_flag}" ; then
			ewarn "${my_flag} USE flag is known that may make ${P} compilation"
			ewarn "to fail. Please remove it, if the ebuild fails for you. "
		fi
	done
	if use cairo || use opengl ; then
		if ! use X ; then
			ewarn "cairo and opengl USE flags support features that are disabled"
			ewarn "by ${P} build system when you haven't enabled the X USE flag."
		fi
	fi
}

src_prepare() {
	sed -i -e "s/docdir=\"\${datadir}\/racket\/doc\"/docdir=\"\${datadir}\/doc\/${PF}\"/" configure || die "sed failed"
	# Fix LDFLAGS issue for the starter binary
	sed -i -e 's:CFLAGS) -o ../starter:CFLAGS) @LDFLAGS@ -o ../starter:' racket/dynsrc/Makefile.in || die 'sed starter LDFLAGS failed'
	# Patch for allowing plain-install, and some other fixes I don't know the origin
	epatch "${FILESDIR}/${P}-hack_makefile_in_temp${MY_PNUM}.patch"
}

src_configure() {
	econf \
		$(use_enable !static shared) \
		$(use_enable doc docs) \
		$(use_enable X gracket) \
		$(use_enable X xrender) \
		$(use_enable X xft) \
		$(use_enable opengl gl) \
		$(use_enable cairo) \
		$(use_enable profile gprof) \
		$(use_enable backtrace) \
		$(use_enable sgc) \
		$(use_enable futures) \
		$(use_enable places) \
		$(use_enable foreign) \
		--enable-jit \
		--enable-libpng \
		--enable-libjpeg \
		--enable-pthread \
		--enable-account \
		--disable-sgcdebug \
		--disable-compact \
		--disable-smalloskit \
		--disable-oskit \
		--disable-wbuild \
		--disable-perl \
		$(use_with X x)
}

src_compile() {
	emake || die "emake default target(3m) failed"
	if use cgc || use sgc ; then
		time emake cgc || die "emake cgc-install target failed"
	fi
}

src_install() {
	local pla1n=""
	if use plain; then
		pla1n="plain-"
	fi

	# From boost-1.42.0-r2.ebuild
	local jobs=$( echo " ${MAKEOPTS} " | \
		sed -e 's/ --jobs[= ]/ -j /g' \
			-e 's/ -j \([1-9][0-9]*\)/ -j\1/g' \
			-e 's/ -j\>/ -j1/g' | \
		( while read -d ' ' j ; do if [[ "${j#-j}" = "$j" ]]; then continue; fi; jobs="${j#-j}"; done; echo ${jobs} ) )
	if [[ "${jobs}" != "" ]]; then NUMJOBS="-j "${jobs}; fi;

	time emake DESTDIR="${D}" PLT_SETUP_OPTIONS="${NUMJOBS}" \
		"${pla1n}"install || die "emake install failed"
	if use cgc || use sgc ; then
		time emake DESTDIR="${D}" PLT_SETUP_OPTIONS="${NUMJOBS}" \
			"${pla1n}"install-cgc || die "emake cgc target failed"
	fi
	if use X; then
		newicon ../collects/icons/PLT-206.png drracket.png
		make_desktop_entry drracket "DrRacket" drracket "Development"
	fi
	# deal with slatex
	if use slatex; then
		if ! use plain; then
			pushd "${D}"/usr/bin
			{ rename slatex plt-slatex slatex* && rename pdf-slatex plt-pdf-slatex pdf-slatex* ; } || die "Failed to rename slatex* to plt-slatex*"
			popd
		fi
		insinto /usr/share/texmf/tex/latex/slatex/
		newins ../collects/slatex/slatex.sty plt-slatex.sty
	else
		if ! use plain; then
			rm -Rfv "${D}"/usr/bin/*slatex* || die "Failed to delete slatex files"
		fi
	fi
}
