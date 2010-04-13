# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="CL-FTP is a Common Lisp FTP client library."
HOMEPAGE="http://www.mapcar.org/~mrd/cl-ftp/
		http://packages.debian.org/unstable/devel/cl-ftp
		http://www.cliki.net/CL-FTP"
SRC_URI="mirror://debian/pool/main/c/${PN}/${PN}_${PV}.orig.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/acl-compat
		dev-lisp/split-sequence"

CLPACKAGE=ftp
CLSYSTEMS=ftp

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dohtml api.html
}
