# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A Lisp parser and generator for the JSON data-interchange format."
HOMEPAGE="http://common-lisp.net/project/cl-json/
		http://www.cliki.net/cl-json"
SRC_URI="http://github.com/downloads/archimag/gentoo-lisp-overlay/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/fiveam"

src_install() {
	common-lisp-install src t ${PN}.asd
	common-lisp-symlink-asdf
	dodoc CONTRIBUTORS
	dohtml doc/{cl-json.html,style.css}
}
