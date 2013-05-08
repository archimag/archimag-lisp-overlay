# Copyright 1999-2013 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=5

inherit common-lisp-3

MY_PV="v${PV}"

DESCRIPTION="TRIVIAL-FEATURES ensures consistent *FEATURES* across multiple Common Lisp implementations."
HOMEPAGE="http://www.cliki.net/trivial-features"
SRC_URI="https://github.com/${PN}/${PN}/archive/v0.7.tar.gz -> ${P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

src_install() {
	common-lisp-3_src_install
	dodoc SPEC
}
