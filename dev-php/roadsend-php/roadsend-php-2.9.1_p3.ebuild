# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

MY_PVL=${PV/_p/-r}
MY_PV=${PV%%_p[0-9]}
MY_PL=${PN}-${MY_PVL}
MY_P=${PN}-${MY_PV}

DESCRIPTION="Roadsend PHP compiler"
HOMEPAGE="http://code.roadsend.com/pcc"
SRC_URI="http://code.roadsend.com/snaps/${MY_PL}.tar.bz2"

KEYWORDS="~x86 ~amd64"

DEPEND="dev-scheme/bigloo
		>=net-misc/curl-7.15.1-r1
		mysql? ( dev-db/mysql )
		sqlite3? ( >=dev-db/sqlite-3.3.12 )
		pcre? ( >=dev-libs/libpcre-6.6 )
		xml? ( dev-libs/libxml2 )
		odbc? ( dev-db/unixODBC )
		fastcgi? ( dev-libs/fcgi )"

RDEPEND="${DEPEND}"

IUSE="debug fastcgi mysql odbc pcre sqlite3 test xml"

S="${WORKDIR}/${MY_P}"

src_unpack(){
	unpack ${A};cd "${S}"
	cp Makefile.in Makefile.in.old
	sed "s#\$(sysconfdir)#\$(DESTDIR)/\$(sysconfdir)#" -i Makefile.in
	sed "s#\$(bindir)#\$(DESTDIR)/\$(bindir)#" -i Makefile.in
	sed "s#\$(libdir)#\$(DESTDIR)/\$(libdir)#" -i Makefile.in
	diff -u Makefile.in.old Makefile.in
}

src_compile() {
	econf $(use_with pcre) $(use_with fastcgi fcgi) $(use_with xml) $(use_with mysql) $(use_with sqlite3) $(use_with odbc) 

	if use debug; then
		emake -j1 || die "make debug failed"
	else
		emake -j1 unsafe || die "make failed"
	fi
}

src_test() {
	LD_LIBRARY_PATH="../libs/" emake -j1 test || die "standalone tests failed"
	LD_LIBRARY_PATH="../libs/" emake -j1 check || die "Zend PHP comparison failed"
}

src_install() {
	emake -j1 DESTDIR=${D} install || die "make install failed"
}
