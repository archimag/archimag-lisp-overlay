# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="The Common Foreign Function Interface (CFFI)"
HOMEPAGE="http://common-lisp.net/project/${PN}/"
SRC_URI="http://common-lisp.net/project/${PN}/releases/${PN}_${PV}.tar.gz"
LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

DEPEND="!dev-lisp/cl-${PN}
	doc? ( dev-lisp/sbcl virtual/tetex sys-apps/texinfo )"

CLSYSTEMS="${PN} ${PN}-tests ${PN}-examples ${PN}-uffi-compat"

S="${WORKDIR}/${PN}_${PV}"

src_compile() {
	use doc && make -C doc docs
}

src_install() {
	common-lisp-install tests src uffi-compat examples *.asd
	common-lisp-symlink-asdf
	dodoc README COPYRIGHT HEADER TODO doc/*.txt
	if use doc; then
		doinfo doc/*.info
		insinto /usr/share/doc/${PF}/html
		doins -r doc/{spec,manual}
	fi
}
