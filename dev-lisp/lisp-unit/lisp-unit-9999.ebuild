# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2

inherit common-lisp-2 git

DESCRIPTION="A Common Lisp library for unit testing."
HOMEPAGE="http://www.cliki.net/lisp-unit/"
EGIT_REPO_URI="git://repo.or.cz/lisp-unit.git"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc TODO
	use doc && dohtml documentation/*
}
