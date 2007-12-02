# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="LIFT is an SUnit variant and much much more."
HOMEPAGE="http://common-lisp.net/project/${PN}/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"

DEPEND="dev-lisp/asdf-system-connections
		dev-lisp/metatilities-base
		dev-lisp/metabang-dynamic-classes
		dev-lisp/lift"

CLSYSTEMS="${PN} ${PN}-test"

src_install() {
	common-lisp-install *.asd dev tests website *.config
	common-lisp-symlink-asdf
	dodoc doc/introduction-to-cl-containers.pdf
}
