# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Ironclad is a Common Lisp library similar to OpenSSL, GNU TLS or Crypto++"
HOMEPAGE="http://method-combination.net/lisp/ironclad/
		http://www.cliki.net/Ironclad"
SRC_URI="http://github.com/downloads/archimag/gentoo-lisp-overlay/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}"

src_install() {
	common-lisp-install *.asd src testing
	common-lisp-symlink-asdf
	dodoc README TODO NEWS
	dohtml doc/{${PN}.html,style.css}
}
