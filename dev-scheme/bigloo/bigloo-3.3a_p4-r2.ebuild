# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"

inherit elisp-common multilib eutils flag-o-matic

MY_P=${PN}${PV/_p/-}
MY_P=${MY_P/_alpha/-alpha}
MY_P=${MY_P/_beta/-beta}

DESCRIPTION="Bigloo is a Scheme implementation."
HOMEPAGE="http://www-sop.inria.fr/indes/fp/Bigloo/bigloo.html"
SRC_URI="ftp://ftp-sop.inria.fr/indes/fp/Bigloo/${MY_P}.tar.gz"

SLOT="0"
LICENSE="GPL-2"
KEYWORDS="~amd64 ~x86"

# bug 254916 for >=dev-libs/boehm-gc-7.1
DEPEND=">=dev-libs/boehm-gc-7.1
		emacs? ( virtual/emacs )
		java? ( virtual/jdk app-arch/zip )
		ssl? ( dev-libs/openssl )
		threads? ( dev-libs/boehm-gc[threads] )"

RDEPEND="${DEPEND}"

S=${WORKDIR}/${MY_P}

SITEFILE="50bigloo-gentoo.el"

IUSE="emacs java ssl threads"

src_prepare() {
	epatch "${FILESDIR}/${P}-no_strip.patch"
}

src_configure() {
	filter-flags -fomit-frame-pointer

	# Bigloo doesn't use autoconf and consequently a lot of options used by econf give errors
	# Manuel Serrano says: "Please, dont talk to me about autoconf. I simply dont want to hear about it..."
	./configure \
		$(use java && echo "--jvm=yes --java=$(java-config --java) --javac=$(java-config --javac)") \
		--prefix=/usr \
		--mandir=/usr/share/man \
		--infodir=/usr/share/info \
		--libdir=/usr/$(get_libdir) \
		--docdir=/usr/share/doc/${PF} \
		--lispdir=${SITELISP} \
		--benchmark=yes \
		--sharedbde=no \
		--sharedcompiler=no \
		--customgc=no \
		--coflags="" \
		--strip=no \
		--bee=$(if use emacs; then echo full; else echo partial; fi) \
		$(use_enable threads pthread) \
		$(use_enable threads fthread) \
		$(use_enable ssl) \
		|| die "configure failed"
}

src_compile() {
	emake || die "emake failed"

	if use emacs; then
		einfo "Compiling bee..."
		emake -j1 compile-bee || die "compiling bee failed"
	fi
}

# default thinks that target doesn't exist
src_test() {
	vecho ">>> Test phase [test]: ${CATEGORY}/${PF}"
	emake test || die
}

src_install() {
	emake DESTDIR="${D}" install || die "install failed"

	if use emacs; then
		emake DESTDIR="${D}" install-bee || die "install-bee failed"
		elisp-site-file-install "${FILESDIR}/${SITEFILE}"
	fi
}

pkg_postinst() {
	use emacs && elisp-site-regen
	if use emacs; then
		elog "In order to use the bee-mode, add"
		elog "  (require 'bmacs)"
		elog "to your ~/.emacs file"
	fi
}

pkg_postrm() {
	use emacs && elisp-site-regen
}
