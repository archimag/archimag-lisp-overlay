# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

MY_P=${PN}_${PV:0:3}-${PV:4}

DESCRIPTION="A Common Lisp networking library for handling e-mail from Maildir, POP3, IMAP and SMTP"
HOMEPAGE="http://common-lisp.net/project/mel-base/"
SRC_URI="http://common-lisp.net/project/mel-base/release/${MY_P}.tar.gz"
LICENSE="BSD-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

DEPEND="!dev-lisp/cl-${PN}
		doc? ( sys-apps/texinfo )"
RDEPEND="${DEPEND}
		app-misc/mime-types"

S="${WORKDIR}"/${MY_P}

src_unpack() {
	unpack ${A}
	sed -i 's:0\.7\.0:0\.8\.0:' "${S}"/${PN}.asd
}

src_compile() {
	if use doc ; then
		cd docs/manual
		texi2pdf mel.texinfo || die "Cannot build PDF docs"
	fi
}

src_install() {
	common-lisp-install *.{lisp,asd} folders lisp-dep protocols
	common-lisp-symlink-asdf
	use doc && dodoc docs/manual/mel.pdf
}
