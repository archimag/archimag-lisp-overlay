# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="TRIVIAL-CONFIGURATION-PARSER is a Common Lisp library for parsing its own syntax of configuration file"
HOMEPAGE="http://www.cliki.net/trivial-configuration-parser"
SRC_URI="http://www.unmutual.info/software/${P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="!dev-lisp/cl-${PN}"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc README demo.conf
}
