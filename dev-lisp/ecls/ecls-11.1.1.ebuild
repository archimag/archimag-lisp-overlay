# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=3
inherit eutils multilib

MY_P=ecl-${PV}

DESCRIPTION="ECL is an embeddable Common Lisp implementation."
HOMEPAGE="http://common-lisp.net/project/ecl/"
SRC_URI="mirror://sourceforge/ecls/${MY_P}.tar.gz"
RESTRICT="mirror"

LICENSE="BSD LGPL-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="+asdf debug doc gengc precisegc sse +threads +unicode X"

CDEPEND="dev-libs/gmp
		dev-libs/libffi
		>=dev-libs/boehm-gc-7.1[threads?]"

DEPEND="${CDEPEND}
		app-text/texi2html"

RDEPEND="${CDEPEND}
		asdf? ( >=dev-lisp/gentoo-init-1.0 )"

S="${WORKDIR}"/${MY_P}

src_prepare() {
	epatch "${FILESDIR}"/${PV/_rc1/}/headers-gentoo.patch
}

src_configure() {
	econf \
		--with-system-gmp \
		--enable-boehm=system \
		--enable-longdouble \
		--with-dffi \
		$(use_enable gengc) \
		$(use_enable precisegc) \
		$(use_with debug debug-cflags) \
		$(use_with sse) \
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

pkg_postinst () {
	if use gengc || use precisegc ; then
		ewarn "You have enabled the generational garbage collector or"
		ewarn "the precise collection routines. These features are not very stable"
		ewarn "at the moment and may cause crashes."
		ewarn "Don't enable them unless you know what you're doing."
	fi
}
