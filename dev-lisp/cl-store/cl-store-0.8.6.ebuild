# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

MY_P=${PN}_${PV}

DESCRIPTION="CL-STORE is a Common Lisp library for serializing and deserializing Common Lisp objects."
HOMEPAGE="http://common-lisp.net/project/cl-store/"
SRC_URI="http://common-lisp.net/project/${PN}/files/${MY_P}.tgz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="sys-apps/texinfo"

S="${WORKDIR}"/${MY_P}

src_unpack() {
	unpack ${A} && cd "${S}"
	rm xml* */custom-xml.lisp
}

src_compile() {
	makeinfo doc/${PN}.texi -o ${PN}.info
}

src_install() {
	common-lisp-install *.{lisp,asd} \
		abcl acl clisp cmucl ecl lispworks mcl openmcl sbcl
	common-lisp-symlink-asdf
	dodoc ChangeLog
	doinfo ${PN}.info
}
