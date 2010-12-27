# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="3"
#inherit eutils autotools flag-o-matic elisp-common
inherit eutils flag-o-matic elisp-common

DESCRIPTION="Scheme interpreter"
HOMEPAGE="http://www.gnu.org/software/guile/"
SRC_URI=" ftp://alpha.gnu.org/gnu/guile/${P}.tar.gz"
#SRC_URI="mirror://gnu/guile/${P}.tar.gz"

LICENSE="LGPL-3"
KEYWORDS=""
#IUSE="networking +regex +deprecated emacs nls debug-malloc debug +threads readline"
IUSE="networking +regex +deprecated nls debug-malloc debug +threads readline"
RESTRICT="!regex? ( test )"

DEPEND="
	>=dev-libs/gmp-4.1
	>=dev-libs/boehm-gc-7.0
	>=sys-devel/libtool-1.5.6
	dev-libs/libunistring
	virtual/libffi
	nls? ( sys-devel/gettext )"
	#emacs? ( virtual/emacs )"
RDEPEND="${DEPEND}"

# Guile seems to contain some slotting support, /usr/share/guile/ is slotted,
# but there are lots of collisions. Most in /usr/share/libguile. Therefore
# I'm slotting this in the same slot as guile-1.6* for now.
SLOT="12"
#MAJOR="1.8"
MAJOR="2.0"

src_configure() {
	# see bug #178499
	filter-flags -ftree-vectorize

	#will fail for me if posix is disabled or without modules -- hkBst
	econf \
		--disable-error-on-warning \
		--disable-static \
		--enable-posix \
		--disable-rpath \
		--with-modules \
		$(use_enable networking) \
		$(use_enable regex) \
		$(use_enable deprecated) \
		$(use_enable nls) \
		$(use_enable debug-malloc) \
		$(use_enable debug guile-debug) \
		$(use_with threads) \
		$(use !readline && echo "--without-libreadline-prefix")
		#EMACS=no
		#readline posix  static
}

src_compile()  {
	emake || die "make failed"

	# Above we have disabled the build system's Emacs support;
	# for USE=emacs we compile (and install) the files manually
#	if use emacs; then
#		cd emacs
#		elisp-compile *.el || die
#	fi
}

src_install() {
	einstall || die "install failed"

	dodoc AUTHORS ChangeLog GUILE-VERSION HACKING NEWS README THANKS || die

	# texmacs needs this, closing bug #23493
	dodir /etc/env.d
	echo "GUILE_LOAD_PATH=\"${EPREFIX}/usr/share/guile/${MAJOR}\"" > "${ED}"/etc/env.d/50guile

	# necessary for registering slib, see bug 206896
	keepdir /usr/share/guile/site

#	if use emacs; then
#		elisp-install ${PN} emacs/*.{el,elc} || die
#		elisp-site-file-install "${FILESDIR}/50${PN}-gentoo.el" || die
#	fi
}

pkg_postinst() {
	[ "${EROOT}" == "/" ] && pkg_config
	#use emacs && elisp-site-regen
}

#pkg_postrm() {
#	use emacs && elisp-site-regen
#}

pkg_config() {
	if has_version dev-scheme/slib; then
		einfo "Registering slib with guile"
		install_slib_for_guile
	fi
}

_pkg_prerm() {
	rm -f "${EROOT}"/usr/share/guile/site/slibcat
}
