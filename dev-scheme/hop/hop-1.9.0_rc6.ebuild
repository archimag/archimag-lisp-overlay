# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: /var/cvsroot/gentoo-x86/dev-scheme/hop/hop-1.8.5.ebuild,v 1.1 2008/01/03 13:47:32 hkbst Exp $

inherit multilib

MY_P=${P/_/-}

DESCRIPTION="Hop is a higher-order language for programming interactive web applications such as web agendas, web galleries, music players, etc. that is implemented as a Web broker"
HOMEPAGE="http://hop.inria.fr/"
SRC_URI="ftp://ftp-sop.inria.fr/mimosa/fp/Hop/${MY_P}.tar.gz"

SLOT="0"
LICENSE="GPL-2"
KEYWORDS="~amd64 ~x86"

DEPEND=">=dev-scheme/bigloo-3.0c"

IUSE=""

S=${WORKDIR}/${MY_P}

src_unpack() {
	unpack ${A}; cd "${S}"

	cp share/Makefile share/Makefile.old
	sed "s:\$(BUILDSHAREDIR)/hop.js -c > \$(HOPSHAREDIR):\$(BUILDSHAREDIR)/hop.js -c > \$(DESTDIR)\$(HOPSHAREDIR):" -i share/Makefile
	diff -u share/Makefile.old share/Makefile
}

src_compile() {
	# Hop doesn't use autoconf and consequently a lot of options used by econf give errors
	# Manuel Serrano says: "Please, dont talk to me about autoconf. I simply dont want to hear about it..."
	./configure --prefix=/usr --libdir=/usr/$(get_libdir) || die "configure failed"

	emake -j1 || die "emake failed"
}

src_install () {
	emake DESTDIR="${D}" install || die "install failed"
}
