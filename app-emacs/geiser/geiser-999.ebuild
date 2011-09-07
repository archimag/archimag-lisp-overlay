# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="4"

# for live ebuilds uncomment inherit git, comment SRC_URI and empty KEYWORDS

NEED_EMACS=23

inherit elisp
inherit git

DESCRIPTION="Emacs modes for Scheme interaction"
HOMEPAGE="http://www.nongnu.org/geiser/"
#SRC_URI="mirror://nongnu/${PN}/${PV}/${P}.tar.gz"
EGIT_REPO_URI="git://git.sv.gnu.org/geiser.git"

LICENSE="BSD"
IUSE=""

KEYWORDS=""
SLOT="0"

DEPEND=""
RDEPEND=""

SITEFILE="50${PN}-gentoo.el"

src_prepare() {
	./autogen.sh || die
}

src_configure() {
	econf --with-lispdir="${SITELISP}/${PN}"
}

src_compile() {
	emake || die
}

src_install() {
	emake DESTDIR="${D}" install || die

	elisp-site-file-install "${FILESDIR}/${SITEFILE}" || die
	dodoc AUTHORS NEWS README THANKS
}

pkg_postinst() {
	elisp-site-regen
}

pkg_postrm() {
	elisp-site-regen
}
