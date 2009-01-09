# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

OLD_EGGPAGE="yes"

inherit eggs

DESCRIPTION="Chicken-Scheme interface to UNIX domain sockets."

LICENSE="BSD"
KEYWORDS="~x86 ~amd64"

DEPEND="dev-chicken/easyffi"
RDEPEND="${DEPEND}"