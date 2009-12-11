# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="Common Lisp implementation routes for mapping URL"
HOMEPAGE="http://code.google.com/p/cl-routes/"
SRC_URI="http://cl-routes.googlecode.com/files/${P}.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/lift
		 dev-lisp/puri
		 dev-lisp/iterate
		 dev-lisp/split-sequence"

CLSYSTEMS="routes routes-test"

src_install() {
	common-lisp-install *.asd routes unify test
	common-lisp-symlink-asdf
}

