# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eggs eutils

DESCRIPTION="A Foreign Function Interface for lazy people, using gcc's libffi."

LICENSE="BSD"
KEYWORDS="~x86"

DEPEND="dev-chicken/easyffi
		dev-chicken/silex
		>=sys-devel/gcc-3.3"
RDEPEND="${DEPEND}"

pkg_setup() {
	if ! built_with_use sys-devel/gcc libffi; then
		eerror "You need to recompile sys-devel/gcc with"
		eerror "USE=libffi before you can install lazy-ffi."
		die "please recompile gcc with USE=libffi and try again."
	fi
}
