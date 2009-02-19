# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2

inherit eutils multilib

MY_P=ecl-${PV}

DESCRIPTION="ECL is an embeddable Common Lisp implementation."
HOMEPAGE="http://common-lisp.net/project/ecl/"
SRC_URI="mirror://sourceforge/${PN}/${MY_P}.tar.gz"

LICENSE="BSD LGPL-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="X cxx debug +threads +unicode"

REPEND="dev-libs/gmp
		>=dev-libs/boehm-gc-6.8
		cxx? ( dev-libs/boehm-gc[-nocxx] )"
DEPEND="${RDEPEND}
		app-text/texi2html"
PDEPEND="dev-lisp/gentoo-init"

PROVIDE="virtual/commonlisp"

S="${WORKDIR}"/${MY_P}

src_unpack() {
	unpack ${A} && cd "${S}"

	# change LISP-IMPLEMENTATION-VERSION because upstream version for
	# live builds contains spaces which ASDF-BINARY-LOCATIONS doesn't like
	cp "${FILESDIR}"/${PV}/config.lsp.in "${S}"/src/lsp
	sed -i "s:@GENTOODATE@:$(date +%F):" "${S}"/src/lsp/config.lsp.in

	epatch "${FILESDIR}"/${PV}/headers-gentoo.patch
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
