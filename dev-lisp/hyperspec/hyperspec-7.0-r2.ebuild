# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"

MY_PV=${PV/./-}
MY_P=HyperSpec-${MY_PV}

DESCRIPTION="Common Lisp ANSI-standard Hyperspec"
HOMEPAGE="http://www.lispworks.com/reference/HyperSpec/"
SRC_URI="ftp://ftp.lispworks.com/pub/software_tools/reference/${MY_P}.tar.gz"
RESTRICT="mirror"

LICENSE="HyperSpec"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86 ~x86-fbsd"
IUSE=""

S="${WORKDIR}"

src_install() {
	dodir /usr/share/doc/${PF} || die
	cp -a HyperSpec* ${D}/usr/share/doc/${PF} || die
	dosym /usr/share/doc/${PF} /usr/share/doc/${PN} || die
}
