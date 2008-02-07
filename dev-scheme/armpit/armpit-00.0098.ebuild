# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

MY_P=${PN}_${PV}

DESCRIPTION="ARMPIT SCHEME is an interpreter for the Scheme language (lexically-scoped dialect of Lisp) that runs on RISC microcontrollers with ARM core."

HOMEPAGE="http://armpit.sourceforge.net/"

SRC_URI="mirror://sourceforge/armpit/${MY_P}.tar.gz"

LICENSE="MIT"

SLOT="0"

KEYWORDS="~arm"

IUSE=""

DEPEND=""

RDEPEND="${DEPEND}"

S="${WORKDIR}"

src_compile() {
	die "I can't test this"
}

src_install() {
	die "I can't test this"
}
