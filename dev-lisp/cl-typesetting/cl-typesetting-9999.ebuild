# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"
inherit common-lisp-2 eutils subversion

DESCRIPTION="CL-TYPESETTING is a complete typesetting system written in Common Lisp."
HOMEPAGE="http://www.fractalconcept.com/asp/cl-typesetting"
ESVN_REPO_URI="http://www.fractalconcept.com/public/open-source/cl-typesetting/"

LICENSE="BSD-2"
SLOT="0"
KEYWORDS=""
IUSE=""

RDEPEND="dev-lisp/cl-pdf"

CLSYSTEMS="${PN} ${PN}-test cl-typegraph"

src_prepare() {
	epatch "${FILESDIR}"/gentoo.patch
}

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	insinto /usr/share/${PN}/hyphen-patterns && doins hyphen-patterns/*
	insinto /usr/share/doc/${PF}/contrib/xhtml-renderer && doins contrib/xhtml-renderer/*
	insinto /usr/share/doc/${PF}/examples && doins examples/*
	insinto /usr/share/doc/${PF}/files-for-example && doins files-for-example/*
	dodoc *.txt
}
