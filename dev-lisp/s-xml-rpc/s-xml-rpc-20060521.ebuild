# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="S-XML-RPC is an implementation of XML-RPC in Common Lisp for both client and server."
HOMEPAGE="http://www.common-lisp.net/project/s-xml-rpc/"
SRC_URI="mirror://gentoo/${P}.tar.gz
		http://common-lisp.net/project/${PN}/S-XML-RPC.html"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		dev-lisp/s-xml
		dev-lisp/s-base64
		dev-lisp/s-sysdeps"

src_unpack() {
	unpack ${A}
	rm "${S}"/Makefile
}

src_install() {
	common-lisp-install src test ${PN}.asd
	common-lisp-symlink-asdf
	dohtml "${DISTDIR}"/S-XML-RPC.html
	dodoc ChangeLog
}
