# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eggs

DESCRIPTION="Unicode support."

LICENSE="BSD"
KEYWORDS="~x86"

DEPEND="dev-chicken/syntax-case
        dev-chicken/iset"
RDEPEND="${DEPEND}"
