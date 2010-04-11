# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2

DESCRIPTION="A very tiny Scheme implementation with decent speed and native hygienic macros."
SRC_URI="http://synthcode.com/scheme/${P}.tgz"
HOMEPAGE="http://synthcode.com/scheme/"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~x86"
IUSE="boehm-gc"

DEPEND="boehm-gc? ( dev-libs/boehm-gc )"
RDEPEND="${DEPEND}"

export EXTRA_EMAKE+="PREFIX=/usr $(use boehm-gc && echo USE_BOEHM=1)"

src_prepare() {
	cp Makefile Makefile.old

	#make it compile on amd64
	sed "s,\$(CC) -c,\$(CC) -fPIC -c," -i Makefile

	#add DESTDIR support
	sed "/install: chibi-scheme/a\\\\tmkdir -p \$(BINDIR)" -i Makefile
	sed "s,\$(BINDIR),\$(DESTDIR)/\$(BINDIR)," -i Makefile
	sed "s,\$(MODDIR),\$(DESTDIR)/\$(MODDIR)," -i Makefile
	sed "s,\$(INCDIR),\$(DESTDIR)/\$(INCDIR)," -i Makefile
	sed "s,\$(LIBDIR),\$(DESTDIR)/\$(LIBDIR)," -i Makefile

	diff -u Makefile.old Makefile
}

src_test() {
	LD_LIBRARY_PATH="${S}" emake test
}

src_install() {
	emake DESTDIR="${D}" ${EXTRA_EMAKE} install
}
