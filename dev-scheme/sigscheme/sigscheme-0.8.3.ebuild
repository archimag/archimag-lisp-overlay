# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

DESCRIPTION="SigScheme is a R5RS Scheme interpreter for embedded use."
HOMEPAGE="http://code.google.com/p/sigscheme/"
SRC_URI="http://${PN}.googlecode.com/files/${P}.tar.bz2"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~x86"
IUSE="minimal strict-r5rs unicode"

src_compile() {
	econf \
		$(use minimal && echo "--enable-conf=small") \
		$(use_enable strict-r5rs) \
		$(use_enable unicode utf8) \
		|| die "econf failed"
	emake || die "emake failed"
}

src_install() {
	emake DESTDIR="${D}" install || die "install failed"
}
