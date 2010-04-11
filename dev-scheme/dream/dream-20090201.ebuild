# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

DESCRIPTION="Dream is a scheme interpreter written entirely in x86 \
machine language, following the R4RS standard."
HOMEPAGE="http://www.stripedgazelle.org/joey/dream.html"
SRC_URI="http://www.stripedgazelle.org/cgi-bin/wiki_joey/${PN}${PV}.tar.gz"

LICENSE="GPL-3"
SLOT="0"
KEYWORDS="~x86"
IUSE=""

RDEPEND=""
DEPEND="dev-scheme/guile"

S="${WORKDIR}/${PN}${PV}"

src_unpack() {
	unpack ${A}
	cd "${S}"

	sed "s:/usr/local/bin/bootstrap.scm:/usr/lib/dream/bootstrap.scm:" -i make.scm

}

src_compile() {
	mv dream dream-bin
	guile make_guile.scm || die "Dream's bootstrap failed"
	chmod 755 dream
}

src_test() {
	true
}

src_install() {
	dobin dream

	insinto /usr/lib/dream
	doins bootstrap.scm

	dodoc README asm86.scm r4rstest.scm
}

