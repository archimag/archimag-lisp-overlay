# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

OLD_EGGPAGE="yes"

inherit eggs

DESCRIPTION="Unicode support."

LICENSE="BSD"
KEYWORDS="~x86"

DEPEND="dev-chicken/syntax-case
        dev-chicken/iset"
RDEPEND="${DEPEND}"
