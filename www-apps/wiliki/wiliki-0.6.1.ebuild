# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit webapp eutils

MY_PN="WiLiKi"
MY_P=${MY_PN}-${PV}

DESCRIPTION="WiLiKi is a lightweight Wiki engine written in Scheme."
HOMEPAGE="http://practical-scheme.net/wiliki/"
#HOMEPAGE=http://www.shiro.dreamhost.com/scheme/wiliki/"
SRC_URI="mirror://sourceforge/${PN}/${MY_P}.tgz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~amd64 ~x86"
IUSE="cgi fastcgi"

DEPEND="\
	dev-scheme/gauche
	cgi? (
		virtual/httpd-cgi
	)
	fastcgi? (
		virtual/httpd-fastcgi
	)"
RDEPEND="${DEPEND}"

need_httpd_cgi

WEBAPP_MANUAL_SLOT="yes"

S="${WORKDIR}"/"${MY_P}"

pkg_setup () {
	webapp_pkg_setup
}

src_unpack() {
	unpack ${A}
	cd "${S}"
	epatch "${FILESDIR}"/"${PN}"-po-gentoo.patch
	epatch "${FILESDIR}"/"${P}"-cgi-gentoo.patch
	epatch "${FILESDIR}"/"${P}"-cgi2-gentoo.patch
}

src_install() {
	webapp_src_preinst
	emake DESTDIR="${D}" install || die "Install failed"

	insinto "${MY_CGIBINDIR}"
	doins -r src/wiliki.cgi src/wiliki2.cgi 
	fperms +x "${MY_CGIBINDIR}"/wiliki.cgi

	insinto "${MY_HTDOCSDIR}"
	doins src/wiliki.css src/wiliki2.css

	dodir "${MY_HOSTROOTDIR}"/${PF}/data
	webapp_serverowned "${MY_HOSTROOTDIR}"/${PF}/data

	webapp_src_install
}

pkg_postinst() {
	ewarn
	ewarn "Quickstart:"
	ewarn "	modify wiliki.cgi to customize the WiLiKi's behavior"
	ewarn "	modify wiliki.css to customize the WiLiKi's look"
	ewarn
	ewarn " http://localhost/cgi-bin/wiliki.cgi"
	ewarn

	webapp_pkg_postinst
}
