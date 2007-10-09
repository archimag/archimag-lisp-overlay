# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

DESCRIPTION="Simple ASDF-BINARY-LOCATIONS configuration for Gentoo Common Lisp ports."
HOMEPAGE="http://www.gentoo.org/proj/en/lisp/common-lisp/guide.xml"
SRC_URI=""

LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

S=${WORKDIR}

DEPEND=">=dev-lisp/asdf-binary-locations-0.2.3"

src_install() {
	insinto /etc
	doins ${FILESDIR}/gentoo-init.lisp
}
