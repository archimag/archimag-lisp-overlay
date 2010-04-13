# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="CL-containers adds trees, sparse arrays, and other useful containers to CommonLisp."
HOMEPAGE="http://common-lisp.net/project/cl-containers/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/asdf-system-connections
		>=dev-lisp/metatilities-base-0.6.6
		>=dev-lisp/lift-1.7.0"

CLSYSTEMS="${PN} ${PN}-test"

src_install() {
	common-lisp-install *.asd {dev,tests}/*.lisp
	common-lisp-symlink-asdf
	dodoc *.config doc/introduction-to-cl-containers.pdf
}
