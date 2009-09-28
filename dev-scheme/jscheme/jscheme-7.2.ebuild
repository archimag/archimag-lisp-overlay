# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit java-utils-2

EAPI="2"

DESCRIPTION="JScheme  is a dialect of Scheme with a very simple interface to Java, called the Javadot notation"
HOMEPAGE="http://jscheme.sourceforge.net/jscheme/main.html"
#SRC_URI="http://sourceforge.net/projects/${PN}/files/${PN}/${PV}/${P}.tgz/download"
SRC_URI="mirror://sourceforge/${PN}/${P}.tgz"

LICENSE=""
SLOT="0"
KEYWORDS="~x86"
IUSE=""

DEPEND=""
RDEPEND="${DEPEND}"

src_compile() {
	sh bin/make || die "make failed"
}

src_install() {
	java-pkg_dojar lib/jscheme.jar
}
