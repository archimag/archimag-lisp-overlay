# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: /var/cvsroot/gentoo-x86/app-shells/scsh/scsh-0.6.7.ebuild,v 1.6 2008/08/03 16:10:31 pchrist Exp $

EAPI="2"

inherit eutils multilib 

MV="${PV%*.*}"

DESCRIPTION="Unix shell embedded in Scheme"
HOMEPAGE="http://www.scsh.net/"
SRC_URI="ftp://ftp.scsh.net/pub/scsh/${MV}/${P}.tar.gz"
LICENSE="as-is BSD"
SLOT="0"
KEYWORDS="~amd64 ppc sparc x86"
IUSE=""

DEPEND="!dev-scheme/scheme48"
RDEPEND=""

src_unpack() {
	use amd64 && multilib_toolchain_setup x86
	SCSH_LIB_DIRS="/usr/$(get_libdir)/scsh"
	unpack ${A}
	cd "${S}"
}

src_prepare() {
	if ! use scsh; then
		epatch "${FILESDIR}/${PV}-Makefile.in-doc-dir-gentoo.patch" || die
	fi
}

src_configure() {
	econf --prefix=/usr \
		--libdir=/usr/$(get_libdir) \
		--includedir=/usr/include \
		--with-lib-dirs-list=${SCSH_LIB_DIRS}
}

src_install() {
	make DESTDIR="${D}" install || die
	dodir /etc/env.d
	cat >"${D}/etc/env.d/50scsh" <<-EOF
		SCSH_LIB_DIRS='${SCSH_LIB_DIRS}'
EOF
}
