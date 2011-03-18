# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="A portable Common Lisp library for running external programs from within Lisp"
HOMEPAGE="http://common-lisp.net/project/external-program/"
SRC_URI="http://archimag-lisp-overlay.googlecode.com/files/${P}.tar.bz2"

LICENSE="Lisp LGPL"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""


src_install() {
	common-lisp-install external-program.asd src tests
	common-lisp-symlink-asdf

	dodoc LICENSE README.markdown
}
