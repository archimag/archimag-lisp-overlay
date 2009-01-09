# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eutils autotools

ECVS_SERVER="cvs.savannah.gnu.org:/sources/guile"
ECVS_MODULE="guile"
#ECVS_MODULE="guile/{guile-core,workbook}"

inherit cvs

S="${WORKDIR}/${PN}/guile-core"

DESCRIPTION="Scheme interpreter"
HOMEPAGE="http://www.gnu.org/software/guile/"

LICENSE="GPL-2"
KEYWORDS=""

DEPEND=">=dev-libs/gmp-4.1 >=sys-devel/libtool-1.5.6 sys-devel/gettext dev-libs/gnulib"

# Guile seems to contain some slotting support, /usr/share/guile/ is slotted,
# but there are lots of collisions. Most in /usr/share/libguile. Therefore
# I'm slotting this in the same slot as guile-1.6* for now.
SLOT="12"
MAJOR="1.8"

IUSE="networking regex discouraged deprecated elisp nls debug-freelist debug-malloc debug threads"

_src_unpack() {
	cvs_src_unpack
	sed 's#gnulib-tool --update#strace -f -e open,stat,stat64 gnulib-tool --update#' -i ${S}/autogen.sh
}

src_compile() {
#	mv configure.in configure.ac
	echo "pwd: "; pwd
	echo "ls: "; ls
#	rm configure.in
#	test -f configure.in && echo "yes" || echo "no"
#	exit
	sh ./autogen.sh

#will fail for me if posix is disabled or without modules -- hkBst
	ls
	econf \
		--enable-maintainer-mode \
		--disable-error-on-warning \
		--disable-static \
		--enable-posix \
		$(use_enable networking) \
		$(use_enable regex) \
		$(use deprecated || use_enable discouraged) \
		$(use_enable deprecated) \
		$(use_enable elisp) \
		$(use_enable nls) \
		--disable-rpath \
		$(use_enable debug-freelist) \
		$(use_enable debug-malloc) \
		$(use_enable debug guile-debug) \
		$(use_with threads) \
		--with-modules

	emake || die "make failed"
}

src_install() {
	einstall || die "install failed"

	dodoc AUTHORS ChangeLog GUILE-VERSION HACKING NEWS README SNAPSHOTS THANKS

	# texmacs needs this, closing bug #23493
	dodir /etc/env.d
	echo "GUILE_LOAD_PATH=\"/usr/share/guile/${MAJOR}\"" > ${D}/etc/env.d/50guile
}
