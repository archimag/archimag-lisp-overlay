# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A pure Common Lisp library to create, transform and render anti-aliased vectorial paths."
HOMEPAGE="http://projects.tuxee.net/cl-vectors"
SRC_URI="http://projects.tuxee.net/${PN}/files/${P}.tar.gz"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/zpb-ttf"

CLSYSTEMS="cl-aa-misc cl-aa cl-paths-ttf cl-paths cl-vectors"

src_unpack() {
	unpack ${A}
	sed -i "s:\\\$VERSION\\\$:${PV}:" "${S}"/*.asd
}
