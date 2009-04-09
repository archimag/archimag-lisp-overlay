# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A Comm Lisp I/O library."
HOMEPAGE="http://common-lisp.net/project/iolib/"
SRC_URI="http://common-lisp.net/project/${PN}/files/${P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/alexandria
		 dev-lisp/cl-ppcre
		 dev-lisp/cffi
		 dev-lisp/trivial-features
		 dev-lisp/fiveam
		 dev-lisp/trivial-garbage
		 dev-lisp/bordeaux-threads
		 dev-lisp/babel"

CLSYSTEMS="iolib iolib.base iolib.pathnames iolib.syscalls iolib-tests
		   io.multiplex io.streams io.zeta-streams net.sockets net.trivial-sockets"

src_install() {
	common-lisp-install *.asd base io.multiplex io.streams iolib \
		net.sockets pathnames syscalls tests
	common-lisp-symlink-asdf
	dodoc README
}
