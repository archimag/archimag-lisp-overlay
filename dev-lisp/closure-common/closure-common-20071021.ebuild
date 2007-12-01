# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_PV=${PV:0:4}-${PV:4:2}-${PV:6:2}

DESCRIPTION="closure-common is a helper library for Closure and Closure XML implementing runes."
HOMEPAGE="http://www.cliki.net/closure-common"
SRC_URI="http://common-lisp.net/project/cxml/download/${PN}-${MY_PV}.tgz"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

DEPEND="dev-lisp/trivial-gray-streams"

S="${WORKDIR}"/${PN}-${MY_PV}
