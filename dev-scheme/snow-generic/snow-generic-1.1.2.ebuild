# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eutils

DESCRIPTION="A repository of Scheme packages that are portable to several popular implementations of Scheme"
HOMEPAGE="http://snow.iro.umontreal.ca/"
SRC_URI="http://snow.iro.umontreal.ca/?operation=download&pkg=${PN}/v${PV}&fakeoutput=/${PN}-v${PV//./_}.tgz"
LICENSE="LGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~x86"
IMPLEMENTATIONS="bigloo chicken gambit gauche guile mit-scheme mzscheme scheme48 scm stklos"
#not supported but still tested for: rscheme
#not available to hkBst but probably supported: chez kawa larceny petite scsh sisc stalin

for impl in ${IMPLEMENTATIONS}; do
	DEPEND+="impl? ( dev-scheme/${impl} ) "
	IUSE+="${impl} "
done

S="${WORKDIR}/${PN}/v${PV}"

src_unpack() {
	unpack ${A}; cd "${S}"

	epatch "${FILESDIR}"/destdir.patch
	epatch "${FILESDIR}"/some.patch

	cp configure configure.old

	sed "s:gambit-gsc:gambit-compiler:" -i configure
	sed "s:-rx \"RScheme (v???,\":-rx \"RScheme (v???,\" -vrx \"[0-9][0-9A-Za-z.]*\\\(-b[0-9]u\\\)*\":" -i configure
	sed "s:-rx \"\[Vv\]ersion ???,\":-rx \"Welcome to MzScheme v???\" -vrx \"[0-9]*\":" -i configure

	sed "/echo \"Configuring files for these defaults:\"/iALL_SNOW_HOSTS=\"$(usev bigloo) $(usev chicken) $(usev gambit) $(usev gauche) $(usev guile) $(useq mit-scheme && echo mit) $(usev mzscheme) $(usev scheme48) $(usev scm) $(usev stklos)\"" -i configure

	diff -u configure.old configure

	cp makefile.in makefile.in.old

	sed "s:bin_dir = \$(snow_site_dir)/bin:bin_dir = /usr/bin:" -i makefile.in

	diff -u makefile.in.old makefile.in
}

src_compile() {
	./configure --host=bigloo
}

src_install() {
	emake DESTDIR="${D}" SNOW_SITE_DIR="${D}usr/share/snow/v${PV}" install || die
}
