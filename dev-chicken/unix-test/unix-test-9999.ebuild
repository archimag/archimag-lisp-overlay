# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

NON_TRUNK=yes

inherit eggs-svn

eggs-svn-doc_maker() {
	ln -s . unix-test
	csi -s doc.scm > unix-test.html
	rm unix-test
}

DESCRIPTION="test(1) equivalence procedures."

LICENSE="BSD"
KEYWORDS="~x86"

DEPEND="dev-chicken/eggdoc"
