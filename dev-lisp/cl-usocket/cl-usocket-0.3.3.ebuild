# Copyright 1999-2006 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp

DESCRIPTION="usocket is a universal socket library for Common Lisp."
HOMEPAGE="http://common-lisp.net/project/usocket/"
SRC_URI="http://common-lisp.net/project/usocket/releases/usocket-${PV}.tar.gz"
LICENSE="MIT"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
SLOT="0"
DEPEND="dev-lisp/cl-split-sequence dev-lisp/rt"

S=${WORKDIR}/${P/cl-}

CLPACKAGE=usocket

src_compile(){
	:
}

src_install() {
	insinto /usr/share/common-lisp/source/usocket
	doins *.{lisp,asd} *.sh

	insinto /usr/share/common-lisp/source/usocket/backend
	doins backend/*.lisp

	insinto /usr/share/common-lisp/source/usocket/test
	doins `ls test/*.{in,lisp,asd} | grep -v usocket.asd`

	common-lisp-system-symlink
	dosym ${CLSOURCEROOT}/usocket/test/usocket-test.asd ${CLSYSTEMROOT}/usocket-test.asd
	dodoc LICENSE TODO README doc/*.txt notes/*.txt
}
