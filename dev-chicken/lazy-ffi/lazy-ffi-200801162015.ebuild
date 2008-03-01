# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

OLD_EGGPAGE="yes"

inherit eggs

DESCRIPTION="A Foreign Function Interface for lazy people."

LICENSE="BSD"
KEYWORDS="-*"

DEPEND="dev-chicken/easyffi
        dev-chicken/silex
	dev-libs/libffi"
RDEPEND="${DEPEND}"
