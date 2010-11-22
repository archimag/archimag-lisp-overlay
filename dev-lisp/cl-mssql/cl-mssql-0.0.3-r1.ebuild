# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"
inherit common-lisp-2 eutils

DESCRIPTION="A Common Lisp library for interacting with MS SQL Server databases."
HOMEPAGE="http://code.google.com/p/cl-mssql/"
SRC_URI="http://cl-mssql.googlecode.com/files/${P}.tar.bz2"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-db/freetds
		dev-lisp/cffi
		dev-lisp/iterate
		dev-lisp/garbage-pools
		dev-lisp/parse-number"

CLSYSTEMS="mssql"

src_install() {
	common-lisp-install ${CLSYSTEMS}.asd src
	common-lisp-symlink-asdf
}
