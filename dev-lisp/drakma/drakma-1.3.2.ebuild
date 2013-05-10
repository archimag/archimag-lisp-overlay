# Copyright 1999-2013 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=5

inherit common-lisp-3

MY_P="v${PV}"

DESCRIPTION="Drakma is a Common Lisp HTTP client."
HOMEPAGE="http://weitz.de/drakma/"
SRC_URI="https://github.com/edicl/${PN}/archive/${MY_P}.tar.gz -> ${P}.tar.gz"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		>=dev-lisp/chunga-1.1.0
		>=dev-lisp/puri-1.5.0
		>=dev-lisp/cl-base64-3.3.2
		>=dev-lisp/flexi-streams-1.0.7
		>=dev-lisp/usocket-0.4.0
		dev-lisp/cl-plus-ssl"

src_install() {
	common-lisp-3_src_install
	#common-lisp-install-sources *.lisp
	#common-lisp-install-asdf
	dodoc CHANGELOG
	dohtml doc/index.html
}
