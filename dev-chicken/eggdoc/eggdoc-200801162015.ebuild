# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eggs

DESCRIPTION="An egg documentation tool."

LICENSE="BSD"
KEYWORDS="~x86"

DEPEND="dev-chicken/sxml-transforms
	dev-chicken/doctype"
RDEPEND="${DEPEND}"
