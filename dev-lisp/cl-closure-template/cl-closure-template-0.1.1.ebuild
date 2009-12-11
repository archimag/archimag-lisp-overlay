# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Common Lisp implementations Closure Templates from Google"
HOMEPAGE="http://code.google.com/p/cl-closure-template/"
SRC_URI="http://cl-closure-template.googlecode.com/files/${P}.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/lift
		 dev-lisp/asdf-system-connections
		 dev-lisp/wiki-parser
		 dev-lisp/split-sequence
		 dev-lisp/parenscript"

CLSYSTEMS="closure-template"

src_install() {
	common-lisp-install *.asd src t example
	common-lisp-symlink-asdf

	dodoc COPYING README.markdown
}

