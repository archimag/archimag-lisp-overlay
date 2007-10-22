# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2 eutils

DEB_PV=1

DESCRIPTION="Common Lisp source code from Peter Norvig's Artificial Intelligence: A Modern Approach"
HOMEPAGE="http://aima.cs.berkeley.edu/ http://www.norvig.com/ http://packages.debian.org/unstable/devel/${PN}.html"
SRC_URI="mirror://gentoo/${PN}_${PV}.orig.tar.gz
	mirror://gentoo/${PN}_${PV}-${DEB_PV}.diff.gz"
LICENSE="Norvig"
SLOT="0"
KEYWORDS="~amd64 ~sparc x86"
IUSE=""
DEPEND=""

CLPACKAGE="aima"
CLSYSTEMS="aima"

src_unpack() {
	unpack ${A}
	epatch ${PN}_${PV}-${DEB_PV}.diff
	epatch "${FILESDIR}"/${PV}-defsystem-and-package-lock-gentoo.patch
}

src_install() {
	common-lisp-install aima.{asd,lisp}
	for module in agents language learning logic search uncertainty utilities; do
		find ${module} -type f -name \*.lisp -print | while read lisp; do \
			common-lisp-install "${lisp}"
		done
		mv ${module}/README.html README-${module}.html && dohtml README-${module}.html
	done
	common-lisp-symlink-asdf
	dohtml doc/*
	find "${D}" -type f -exec chmod 644 '{}' \;
}
