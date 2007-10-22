# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="An ASDF-Extension that makes it easy to specify where your Common Lisp binaries (FASL files) should go."
HOMEPAGE="http://common-lisp.net/project/cl-containers/${PN}/"
SRC_URI="http://common-lisp.net/~sionescu/files/${PN}_${PV}.tar.gz"
LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="dev-lisp/cl-asdf"

S="${WORKDIR}/${PN}"

src_install() {
	common-lisp-install *.asd dev/*.lisp
	common-lisp-symlink-asdf
}
