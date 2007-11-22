# Copyright 1999-2005 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
 
inherit common-lisp
 
DESCRIPTION="S-XML is a simple XML parser implemented in Common Lisp."
HOMEPAGE="http://www.common-lisp.net/project/s-xml/"
SRC_URI="http://common-lisp.net/project/s-xml/s-xml.tgz" 
LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="virtual/commonlisp
	dev-lisp/common-lisp-controller"
 
S=${WORKDIR}/${PN#cl-}
 
CLPACKAGE=s-xml
 
src_compile() {
	:
}
 
src_install() {
	dohtml doc/index.html doc/style.css doc/S-XML.html
	dodir /usr/share/common-lisp/source/s-xml
	dodir /usr/share/common-lisp/systems
	cp -R src ${D}/usr/share/common-lisp/source/s-xml/
	common-lisp-install s-xml.asd
	common-lisp-system-symlink
	dosym /usr/share/common-lisp/source/s-xml/s-xml.asd \
		/usr/share/common-lisp/systems/
}
