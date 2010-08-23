# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-3 git

DESCRIPTION="A Comm Lisp I/O library."
HOMEPAGE="http://common-lisp.net/project/iolib/"
EGIT_REPO_URI="git://gitorious.org/iolib/iolib.git"

LICENSE="MIT"
SLOT="0"
KEYWORDS=""
IUSE=""

RDEPEND="dev-lisp/alexandria
		 dev-lisp/cl-ppcre
		 >=dev-lisp/cffi-0.10.6
		 dev-lisp/trivial-features
		 dev-lisp/fiveam
		 dev-lisp/trivial-garbage
		 dev-lisp/bordeaux-threads
		 dev-lisp/babel"

CLSYSTEMS="src/iolib.asd src/iolib.base.asd src/iolib.multiplex.asd \
		src/iolib.os.asd src/iolib.pathnames.asd src/iolib.sockets.asd \
		src/iolib.streams.asd src/iolib.syscalls.asd src/iolib.trivial-sockets.asd \
		examples/iolib.examples.asd tests/iolib-tests.asd"

src_install() {
	common-lisp-install-sources src examples
	common-lisp-install-sources -t all version.lisp-expr tests
	common-lisp-install-asdf
	dodoc CHANGES README
}
