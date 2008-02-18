# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="1"

inherit eggs

DEPEND="dev-chicken/srfi37"
RDEPEND="${DEPEND}"

DESCRIPTION="Chicken-Scheme command-line argument handling, on top of SRFI 37."

LICENSE="BSD"
KEYWORDS="~x86"
