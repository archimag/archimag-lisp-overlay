# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

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

# If clisp is selected, we need at least dev-lisp/clisp-2.38-r2

RDEPEND="${DEPEND}
	emacs? ( app-emacs/slime )
	!clisp? ( !sbcl? ( !amd64? ( dev-lisp/cmucl ) ) )
	clisp? ( >=dev-lisp/clisp-2.38-r2 )
	sbcl?  ( dev-lisp/sbcl )"

pkg_setup() {
	if use clisp; then
		if built_with_use dev-lisp/clisp X; then
			if built_with_use dev-lisp/clisp new-clx; then
				while read line; do ewarn "${line}"; done <<'EOF'
CLISP needs MIT-CLX support built-in to work with StumpWM. Your CLISP
has been built with support for NEW-CLX which may not work properly
with StumpWM.  Emerge dev-lisp/clisp with "X -new-clx" in USE.
EOF
			fi
		else
			die "You need to build dev-lisp/clisp with USE='X -new-clx'"
		fi
	fi
}

src_compile() {
	sed "s,@PACKAGE_VERSION@,${PV},g" version.lisp.in > version.lisp
	use doc && makeinfo stumpwm.texi
	if use emacs; then
		cd contrib
		elisp-comp *.el || die "Cannot compile contrib Elisp files"
	fi
}

src_install() {
	common-lisp-install *.{lisp,asd} contrib/*.lisp
	common-lisp-symlink-asdf
	elisp-install / contrib/*.el{,c} || die "Cannot install contrib Elisp files"
	cp "${FILESDIR}"/README.Gentoo . && sed -i "s:@VERSION@:${PV}:" README.Gentoo
	dodoc README NEWS ChangeLog README.Gentoo contrib/stumpish
	use doc && doinfo stumpwm.info
}

pkg_postinst() {
	while read line; do einfo ${line}; done < "${ROOT}"/usr/share/doc/${P}/README.Gentoo
}
