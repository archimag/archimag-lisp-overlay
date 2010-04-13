# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit subversion

DESCRIPTION="A Fast R6RS Scheme interpreter."
HOMEPAGE="http://code.google.com/p/mosh-scheme/"
ESVN_REPO_URI="http://mosh-scheme.googlecode.com/svn/trunk/"
#mosh-scheme-read-only"

SLOT="0"
LICENSE="GPL-2"
KEYWORDS="~amd64 ~x86"

src_install() {
	emake DESTDIR="${D}" install || die "Install failed"
}
