# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2

inherit common-lisp-2 eutils elisp

DESCRIPTION="Stumpwm is a tiling, keyboard driven X11 Window Manager written entirely in Common Lisp."
HOMEPAGE="http://www.nongnu.org/stumpwm/"
SRC_URI="http://download.savannah.nongnu.org/releases/stumpwm/${P}.tgz"
LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~amd64 ~x86"
IUSE="sbcl clisp emacs doc"

DEPEND="dev-lisp/cl-ppcre
		sbcl? ( dev-lisp/clx )
		doc? ( sys-apps/texinfo )"

RDEPEND="${DEPEND}
	emacs? ( app-emacs/slime )
	!sbcl? ( !clisp? ( dev-lisp/openmcl ) )
	!sbcl? ( clisp? ( >=dev-lisp/clisp-2.38-r2[X,-new-clx] ) )
	sbcl?  ( dev-lisp/sbcl )"

src_configure() {
	sed "s,@PACKAGE_VERSION@,${PV},g" version.lisp.in > version.lisp
	mv stumpwm.texi.in stumpwm.texi
}

src_compile() {
	if use doc ; then
		makeinfo stumpwm.texi || die "Cannot build info focs"
	fi
	if use emacs ; then
		elisp-compile contrib/*.el || die "Cannot compile contrib Elisp files"
	fi
}

src_install() {
	common-lisp-install *.{lisp,asd} contrib/*.lisp
	common-lisp-symlink-asdf
	if use emacs; then
		elisp-install / contrib/*.el{,c} || die "Cannot install contrib Elisp files"
	fi
	cp "${FILESDIR}"/README.Gentoo . && sed -i "s:@VERSION@:${PV}:" README.Gentoo
	dodoc README NEWS ChangeLog README.Gentoo contrib/stumpish
	use doc && doinfo stumpwm.info
}

pkg_postinst() {
	while read line; do elog ${line}; done < "${ROOT}"/usr/share/doc/${P}/README.Gentoo
}
