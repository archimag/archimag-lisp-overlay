# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=3
inherit common-lisp-3 eutils multilib

DESCRIPTION="A multi-platform SQL interface for Common Lisp"
HOMEPAGE="http://clsql.b9.com/
		http://packages.debian.org/unstable/devel/cl-sql.html
		http://www.cliki.net/CLSQL"
SRC_URI="http://files.b9.com/clsql/${P}.tar.gz"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc oracle mysql postgres sqlite sqlite3 odbc"

DEPEND="mysql? ( virtual/mysql )"
RDEPEND="${DEPEND}
		!dev-lisp/cl-sql
		dev-lisp/md5
		>=dev-lisp/uffi-1.5.7
		>=dev-lisp/uffi-0.10.5
		oracle? ( dev-db/oracle-instantclient-basic )
		postgres? ( dev-db/postgresql-base )
		sqlite? ( dev-db/sqlite:0 )
		sqlite3? ( dev-db/sqlite:3 )
		odbc? ( dev-db/unixODBC )"

src_prepare() {
	sed -i "s,/usr/lib,/usr/$(get_libdir),g" "${S}"/${PN}-{mysql,uffi}.asd
	sed -i 's,"usr" "lib","usr" "'$(get_libdir)'",g' "${S}"/${PN}-{mysql,uffi}.asd
}

src_compile() {
	make -C uffi || die "Cannot build UFFI helper library"
	if use mysql; then
		make -C db-mysql || die "Cannot build foreign glue to libmysql"
	fi
}

install_clsql_pkg() {
	cd "${S}"
	common-lisp-install-sources db-${1}
	common-lisp-install-asdf ${PN}-${1}
	if [ -f db-${1}/${PN}_${1}.so ]; then
		exeinto /usr/$(get_libdir)/${PN} ; doexe db-${1}/${PN}_${1}.so
	fi
}

src_install() {
	common-lisp-install-sources sql/*.lisp tests
	common-lisp-install-asdf ${PN} ${PN}-tests

	common-lisp-install-sources uffi/*.lisp
	common-lisp-install-asdf ${PN}-{uffi,cffi}
	exeinto /usr/$(get_libdir)/${PN} ; doexe uffi/${PN}_uffi*.so

	install_clsql_pkg postgresql-socket
	use postgres && install_clsql_pkg postgresql
	for dbtype in mysql odbc oracle sqlite sqlite3; do
		use ${dbtype} && install_clsql_pkg ${dbtype}
	done
	# TODO: figure out the dependencies
	install_clsql_pkg aodbc
	install_clsql_pkg db2

	dodoc BUGS CONTRIBUTORS ChangeLog INSTALL LATEST-TEST-RESULTS NEWS README TODO
	use doc && dodoc doc/clsql.pdf
	tar xfz doc/html.tar.gz -C "${T}" && dohtml "${T}"/html/*
	docinto examples && dodoc examples/*
	docinto notes && dodoc notes/*

	dodir /etc
	cat > "${D}"/etc/clsql-init.lisp <<EOF
(clsql:push-library-path #p"/usr/$(get_libdir)/")
(clsql:push-library-path #p"/usr/$(get_libdir)/clsql/")
EOF
}
