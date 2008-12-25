# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: /var/cvsroot/gentoo-x86/dev-scheme/gambit/gambit-4.1.2.ebuild,v 1.1 2007/12/17 21:32:54 hkbst Exp $

inherit eutils elisp-common check-reqs autotools multilib

MY_PN=gambc
MY_PV=${PV//./_}
MY_P=${MY_PN}-v${MY_PV}

DESCRIPTION="Gambit-C is a native Scheme to C compiler and interpreter."
HOMEPAGE="http://www.iro.umontreal.ca/~gambit/"
SRC_URI="http://www.iro.umontreal.ca/~gambit/download/gambit/v${PV%.*}/source/${MY_P}.tgz"

LICENSE="|| ( Apache-2.0 LGPL-2.1 )"
SLOT="0"
#KEYWORDS="~amd64 ~ppc64 ~x86"
KEYWORDS="~x86"

SITEFILE="50gambit-gentoo.el"

S=${WORKDIR}/${MY_P}

IUSE=""


src_unpack() {
	unpack ${A}
	cd "${S}"
	eautoreconf
}

src_compile() {
			#-enable-gcc-opts 
			#--enable-single-host
	econf \
			--enable-shared \
			--disable-absolute-shared-libs \
			--disable-single-host \
			|| die "econf failed"

	emake || die "emake failed"
}

src_install() {
	emake DESTDIR="${D}" docdir="/usr/share/doc/${P}" install || die
	#emake install || die
	dodoc INSTALL.txt README
	insinto /usr/share/doc/${PF}
	doins -r examples

	mv "${D}/usr/bin/gsc" "${D}/usr/bin/gsc-gambit"
	# create some more explicit names
	dosym gsc-gambit /usr/bin/gambit-compiler
	dosym gsc-gambit /usr/bin/gsc-script 
	dosym gsi /usr/bin/gambit-interpreter

	rm -Rv "${D}/usr/share/emacs"

	#echo "GAMBCOPT=\"=/usr/\"" > "${T}"/50gambit && doenvd "${T}"/50gambit
}
