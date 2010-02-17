# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=3
inherit eutils multilib git

DESCRIPTION="ECL is an embeddable Common Lisp implementation."
HOMEPAGE="http://common-lisp.net/project/ecl/"
EGIT_REPO_URI="git://ecls.git.sourceforge.net/gitroot/ecls/ecl"

LICENSE="BSD LGPL-2"
SLOT="0"
KEYWORDS=""
IUSE="debug doc precisegc +threads +unicode X"

RDEPEND="dev-libs/gmp
		dev-libs/libffi
		>=dev-libs/boehm-gc-7.1[threads?]"
		# cxx? ( dev-libs/boehm-gc[-nocxx] )"
DEPEND="${RDEPEND}
		app-text/texi2html"
PDEPEND="dev-lisp/gentoo-init"

PROVIDE="virtual/commonlisp"

src_prepare() {
	epatch "${FILESDIR}"/${PV}/headers-gentoo.patch

	# change LISP-IMPLEMENTATION-VERSION because upstream version for
	# live builds contains spaces which ASDF-BINARY-LOCATIONS doesn't like
	cat "${FILESDIR}"/${PV}/config.lsp.in | \
		sed "s:@GENTOODATE@:$(date +%F):" > src/lsp/config.lsp.in
}

src_configure() {
	# $(use_with cxx)
	econf \
		--with-system-gmp \
		--enable-boehm=system \
		--enable-longdouble \
		--enable-gengc \
		$(use_enable precisegc) \
		$(use_with debug debug-cflags) \
		$(use_enable threads) \
		$(use_with threads __thread) \
		$(use_enable unicode) \
		$(use_with X x) \
		$(use_with X clx)
}

src_compile() {
	#parallel fails
	emake -j1 || die "Compilation failed"
	if use doc; then
		pushd build/doc
		emake || die "Building docs failed"
		popd
	fi
}

src_install () {
	emake DESTDIR="${D}" install || die "Installation failed"

	dodoc ANNOUNCEMENT Copyright
	dodoc "${FILESDIR}"/README.Gentoo
	pushd build/doc
	newman ecl.man ecl.1
	newman ecl-config.man ecl-config.1
	if use doc; then
		doinfo ecl{,dev}.info || die "Installing info docs failed"
	fi
	popd
}
