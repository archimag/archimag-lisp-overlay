# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: /var/cvsroot/gentoo-x86/dev-scheme/hop/hop-1.8.5.ebuild,v 1.1 2008/01/03 13:47:32 hkbst Exp $

inherit subversion

DESCRIPTION="A Fast R6RS Scheme interpreter."
HOMEPAGE="http://code.google.com/p/mosh-scheme/"
#SRC_URI="http://mosh-scheme.googlecode.com/files/${P}.tar.gz"
ESVN_REPO_URI="http://mosh-scheme.googlecode.com/svn/trunk/"
#mosh-scheme-read-only"

SLOT="0"
LICENSE="GPL-2"
KEYWORDS="~amd64 ~x86"

DEPEND=""
RDEPEND=""

IUSE=""

src_compile() {
	econf
	emake || die "emake failed"
}

src_install () {
	emake DESTDIR="${D}" install || die "install failed"
}
