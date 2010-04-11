# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-2

DESCRIPTION="XLUnit is a Test Framework based on XPTest and JUnit."
HOMEPAGE="http://www.cliki.net/xlunit"
SRC_URI="http://files.b9.com/${PN}/${P}.tar.gz"
LICENSE="BSD"

SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}"

src_prepare() {
	rm Makefile
}
