# Copyright 1999-2012 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=4

inherit base

if [[ ${PV} == "9999" ]] ; then
	ESVN_REPO_URI="https://swig.svn.sourceforge.net/svnroot/swig/trunk"
	ESVN_BOOTSTRAP="autogen.sh"
	inherit subversion
	KEYWORDS=""
else
	SRC_URI="mirror://sourceforge/${PN}/${P}.tar.gz"
	KEYWORDS="~alpha ~amd64 ~arm ~hppa ~ia64 ~mips ~ppc ~ppc64 ~s390 ~sh ~sparc ~x86 ~ppc-aix ~amd64-fbsd ~x86-fbsd ~ia64-hpux ~x86-interix ~amd64-linux ~x86-linux ~ppc-macos ~x64-macos ~x86-macos ~sparc-solaris ~x64-solaris ~x86-solaris"
fi

DESCRIPTION="Simplified Wrapper and Interface Generator"
HOMEPAGE="http://www.swig.org/"

LICENSE="GPL-3 as-is"
SLOT="0"
IUSE="ccache doc pcre"
RESTRICT="test"

DEPEND="pcre? ( dev-libs/libpcre )
	ccache? ( sys-libs/zlib )"
RDEPEND="${DEPEND}"

DOCS=( ANNOUNCE CHANGES CHANGES.current README TODO )

src_configure() {
	econf \
		$(use_enable ccache) \
		$(use_with pcre)
}

src_install() {
	default
	if use doc; then
		dohtml -r Doc/{Devel,Manual}
	fi
}
