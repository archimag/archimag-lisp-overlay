# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils multilib

DESCRIPTION="A multi-platform SQL interface for Common Lisp"
HOMEPAGE="http://${PN}.b9.com/
		http://packages.debian.org/unstable/devel/cl-sql.html
		http://www.cliki.net/CLSQL"
SRC_URI="http://files.b9.com/clsql/${P}.tar.gz"
LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="postgres mysql sqlite sqlite3 odbc"
DEPEND="!dev-lisp/cl-sql
		dev-lisp/cl-md5
		>=dev-lisp/uffi-1.5.7
		postgres? ( dev-db/libpq )
		mysql? ( virtual/mysql )
		sqlite? ( =dev-db/sqlite-2* )
		sqlite3? ( =dev-db/sqlite-3* )
		odbc? ( dev-db/unixODBC )"

src_unpack() {
	unpack ${A}
	sed -i "s,/usr/lib,/usr/$(get_libdir),g" "${S}"/${PN}-{mysql,uffi}.asd
	sed -i 's,"usr" "lib","usr" "'$(get_libdir)'",g' "${S}"/${PN}-{mysql,uffi}.asd
}

src_compile() {
	make -C uffi || die
	if use mysql; then
		make -C db-mysql || die
	fi
}

install_clsql_pkg() {
	common-lisp-install -p ${PN}-${1} db-${1}/*.lisp ${PN}-${1}.asd
	common-lisp-system-symlink -p ${PN}-${1} ${PN}-${1}
	if [ -f db-${1}/${PN}_${1}.so ]; then
		exeinto /usr/$(get_libdir)/${PN} ; doexe db-${1}/${PN}_${1}.so
	fi
}

src_install() {
	common-lisp-install ${PN}.asd sql/*.lisp ${PN}-tests.asd tests
	common-lisp-system-symlink ${PN} ${PN}-tests

	common-lisp-install -p ${PN}-uffi uffi/*.lisp ${PN}-uffi.asd
	common-lisp-system-symlink -p ${PN}-uffi ${PN}-uffi
	exeinto /usr/$(get_libdir)/${PN} ; doexe uffi/${PN}_uffi.so

	install_clsql_pkg postgresql-socket
	for dbtype in postgres mysql odbc sqlite sqlite3; do
		use ${dbtype} && install_clsql_pkg ${dbtype}
	done
	# TODO: figure out the dependencies
	install_clsql_pkg aodbc
	install_clsql_pkg db2
	install_clsql_pkg oracle

	dodoc BUGS CONTRIBUTORS COPYING* ChangeLog INSTALL LATEST-TEST-RESULTS NEWS README TODO
	dodoc doc/clsql.pdf
	tar xfz doc/html.tar.gz -C "${T}" && dohtml "${T}"/html/*
	docinto examples && dodoc examples/*
	docinto notes && dodoc notes/*

	dodir /etc
	cat > "${D}"/etc/clsql-init.lisp <<EOF
(clsql:push-library-path #p"/usr/$(get_libdir)/")
(clsql:push-library-path #p"/usr/$(get_libdir)/clsql/")
EOF
}
