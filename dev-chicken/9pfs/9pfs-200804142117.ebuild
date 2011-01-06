# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EGG_NAME="9p"

inherit eggs

DESCRIPTION="A pure Scheme implementation of the 9p networked filesystem protocol."

LICENSE="BSD"
KEYWORDS="~x86 ~amd64"

DEPEND="dev-chicken/iset"
RDEPEND="${DEPEND}"
