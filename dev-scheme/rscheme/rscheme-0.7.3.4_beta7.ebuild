# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit versionator eutils

MY_PN=rs
MY_PV=${PV/_beta/-b}
MY_P=${MY_PN}-${MY_PV}

BUILD=$(get_version_component_range 5 ${PV/_beta/.})

DESCRIPTION="RScheme is an implementation of the Scheme language, mostly R4RS and R5RS compliant"
HOMEPAGE="http://www.rscheme.org/rs/"
SRC_URI="http://www.rscheme.org/rs/b/${PV/_*/}/${BUILD}/${MY_P}.tar.gz"

SLOT="0"
LICENSE="as-is"
KEYWORDS="~amd64"
IUSE="readline"

DEPEND="readline? ( sys-libs/readline )"
RDEPEND="${DEPEND}"

S=${WORKDIR}/${MY_P}

src_compile() {
	emake -j1 stage1 || die
	cd src
	epatch "${FILESDIR}/LDFLAGS.patch"
	econf $(use_enable readline) || die "econf failed"
}

src_install() {
	cd src
	sed 's:^INSTALL_DIR=/usr:INSTALL_DIR=$(DESTDIR)/usr:' -i Makefile
	emake -j1 DESTDIR="${D}" all || die
}
