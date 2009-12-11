# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Wiki engine plugin for RESTAS application server"
HOMEPAGE="http://github.com/archimag/restas-wiki"
SRC_URI="http://cloud.github.com/downloads/archimag/restas-wiki/restas-wiki-20091211.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND=">=dev-lisp/restas-0.0.2
		 dev-lisp/cl-closure-template
		 dev-lisp/colorize
		 dev-lisp/local-time
		 dev-lisp/zip
		 dev-lisp/cl-typesetting"

CLSYSTEMS="${PN}"

src_install() {
	common-lisp-install *.asd src resource
	common-lisp-symlink-asdf

	dodoc COPYING
}

