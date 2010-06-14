# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-3

DESCRIPTION="Common Lisp extension for general iteration"
HOMEPAGE="http://series.sf.net"
SRC_URI="mirror://sourceforge/${PN}/${P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}"

src_install() {
	common-lisp-install-sources s-{code,install,package,test}.lisp
	common-lisp-install-asdf
	dodoc RELEASE-NOTES ChangeLog s-doc.txt
}
