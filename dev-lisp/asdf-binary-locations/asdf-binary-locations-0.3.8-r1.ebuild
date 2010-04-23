# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-3 eutils

DESCRIPTION="An ASDF extension that manages Common Lisp binaries (FASL files)."
HOMEPAGE="http://common-lisp.net/project/asdf-binary-locations/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		dev-lisp/asdf"

src_install() {
	common-lisp-install-sources dev/
	common-lisp-install-asdf ${PN}.asd
}
