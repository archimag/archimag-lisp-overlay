# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"

inherit common-lisp-2

DESCRIPTION="A Common Lisp task scheduler library similar to Unix cron."
HOMEPAGE="http://www.cliki.net/Clon"
SRC_URI="http://github.com/downloads/archimag/archimag-lisp-overlay/${P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/bordeaux-threads
		dev-lisp/trivial-timers"

CLSYSTEMS="${PN} ${PN}-test"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc ChangeLog README TODO doc/example.lisp
}

