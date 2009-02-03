# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit multilib

DESCRIPTION="GNU/MIT-Scheme"
HOMEPAGE="http://www.swiss.ai.mit.edu/projects/scheme/"
SRC_URI="http://ftp.gnu.org/gnu/mit-scheme/snapshot.pkg/${PV}/${P}.tar.gz"
LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~amd64 ~x86"
IUSE="doc"
#S="${WORKDIR}/${P}/src"

# RDEPEND="x11-libs/libXau
# 		 x11-libs/libSM
# 		 x11-libs/libXdmcp
# 		 x11-libs/libX11
# 		 x11-libs/libICE"

RDEPEND="
app-crypt/mhash
dev-db/libpq
dev-libs/libmcrypt
dev-libs/openssl
sys-libs/gdbm
sys-libs/ncurses
x11-libs/libX11
"

DEPEND="${RDEPEND} \
	!dev-scheme/mit-scheme
	doc? ( dev-texlive/texlive-texinfo )"

src_unpack() {
	unpack ${A}; cd "${S}"/src
	sed "s:CFLAGS=\"\${CFLAGS} -O3\":CFLAGS=\"${CFLAGS}\":" -i {lib/include,microcode}/configure{,.ac}
}

src_compile() {
	cd "${S}"/src
	./etc/make-liarc.sh --prefix=/usr --exec-prefix=/usr --libdir=/usr/$(get_libdir) || die "making liar C failed"

	if use doc ; then
		cd "${S}"/doc
		econf || die "failed doc econf"
		emake -j1 || die "emake doc failed"
	fi
}

src_install() {
	cd "${S}"/src
	emake DESTDIR="${D}" install || die "make install failed"

	cd "${S}"/doc
	doman scheme.1 || die "doman failed"
	if use doc ; then
		dohtml index.html
		doinfo ref-manual/mit-scheme-ref.info*
		dodoc ref-manual/mit-scheme-ref.{pdf,ps}
		doinfo user-manual/mit-scheme-user.info
		dodoc user-manual/mit-scheme-user.{pdf,ps}
		doinfo sos/mit-scheme-sos.info
		dodoc sos/mit-scheme-sos.{pdf,ps}
		doinfo imail/mit-scheme-imail.info
		dodoc imail/mit-scheme-imail.{pdf,ps}

		cd ref-manual
		docinto html/mit-scheme-ref
		dohtml mit-scheme-ref/*

		cd ../user-manual
		docinto html/mit-scheme-user
		dohtml mit-scheme-user/*

		cd ../sos
		docinto html/mit-scheme-sos
		dohtml mit-scheme-sos/*

		cd ../imail
		docinto html/mit-scheme-imail
		dohtml mit-scheme-imail/*
		cd ../
	fi
}
