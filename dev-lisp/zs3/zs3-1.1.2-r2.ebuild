# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A Common Lisp library for working with Amazon's Simple Storage Service (S3)."
HOMEPAGE="http://www.xach.com/lisp/zs3/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/cxml
		 >=dev-lisp/drakma-1.0.0
		 dev-lisp/ironclad
		 virtual/puri
		 dev-lisp/cl-base64"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml doc/*
}
