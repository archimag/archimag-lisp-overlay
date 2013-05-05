# Copyright 1999-2013 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=5

inherit common-lisp-3

MY_PV="v${PV}"

DESCRIPTION="Functions to partition a Common Lisp sequence into multiple result sequences"
HOMEPAGE="http://www.cliki.net/SPLIT-SEQUENCE"
SRC_URI="https://github.com/sharplispers/${PN}/archive/${MY_PV}.tar.gz -> ${P}.tar.gz"

LICENSE="public-domain"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		dev-lisp/fiveam"
