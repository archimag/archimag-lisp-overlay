# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

OLD_EGGPAGE="yes"

inherit eggs

DESCRIPTION="Chicken-Scheme interface to Python"

LICENSE="GPL-3"
KEYWORDS="~x86"

DEPEND="dev-lang/python
	dev-chicken/easyffi
	dev-chicken/utf8
	dev-chicken/eggdoc"
RDEPEND="${DEPEND}"
