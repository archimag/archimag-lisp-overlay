# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EGIT_REPO_URI="git://repo.or.cz/fsbv.git"

inherit common-lisp-2 git

DESCRIPTION="CFFI Add-on: Foreign Structures By Value."
HOMEPAGE="http://common-lisp.net/project/gsll/ http://repo.or.cz/w/fsbv.git"

LICENSE="MIT"
SLOT="0"
KEYWORDS=""
IUSE=""

RDEPEND=">=dev-lisp/cffi-0.10.0
		virtual/libffi"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml readme.html
}
