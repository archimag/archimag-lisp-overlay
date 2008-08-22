# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

ECVS_SERVER="common-lisp.net:/project/ecl/cvsroot"
ECVS_PASS="anonymous"
ECVS_MODULE="ecl"

inherit eutils multilib cvs

DESCRIPTION="ECL is an embeddable Common Lisp implementation."
HOMEPAGE="http://common-lisp.net/project/ecl/"
SLOT="0"
LICENSE="BSD LGPL-2"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"

DEPEND="=dev-libs/gmp-4*
		app-text/texi2html
		>=dev-libs/boehm-gc-6.8"

IUSE="X cxx debug threads unicode"

PROVIDE="virtual/commonlisp"

S="${WORKDIR}"/ecl

pkg_setup() {
	if use cxx && built_with_use dev-libs/boehm-gc nocxx ; then
		eerror "If you want C++ support in ECLS, you need to compile dev-libs/boehm-gc"
		eerror "with C++ support and deactivate the \"nocxx\" USE flag for it"
		die
	fi
}

src_unpack() {
	cvs_src_unpack

	# change LISP-IMPLEMENTATION-VERSION because upstream version for
	# live builds contains spaces which ASDF-BINARY-LOCATIONS doesn't like
	cp "${FILESDIR}"/${PV}/config.lsp.in "${S}"/src/lsp
	sed -i "s:@GENTOODATE@:$(date +%F):" "${S}"/src/lsp/config.lsp.in

	epatch "${FILESDIR}"/${PV}/headers-gentoo.patch
}

src_compile() {
	econf \
		--with-system-gmp \
		--enable-boehm=system \
		--enable-gengc \
		--enable-longdouble \
		$(use_with cxx) \
		$(use_enable debug) \
		$(use_enable threads) \
		$(use_with threads __thread) \
		$(use_enable unicode) \
		$(use_with X x) \
		$(use_with X clx) \
		|| die "econf failed"
	#parallel fails
	emake -j1 || die "make failed"
}

src_install () {
	emake DESTDIR="${D}" install || die "Could not build ECL"

	dohtml doc/*.html
	dodoc ANNOUNCEMENT Copyright
	dodoc "${FILESDIR}"/README.Gentoo
}
