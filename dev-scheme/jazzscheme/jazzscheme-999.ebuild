# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit git

DESCRIPTION="JazzScheme is an open source programming language based on Scheme."
HOMEPAGE="http://www.jazzscheme.org/"
#SRC_URI="http://www-etud.iro.umontreal.ca/~lasallej/${P}.tar.gz"
EGIT_REPO_URI="git://github.com/jazzscheme/jazz.git"
#EGIT_REPO_URI="git://64.235.209.250/git/jazz"

LICENSE="|| ( MPL-1.1 GPL-2 )"
SLOT="0"
KEYWORDS="~x86 ~amd64"
IUSE=""

DEPEND="dev-scheme/gambit x11-libs/cairo"
RDEPEND="${DEPEND}"

src_compile() {
	vecho ">>> Configuring..."
	gsc configure || die
	vecho ">>> Building..."
	gsc make jedi jobs: 2 || die
}

src_install() {
	mkdir "${D}"/opt/
	mv * "${D}"/opt/
}
