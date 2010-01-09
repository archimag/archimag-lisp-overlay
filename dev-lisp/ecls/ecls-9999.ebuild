# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit eutils multilib git

DESCRIPTION="ECL is an embeddable Common Lisp implementation."
HOMEPAGE="http://common-lisp.net/project/ecl/"
EGIT_REPO_URI="git://ecls.git.sourceforge.net/gitroot/ecls/ecl"

LICENSE="BSD LGPL-2"
SLOT="0"
KEYWORDS=""
IUSE="X cxx debug +threads +unicode"

RDEPEND="dev-libs/gmp
		>=dev-libs/boehm-gc-7.1[threads?]
		cxx? ( dev-libs/boehm-gc[-nocxx] )"
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
	econf \
		--with-system-gmp \
		--enable-gengc \
		--enable-boehm=system \
		--enable-longdouble \
		$(use_with cxx) \
		$(use_enable debug) \
		$(use_enable threads) \
		$(use_with threads __thread) \
		$(use_enable unicode) \
		$(use_with X x) \
		$(use_with X clx) \
		|| die "econf failed"
}

src_compile() {
	#parallel fails
	emake -j1 || die "make failed"
}

src_install () {
	emake DESTDIR="${D}" install || die "Could not build ECL"

	dohtml doc/*.html
	dodoc ANNOUNCEMENT Copyright
	dodoc "${FILESDIR}"/README.Gentoo
}
