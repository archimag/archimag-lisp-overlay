# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"

DESCRIPTION="Library for manipulating Unicode strings and for manipulating C strings according to the Unicode standard."
HOMEPAGE="http://www.gnu.org/software/libunistring/"
SRC_URI="http://ftp.gnu.org/gnu/libunistring/${P}.tar.gz"

LICENSE="LGPL-3 GPL-3"
SLOT="0"
KEYWORDS="~x86 ~amd64"
IUSE="doc"

DEPEND=""
RDEPEND="${DEPEND}"

src_compile() {
	if use doc; then
		emake -C doc info html || die "Build doc failed"
	fi

	emake || die "Build failed"
}

src_install() {
	dodoc AUTHORS README ChangeLog
	if use doc; then
		dohtml doc/libunistring.html
		doinfo doc/libunistring.info
	fi

	emake DESTDIR="${D}" install || die "Install failed"
}
