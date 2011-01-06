# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="3"

inherit elisp-common flag-o-matic multilib autotools

MY_PN=gambc
MY_PV=${PV//./_}
MY_P=${MY_PN}-v${MY_PV}

DESCRIPTION="Gambit-C is a native Scheme to C compiler and interpreter."
HOMEPAGE="http://www.iro.umontreal.ca/~gambit/"
SRC_URI="http://www.iro.umontreal.ca/~gambit/download/gambit/v${PV%.*}/source/${MY_P}.tgz"

LICENSE="|| ( Apache-2.0 LGPL-2.1 )"
SLOT="0"
KEYWORDS=""

#gsc is now Gambit Scheme Compiler and not ghostscript.
#only app-text/ghostscript-gpl-8.64 has freed gsc yet.
DEPEND="emacs? ( virtual/emacs )
		!app-text/ghostscript-gnu
		!<app-text/ghostscript-gpl-8.64
		guide? ( x11-libs/qt-gui )"
RDEPEND=""

SITEFILE="50gambit-gentoo.el"

S=${WORKDIR}/${MY_P} #-devel

IUSE="emacs static guide"

#src_prepare() {
#    sed -e "s#LIB_EXTENSION=\".so\"#LIB_EXTENSION=\".so.${PV}\"#" -i configure.ac
#    eautoreconf
#}

src_configure() {
	econf \
		$(use_enable !static shared) \
		$(use_enable guide) \
		--docdir=/usr/share/doc/${PF} \
		--enable-single-host \
		--disable-absolute-shared-libs #\
#        LDFLAGS="-Wl,-soname,libgambc.so.${PV}"
}

src_compile() {
	emake bootstrap || die

	if use emacs; then
		elisp-compile misc/*.el || die
	fi
}

src_install() {
	emake DESTDIR="${D}" install || die

#    mv ${D}/usr/$(get_libdir)/libgambc.so \
#        ${D}/usr/$(get_libdir)/libgambc.so.${PV} || die
#    
#    dosym /usr/$(get_libdir)/libgambc.so.${PV} \
#        /usr/$(get_libdir)/libgambc.so || die
}

pkg_postinst() {
	use emacs && elisp-site-regen
}

pkg_postrm() {
	use emacs && elisp-site-regen
}
