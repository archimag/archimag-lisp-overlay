# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="3"
inherit eutils
SRC_URI="http://download.plt-scheme.org/bundles/${PV}/plt/plt-${PV}-src-unix.tgz
		 http://pre.plt-scheme.org/installers/plt-${PV}-src-unix.tgz"
DESCRIPTION="DrScheme programming environment. Includes mzscheme."
HOMEPAGE="http://www.plt-scheme.org"
LICENSE="LGPL-2.1"
SLOT="0"
#KEYWORDS="~amd64"
KEYWORDS="" # This is an experimental ebuild, if you keyword it, you are on your own"
IUSE="backtrace cairo cgc opengl profile X slatex"
RDEPEND="X? ( x11-libs/libX11
			x11-libs/libXaw
			x11-libs/libXft
			x11-libs/libXrender
			media-libs/jpeg
			media-libs/libpng
			opengl? ( virtual/opengl )
			cairo? ( x11-libs/cairo[X] ) )
		slatex? ( virtual/tex-base )"
DEPEND="${RDEPEND} !dev-tex/slatex"
S="${WORKDIR}/plt-${PV}/src/build"
ECONF_SOURCE="${S}/.."

src_unpack() {
	unpack ${A}
	mkdir -v "${S}" || die "failed to create build dir"
}

src_prepare() {
	#( cd .. && rm -Rv wxcommon && rm -Rv foreign ) \
	#|| die "failed to remove dir of bundled libraries"
	#rm -Rv ../wxcommon/{jpeg,libpng,zlib} ../../collects  \
	#|| die "failed to remove dir of bundled libraries"
	#rm -Rv ../wxcommon/{jpeg,libpng,zlib} ../wxxt \
	rm -Rv ../wxcommon/{jpeg,libpng,zlib} \
	|| die "failed to remove dir of bundled libraries"
	sed -i -e "s/docdir=\"\${datadir}\/plt\/doc\"/docdir=\"\${datadir}\/doc\/${PF}\"/" ../configure || die "sed failed"
	#sed -i -e 's/#! \/bin\/sh/#! \/bin\/sh -x/g' ../configure \
	#|| die "sed failed"
}

src_configure() {
	# cgcdefault off
	econf \
		$(use_enable X mred) \
		$(use_enable X xrender) \
		$(use_enable X xft) \
		$(use_enable opengl gl) \
		$(use_enable cairo) \
		$(use_enable profile gprof) \
		$(use_enable backtrace) \
		--enable-libpng \
		--enable-libjpeg \
		--enable-shared \
		--disable-places \
		--disable-futures \
		--disable-sgc \
		--disable-sgcdebug \
		--enable-account \
		--disable-compact \
		--disable-smalloskit \
		--disable-oskit \
		--disable-wbuild \
		--disable-perl \
		$(use_with X x) \
		|| die "Configure script failed"
}

src_compile() {
	time emake || die "emake default target(3m) failed"
	if use cgc; then
		time emake cgc || die "emake cgc target failed"
	fi
}

src_install() {
	# deal with slatex
	if use slatex; then
		insinto /usr/share/texmf/tex/latex/slatex/
		doins ../collects/slatex/slatex.sty
	fi
	time emake DESTDIR="${D}" install || die "emake install failed"
	if use cgc; then
		time emake DESTDIR="${D}" install-cgc || die "emake cgc target failed"
	fi
	if use X; then
		newicon ../collects/icons/PLT-206.png drscheme.png
		make_desktop_entry drscheme "DrScheme" drscheme "Development"
	fi
}
