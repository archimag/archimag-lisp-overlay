# Copyright 1999-2013 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=3

DESCRIPTION="Simple ASDF2 configuration for Gentoo Common Lisp ports."
HOMEPAGE="http://www.gentoo.org/proj/en/lisp/common-lisp/guide.xml"

LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND=">=dev-lisp/asdf-2.32"

S="${WORKDIR}"

src_install() {
	insinto /etc/common-lisp
	doins "${FILESDIR}"/gentoo-init.lisp "${FILESDIR}"/source-registry.conf
}
