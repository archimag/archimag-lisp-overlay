# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Common Lisp driver for MongoDB"
HOMEPAGE="https://github.com/archimag/mongo-cl-driver"
SRC_URI="http://github.com/downloads/archimag/archimag-lisp-overlay/${P}.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		dev-lisp/iterate
		dev-lisp/closer-mop
		dev-lisp/local-time
		dev-lisp/babel
		dev-lisp/ieee-floats
		dev-lisp/ironclad
		dev-lisp/bordeaux-threads
		dev-lisp/iolib"

src_install() {
	common-lisp-install *.asd src
	common-lisp-symlink-asdf
}
