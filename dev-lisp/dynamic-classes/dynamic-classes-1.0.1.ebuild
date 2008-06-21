# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="metabang.com's dynamic class utility."
HOMEPAGE="http://common-lisp.net/project/metatilities/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"

DEPEND="!dev-lisp/metabang-${PN}
		dev-lisp/metatilities-base"

src_install() {
	common-lisp-install ${PN}.asd dev/*.lisp
	common-lisp-symlink-asdf
}
