# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A library for .zip-file reading and writing, written in Common Lisp."
HOMEPAGE="http://common-lisp.net/project/zip/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"

DEPEND="dev-lisp/salza
		dev-lisp/flexi-streams
		dev-lisp/trivial-gray-streams"
