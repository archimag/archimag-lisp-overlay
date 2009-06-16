# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="garbage-pools is a Common Lisp re-implementation of the APR Pools for resource management."
HOMEPAGE="http://code.google.com/p/garbage-pools/ http://www.cliki.net/garbage-pools"
SRC_URI="http://garbage-pools.googlecode.com/files/${P}.tar.bz2"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/lift"

CLSYSTEMS="${PN} ${PN}-test"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
}
