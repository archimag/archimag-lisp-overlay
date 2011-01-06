# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="metabang.com's dynamic class utility."
HOMEPAGE="http://common-lisp.net/project/dynamic-classes/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/metatilities-base
		dev-lisp/lift"

src_install() {
	common-lisp-install ${PN}.asd dev/*.lisp
	common-lisp-symlink-asdf
}
