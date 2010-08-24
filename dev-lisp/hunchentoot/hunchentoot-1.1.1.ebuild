# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="Hunchentoot is a web server written in Common Lisp."
HOMEPAGE="http://weitz.de/hunchentoot/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
SRC_URI="http://github.com/downloads/archimag/archimag-lisp-overlay/${P}.tar.bz2"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

DEPEND="doc? ( dev-libs/libxslt )"
RDEPEND=">=dev-lisp/chunga-0.5.0
		>=dev-lisp/cl-base64-3.3.0
		>=dev-lisp/cl-fad-0.6.3
		>=dev-lisp/cl-ppcre-2.0.0
		>=dev-lisp/flexi-streams-0.12.0
		>=dev-lisp/cl-plus-ssl-20081104
		>=dev-lisp/md5-1.8.5
		>=dev-lisp/rfc2388-1.2
		>=dev-lisp/trivial-backtrace-1.0.2
		>=dev-lisp/usocket-0.4.0
		>=dev-lisp/bordeaux-threads-0.7.0
		>=dev-lisp/cl-who-0.11.1
		>=dev-lisp/drakma-1.0.0"

src_compile() {
	if use doc ; then
		cd doc
		xsltproc clixdoc.xsl index.xml > index.html
	fi
}

src_install() {
	common-lisp-install *.{lisp,asd} url-rewrite/ test/
	common-lisp-symlink-asdf
	dodoc CHANGELOG* README
	use doc && dohtml -r doc/*
}
