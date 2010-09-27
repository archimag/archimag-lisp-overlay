# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="3"

inherit elisp-common multilib eutils flag-o-matic java-pkg-opt-2

MY_P=${PN}${PV/_p/-}
MY_P=${MY_P/_alpha*/-alpha}
MY_P=${MY_P/_beta*/-beta}

BGL_RELEASE=${PV/_*/}

DESCRIPTION="Bigloo is a Scheme implementation."
HOMEPAGE="http://www-sop.inria.fr/indes/fp/Bigloo/bigloo.html"
SRC_URI="ftp://ftp-sop.inria.fr/indes/fp/Bigloo/${MY_P}14Sep10.tar.gz
		 ftp://ftp-sop.inria.fr/members/Cyprien.Nicolas/mirror/${MY_P}14Sep10.tar.gz"

LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~x86"
IUSE="calendar crypto debug doc emacs gmp gstreamer java mail multimedia openpgp packrat system-sqlite srfi1 srfi27 ssl text threads web"

# bug 254916 for >=dev-libs/boehm-gc-7.1
DEPEND=">=dev-libs/boehm-gc-7.1[threads?]
	emacs? ( virtual/emacs )
	gmp? ( dev-libs/gmp )
	gstreamer? ( media-libs/gstreamer media-libs/gst-plugins-base )
	java? ( >=virtual/jdk-1.5 app-arch/zip )
	ssl? ( dev-libs/openssl )
	system-sqlite? ( dev-db/sqlite:3 )
"
RDEPEND="${DEPEND}"

S=${WORKDIR}/${MY_P/-[ab]*/}

SITEFILE="50bigloo-gentoo.el"

pkg_setup() {
	if use gstreamer; then
		if ! use threads; then
			die "USE Dependency: 'gstreamer' needs 'threads'. You may enable 'threads', or disable 'gstreamer'."
		fi

		if ! use multimedia; then
			die "USE Dependency: 'gstreamer' needs 'multimedia'."
		fi
	fi

	if use packrat && ! use srfi1; then
		die "USE Dependency: 'packrat' needs 'srfi1'."
	fi

	if use srfi27; then
		if ! use x86; then
			ewarn "srfi27 is known to only work on x86 architectures. It is highly suggested that you disable it." \
				" It is not supported by upstream, and tests *will* fail."
		fi

		if ! use gmp; then
			die "USE Dependency: 'srfi27' needs 'gmp'."
		fi
	fi

	if use openpgp && ! use crypto; then
		die "USE Dependency: 'openpgp' needs 'crypto'."
	fi
}

src_prepare() {
	# Force libbigloosqlite to be build if sqltiny is used
	epatch "${FILESDIR}/${PN}-${BGL_RELEASE}-sqltiny_support.patch"

	# bglmem is not built according to the EFLAGS
	#  (which forces LDFLAGS, see emake below)
	ebegin "Adding EFLAGS to BMEMFLAGS"
	sed -i 's/BMEMFLAGS[^=]\+= /&$(EFLAGS) /' bde/bmem/Makefile
	eend $?

	# Removing bundled boehm-gc
	rm -rf gc || die
}

src_configure() {
	filter-flags -fomit-frame-pointer

	local myconf=""

	# Filter Zile emacs replacement. Bug #336717
	if use emacs; then
		myconf="--bee=full --emacs=${EMACS} --lispdir=${SITELISP}/${PN}"
	else
		myconf="--emacs=false"
	fi

	if use java; then
		myconf="${myconf}
		--jvm=yes --java=$(java-config --java) --javac=$(java-config --javac)"
	fi

	# Sqlite backend
	if use system-sqlite; then
		myconf="${myconf}
		--enable-sqlite --sqlite-backend=sqlite"
	else
		myconf="${myconf}
		--enable-sqlite --sqlite-backend=sqltiny"
	fi

	# Need fix for bglpkg, which depends on pkglib, pkgcomp, sqlite and web.
	# This cannot be disabled for now, working on a fix.
	myconf="${myconf}
		--enable-pkgcomp
		--enable-pkglib
		--enable-web"

	# Put every non quoted configure opt into myconf, for the einfo below
	myconf="
		--prefix=/usr
		--libdir=/usr/$(get_libdir)
		--benchmark=yes
		--coflags=
		--customgc=no
		--sharedbde=no
		--sharedcompiler=no
		--strip=no
		$(use debug && echo --debug)
		${myconf}
		$(use_enable calendar)
		$(use_enable crypto)
		$(use_enable gmp)
		$(use_enable gstreamer)
		$(use_enable mail)
		$(use_enable multimedia)
		$(use_enable packrat)
		$(use_enable openpgp)
		$(use_enable srfi1)
		$(use_enable srfi27)
		$(use_enable ssl)
		$(use_enable text)
		$(use_enable threads)
"

	# Bigloo doesn't use autoconf and consequently a lot of options used by econf give errors
	# Manuel Serrano says: "Please, dont talk to me about autoconf. I simply dont want to hear about it..."
	einfo "Configuring bigloo with: ${myconf}"
	./configure \
		--ldflags="${LDFLAGS}" \
		${myconf} \
		|| die "configure failed"
}

src_compile() {
	emake EFLAGS='-ldopt "$(LDFLAGS)"' || die "emake failed"

	if use emacs; then
		einfo "Compiling bee..."
		emake compile-bee EFLAGS='-ldopt "$(LDFLAGS)"' || die "compiling bee failed"
	fi
}

# default thinks that target doesn't exist
src_test() {
	emake -j1 test || die "emake test failed"
}

src_install() {
	# Makefile:671:install: install-progs install-docs
	emake DESTDIR="${D}" install-progs || die "install failed"

	if use emacs; then
		einfo "Installing bee..."
		emake DESTDIR="${D}" install-bee || die "install-bee failed"
		elisp-site-file-install "${FILESDIR}/${SITEFILE}"
	else
		# Fix EMACS*=false in Makefile.config
		dosed 's:^\(EMACS=\).*$:\1:' /usr/$(get_libdir)/bigloo/${BGL_RELEASE}/Makefile.config \
			|| die "dosed EMACS failed"
		dosed 's:^\(EMACSBRAND=\).*$:\1:' /usr/$(get_libdir)/bigloo/${BGL_RELEASE}/Makefile.config \
			|| die "dosed EMACSBRAND failed"
	fi

	dodoc ChangeLog README || die "dodoc failed"
	newdoc LICENSE COPYING || die "newdoc failed"

	cd "${S}/manuals"
	if use doc; then
		dohtml -r  . || die "dohtml failed"
		doinfo *.info* || die "doinfo failed"
	fi

	for man in *.man; do
		newman ${man} ${man/.man/.1} || die "newman ${man} ${man/.man/.1} failed"
	done
}

pkg_postinst() {
	if use emacs; then
		elisp-site-regen
		elog "In order to use the bee-mode, add"
		elog "  (require 'bmacs)"
		elog "to your ~/.emacs file"
	fi
}

pkg_postrm() {
	use emacs && elisp-site-regen
}
