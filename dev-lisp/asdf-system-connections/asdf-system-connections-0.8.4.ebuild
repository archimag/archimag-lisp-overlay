# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Provides auto-loading of systems that only make sense when several other systems are loaded."
HOMEPAGE="http://common-lisp.net/project/cl-containers/asdf-system-connections/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}"

src_install() {
	common-lisp-install dev/${PN}.lisp ${PN}.asd
	common-lisp-symlink-asdf
}
