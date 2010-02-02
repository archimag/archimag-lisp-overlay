# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-common-3 eutils glo-utils toolchain-funcs

MY_PV=${PV:0:3}

DESCRIPTION="CMU Common Lisp is an implementation of ANSI Common Lisp"
HOMEPAGE="http://www.cons.org/cmucl/"
SRC_URI="http://common-lisp.net/project/cmucl/downloads/release/${MY_PV}/cmucl-src-${MY_PV}.tar.bz2
	http://common-lisp.net/project/cmucl/downloads/release/${MY_PV}/cmucl-${MY_PV}-x86-linux.tar.bz2"
RESTRICT="mirror"

LICENSE="public-domain"
SLOT="0"
KEYWORDS="~x86"
IUSE="X source sse2"

RDEPEND="x11-libs/openmotif"
DEPEND="${RDEPEND}
		sys-devel/bc"
PDEPEND="dev-lisp/gentoo-init"

PROVIDE="virtual/commonlisp"

S="${WORKDIR}"

src_prepare() {
	epatch "${FILESDIR}"/fix-man-and-doc-installation.patch
	epatch "${FILESDIR}"/${MY_PV}-patch000.patch
}

src_compile() {
	local cmufpu=$(glo_usev sse2 sse2 x87)
	local cmuopts="$(glo_usev !X -u) -f ${cmufpu}"
	local buildimage="bin/lisp -core lib/cmucl/lib/lisp-${cmufpu}.core -batch -noinit -nositeinit"
	env CC="$(tc-getCC)" src/tools/build.sh -C "" -o "${buildimage}" ${cmuopts} || die "Cannot build the compiler"
}

src_install() {
	env MANDIR=share/man/man1 DOCDIR=share/doc/${PF} \
		src/tools/make-dist.sh -S -g -G root -O root build-4 ${MY_PV} x86 linux || die "Cannot build installation archive"
	dodir /usr
	tar xzpf cmucl-${MY_PV}-x86-linux.tar.gz -C "${D}"/usr || die "Cannot install main system"
	if use X ; then
		tar xzpf cmucl-${MY_PV}-x86-linux.extra.tar.gz -C "${D}"/usr || die "Cannot install extra files"
	fi
	if use source; then
		dodir /usr/share/common-lisp/source/${PN}
		tar --strip-components 1 -xzpf cmucl-src-${MY_PV}.tar.gz -C "${D}"/usr/share/common-lisp/source/${PN}
	fi

	# Install site config file
	sed "s,@PF@,${PF},g ; s,@VERSION@,$(date +%F),g" \
		< "${FILESDIR}"/site-init.lisp.in \
		> "${D}"/usr/$(get_libdir)/cmucl/site-init.lisp
	insinto /etc
	doins "${FILESDIR}"/cmuclrc

	impl-save-timestamp-hack cmucl || die
}

pkg_postinst() {
	standard-impl-postinst cmucl
}

pkg_postrm() {
	standard-impl-postrm cmucl /usr/bin/lisp
}
