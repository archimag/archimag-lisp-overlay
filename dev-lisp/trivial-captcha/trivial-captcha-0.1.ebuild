# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="trivial-captcha is an exceptionally trivial library for creating images suitable for a CAPTCHA."
HOMEPAGE="http://www.cliki.net/trivial-captcha"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

src_install() {
	common-lisp-install *.{lisp,asd} letters.pnm
	common-lisp-symlink-asdf
	dohtml doc/*
}
