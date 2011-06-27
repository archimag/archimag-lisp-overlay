# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"
inherit common-lisp-2 eutils git

DESCRIPTION="Clonsigna: easy IMAP rev4 client library"
HOMEPAGE="http://common-lisp.net/project/clonsigna/"
EGIT_REPO_URI="git://common-lisp.net/projects/clonsigna/clonsigna.git"

LICENSE="AS-IS"
SLOT="0"
KEYWORDS="~amd64 ~x86"
IUSE=""

RDEPEND="dev-lisp/iolib
	dev-lisp/cl-base64
	dev-lisp/cl-ppcre
	dev-lisp/split-sequence
	dev-lisp/alexandria
	dev-lisp/cl-plus-ssl"

src_compile() { true; }

src_install() {
	common-lisp-install src/*lisp ${PN}.asd
	common-lisp-symlink-asdf
	dodoc README LICENSE logo/*
}
