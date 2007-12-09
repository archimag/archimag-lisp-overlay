# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DESCRIPTION="LIFT is an SUnit variant and much much more."
HOMEPAGE="http://common-lisp.net/project/${PN}/"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND=""

CLSYSTEMS="${PN} ${PN}-test"

src_install() {
	common-lisp-install *.asd {dev,test}/*.lisp
	common-lisp-install dev/notes.text
	common-lisp-symlink-asdf
	for i in compare data examples ; do
		docinto ${i} && dodoc ${i}/*
	done
	dodoc ${PN}-standard.config
}
