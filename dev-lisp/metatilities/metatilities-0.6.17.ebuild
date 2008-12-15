# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Metatilities is metabang.com's set of core utilities."
HOMEPAGE="http://common-lisp.net/project/metatilities/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="dev-lisp/asdf-system-connections
		>=dev-lisp/metatilities-base-0.6.3
		dev-lisp/moptilities
		dev-lisp/cl-containers
		dev-lisp/metabang-bind
		dev-lisp/lift"

src_unpack() {
	unpack ${A} && cd "${S}"
	epatch "${FILESDIR}"/fix-export-new-states.patch
}

src_install() {
	common-lisp-install ${PN}.asd dev/
	common-lisp-symlink-asdf
}
