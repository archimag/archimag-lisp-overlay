# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit multilib

DESCRIPTION="Dream is a scheme interpreter written entirely in x86 \
machine language, following the R4RS standard."
HOMEPAGE="http://www.stripedgazelle.org/joey/dream.html"
SRC_URI="http://www.stripedgazelle.org/cgi-bin/wiki_joey/${PN}${PV}.tar.gz"

LICENSE="GPL-3"
SLOT="0"
KEYWORDS="~x86 ~amd64"
IUSE=""

RDEPEND=""
DEPEND="dev-libs/gmp"

S="${WORKDIR}/${PN}"

src_unpack() {
	unpack ${A}
	cd "${S}"
	echo "$(get_libdir)"
	if [ ! -e /usr/local/bin/bootstrap.scm ]; then
		ewarn "Until there is a better idea/solution"
		ewarn "the only way to bootstrap/compile dream"
		ewarn "is if the user manually places the"
		ewarn "bootstrap.scm file located in"
		ewarn "${S}/bootstrap.scm"
		ewarn "(or in the top sources dir)"
		ewarn "inside /usr/local/bin"
		ewarn "The bootstrap.scm file will be removed later"
		die "NO bootstrap.scm file in /usr/local/bin"
	fi
	sed "s:/usr/local/bin/bootstrap.scm:/usr/$(get_libdir)/${PN}/bootstrap.scm:" -i make.scm
}

src_compile() {
	mv dream dream-old-bin
	./dream-old-bin make.scm || die "Dream's bootstrap failed"
	chmod 755 dream
}

src_test() {
	#./dream r4rstest.scm
	ewarn "Tests not yet supported"
	ewarn "You can test dream after successful installation,"
	ewarn "by placing r4rstest.scm in your current dir and"
	ewarn "running \"dream r4rstest.scm\"."
	ewarn "The r4rstest.scm file is located in the"
	ewarn "top directory of the sources and also"
	ewarn "installed in docs of this version"
}

src_install() {
	dobin dream

	insinto "/usr/$(get_libdir)/dream"
	doins bootstrap.scm

	dodoc README x86.scm r4rstest.scm
}

pkg_postinst() {
	local bt="/usr/local/bin/bootstrap.scm"
	[ -e ${bt} ] && rm -v "${bt}"
}
