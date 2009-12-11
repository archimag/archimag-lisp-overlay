# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Common Lisp implementation routes for mapping URL"
HOMEPAGE="http://github.com/archimag/wiki-parser"
SRC_URI="http://cl-closure-template.googlecode.com/files/${P}.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/cl-ppcre
		 dev-lisp/iterate
		 dev-lisp/alexandria"

CLSYSTEMS="${PN}"

src_install() {
	common-lisp-install *.asd src
	common-lisp-symlink-asdf

	dodoc COPYING
}

