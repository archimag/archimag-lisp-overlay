# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

ECVS_SERVER=common-lisp.net:/project/${PN}/cvsroot
ECVS_PASS=anonymous
ECVS_MODULE=src
ECVS_LOCALNAME=${PN}

inherit common-lisp-common-3 cvs eutils glo-utils toolchain-funcs

PATCHSET=200812
YEAR=${PATCHSET:0:4}
MONTH=${PATCHSET:4:5}

DESCRIPTION="CMU Common Lisp is an implementation of ANSI Common Lisp"
HOMEPAGE="http://www.cons.org/cmucl/"
SRC_URI="http://common-lisp.net/project/${PN}/downloads/snapshots/${YEAR}/${MONTH}/${PN}-${YEAR}-${MONTH}-x86-linux.tar.bz2"

LICENSE="public-domain"
SLOT="0"
KEYWORDS="~x86"
IUSE="X source sse2"

DEPEND="x11-libs/openmotif
		sys-devel/bc"
PDEPEND="dev-lisp/gentoo-init"

PROVIDE="virtual/commonlisp"

S="${WORKDIR}"

src_unpack() {
	unpack ${A} ; cvs_src_unpack ; cd "${S}"
	mv cmucl src || die
	epatch "${FILESDIR}"/fix-man-and-doc-installation.patch
}

src_compile() {
	local CMUFPU=$(glo_usev sse2 sse2 x87)
	local CMUOPTS="$(glo_usev !X -u) -f ${CMUFPU}"
	local BUILDIMAGE="bin/lisp -core lib/cmucl/lib/lisp-${CMUFPU}.core -batch -noinit -nositeinit"
	env CC="$(tc-getCC)" src/tools/build.sh -C "" -o "${BUILDIMAGE}" ${CMUOPTS} || die "Cannot build the compiler"
}

src_install() {
	env MANDIR=share/man/man1 DOCDIR=share/doc/${PF} \
		src/tools/make-dist.sh -S -g -G root -O root build-4 ${PV} x86 linux || die "Cannot build installation archive"
	dodir /usr
	tar xzpf cmucl-${PV}-x86-linux.tar.gz -C "${D}"/usr || die "Cannot install main system"
	if use X ; then
		tar xzpf cmucl-${PV}-x86-linux.extra.tar.gz -C "${D}"/usr || die "Cannot install extra files"
	fi
	if use source; then
		dodir /usr/share/common-lisp/source/${PN}
		tar --strip-components 1 -xzpf cmucl-src-${PV}.tar.gz -C "${D}"/usr/share/common-lisp/source/${PN}
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
