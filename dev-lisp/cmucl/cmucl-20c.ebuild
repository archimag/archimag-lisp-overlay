# Copyright 1999-2012 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=3
inherit eutils glo-utils toolchain-funcs

MY_PV=${PV:0:3}

DESCRIPTION="CMU Common Lisp is an implementation of ANSI Common Lisp"
HOMEPAGE="http://www.cons.org/cmucl/"
SRC_URI="http://common-lisp.net/project/cmucl/downloads/release/${MY_PV}/cmucl-src-${MY_PV}.tar.bz2
	http://common-lisp.net/project/cmucl/downloads/release/${MY_PV}/cmucl-${MY_PV}-x86-linux.tar.bz2"
RESTRICT="mirror"

LICENSE="public-domain"
SLOT="0"
KEYWORDS="~x86"
IUSE="+asdf X source sse2"

DEPEND="x11-libs/openmotif
		sys-devel/bc"

RDEPEND="x11-libs/openmotif
		asdf? ( >=dev-lisp/gentoo-init-1.0 )"

S="${WORKDIR}"

src_prepare() {
	epatch "${FILESDIR}"/${MY_PV}-execstack-fixes.patch
	epatch "${FILESDIR}"/${MY_PV}-customize-lisp-implementation-version.patch
}

src_compile() {
	local cmufpu=$(glo_usev sse2 sse2 x87)
	local cmuopts="$(glo_usev !X -u) -f ${cmufpu}"
	local buildimage="bin/lisp -core lib/cmucl/lib/lisp-${cmufpu}.core -noinit -nositeinit -batch"
	env CC="$(tc-getCC)" src/tools/build.sh -v "-gentoo-${PR}" -C "" -o "${buildimage}" ${cmuopts} || die "Cannot build the compiler"
}

src_install() {
	env MANDIR=share/man/man1 DOCDIR=share/doc/${PF} \
		src/tools/make-dist.sh -S -g -G root -O root build-4 ${MY_PV} x86 linux \
		|| die "Cannot build installation archive"
	# Necessary otherwise tar will fail
	dodir /usr
	pushd "${D}"/usr
	tar xzpf "${WORKDIR}"/cmucl-${MY_PV}-x86-linux.tar.gz \
		|| die "Cannot install main system"
	if use X ; then
		tar xzpf "${WORKDIR}"/cmucl-${MY_PV}-x86-linux.extra.tar.gz \
			|| die "Cannot install extra files"
	fi
	if use source; then
		# Necessary otherwise tar will fail
		dodir /usr/share/common-lisp/source/${PN}
		cd "${D}"/usr/share/common-lisp/source/${PN}
		tar --strip-components 1 -xzpf "${WORKDIR}"/cmucl-src-${MY_PV}.tar.gz \
			|| die "Cannot install sources"
	fi
	popd

	# Install site config file
	sed "s,@PF@,${PF},g ; s,@VERSION@,$(date +%F),g" \
		< "${FILESDIR}"/site-init.lisp.in \
		> "${D}"/usr/$(get_libdir)/cmucl/site-init.lisp \
		|| die "Cannot fix site-init.lisp"
	cp "${FILESDIR}"/cmuclrc .
	if use asdf; then
		cat >> cmuclrc <<EOF
;;; Setup ASDF2
(load "/etc/common-lisp/gentoo-init.lisp")
EOF
	fi
	insinto /etc/common-lisp
	doins cmuclrc || die "Failed to install cmuclrc"
}
