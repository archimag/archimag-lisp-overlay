# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-common-3 eutils toolchain-funcs

DESCRIPTION="CMU Common Lisp is an implementation of ANSI Common Lisp"
HOMEPAGE="http://www.cons.org/cmucl/"
SRC_URI="http://common-lisp.net/project/cmucl/downloads/release/${PV}/cmucl-src-${PV}.tar.bz2
	http://common-lisp.net/project/cmucl/downloads/release/${PV}/cmucl-${PV}-x86-linux.tar.bz2"

LICENSE="public-domain"
SLOT="0"
KEYWORDS="~x86"
IUSE="source X"

DEPEND="x11-libs/openmotif
		sys-devel/bc"
PDEPEND="dev-lisp/gentoo-init"

PROVIDE="virtual/commonlisp"

S="${WORKDIR}"

src_unpack() {
	unpack ${A}
	epatch "${FILESDIR}"/${PV}-gentoo.patch
	epatch "${FILESDIR}"/${PV}-patch-001-fix-hash-table-load-form.patch
	find "${S}" -type f \( -name \*.sh -o -name linux-nm \) \
		-exec chmod +x '{}' \;
	sed -i -e "s,CC = .*,CC = $(tc-getCC),g" src/lisp/Config.linux_gencgc
	sed -i -e 's,"time","",g' src/tools/build.sh
	sed -i -e "s,@CFLAGS@,${CFLAGS},g" src/lisp/Config.linux_gencgc src/motif/server/Config.x86
}

src_compile() {
	use X || OPTS="-u"
	src/tools/build.sh -C "" -o "bin/lisp -core lib/cmucl/lib/lisp.core -batch -noinit -nositeinit" ${OPTS} || die
}

src_install() {
	src/tools/make-dist.sh -g -G root -O root build-4 ${PV} x86 linux
	dodir /usr/share/doc
	for i in cmucl-${PV}-x86-linux.{,extra.}tar.gz; do
		tar xzpf $i -C "${D}"/usr
	done
	mv "${D}"/usr/doc "${D}"/usr/share/doc/${PF}
	mv "${D}"/usr/man "${D}"/usr/share/

	# Install site config file
	sed "s,@PF@,${PF},g ; s,@VERSION@,$(date +%F),g" \
		< "${FILESDIR}"/site-init.lisp.in \
		> "${D}"/usr/$(get_libdir)/cmucl/site-init.lisp
	rm -f "${D}"/etc/lisp-config.lisp
	dodir /etc/common-lisp/cmucl
	dosym /etc/common-lisp/cmucl/site-init.lisp /etc/lisp-config.lisp
	cat > "${D}"/etc/common-lisp/cmucl/site-init.lisp <<EOF
(in-package :common-lisp-user)

(if (probe-file "/etc/gentoo-init.lisp")
	(load "/etc/gentoo-init.lisp")
  (format t "~%;;; Warning: There is no /etc/gentoo-init.lisp file (which should be provided by dev-lisp/gentoo-init"))
EOF

	# Install sources
	if use source; then
		local basedir=/usr/share/common-lisp/source/cmucl
		cd src
		for f in $(find . -name \*.lisp -and -type f); do
			local dir=${basedir}/$(dirname ${f})
			dodir ${dir} ; insinto ${dir}
			doins ${f}
		done
	fi

	impl-save-timestamp-hack cmucl || die
}

pkg_postinst() {
	standard-impl-postinst cmucl
}

pkg_postrm() {
	standard-impl-postrm cmucl /usr/bin/lisp
}
