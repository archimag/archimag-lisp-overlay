# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A WebDAV server written in Common Lisp."
HOMEPAGE="http://weitz.de/cl-webdav"
SRC_URI="http://common-lisp.net/~sionescu/ediware/${P}.tar.gz"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/hunchentoot
		dev-lisp/cxml
		dev-lisp/cl-fad"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc CHANGELOG.txt
	dohtml doc/{index.html,dav.png}
}
