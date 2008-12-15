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
IUSE="emacs doc"
#IUSE="sbcl clisp emacs doc"

RESTRICT="strip"

DEPEND="dev-lisp/cl-ppcre
		dev-lisp/clx
		>=dev-lisp/cl-launch-2.11-r1
		>=dev-lisp/sbcl-1.0.22
		emacs? ( app-emacs/slime )
		doc? ( sys-apps/texinfo )"
# 		!sbcl? ( !clisp? ( >=dev-lisp/sbcl-1.0.22 ) )
# 		!sbcl? ( clisp? ( >=dev-lisp/clisp-2.44[X,-new-clx] ) )
# 		sbcl?  ( >=dev-lisp/sbcl-1.0.22 )
RDEPEND="${DEPEND}"

WRAP_OPTS='
SBCL_OPTIONS="--no-sysinit --no-userinit"
# CLISP_OPTIONS="-ansi -K full -norc --verbose"
'

src_unpack() {
	unpack ${A}

	epatch "${FILESDIR}"/${PV}-gentoo-fix-asd-deps.patch
# 	epatch "${FILESDIR}"/${PV}-fix-clisp-syscalls-package.patch
}

src_configure() {
	sed "s,@PACKAGE_VERSION@,${PV},g" version.lisp.in > version.lisp
	mv stumpwm.texi.in stumpwm.texi
}

src_compile() {
# 	if use sbcl ; then
		LISP=sbcl ; NORC="--no-sysinit --no-userinit" ; EVAL=--eval
# 	elif use clisp ; then
# 		LISP=clisp ; NORC=-norc ; EVAL=-x
# 	else
# 		LISP=sbcl ; NORC="--no-sysinit --no-userinit" ; EVAL=--eval
# 	fi

	addwrite /var/cache/cl-launch
	LISP_FASL_CACHE=/var/cache/cl-launch \
		cl-launch.sh --lisp ${LISP} --wrap "${WRAP_OPTS}" \
		--path "${CLSYSTEMROOT}" --path-current \
		--system stumpwm --dump stumpwm.bin \
		|| die "Cannot create stumpwm binary"
	cat >> stumpwm <<EOF
#!/bin/sh

exec stumpwm.bin ${NORC} ${EVAL} '(stumpwm:stumpwm ":0")'
EOF
	if use emacs ; then
		elisp-compile contrib/*.el || die "Cannot compile contrib Elisp files"
	fi
	if use doc ; then
		makeinfo stumpwm.texi || die "Cannot build info focs"
	fi
}

src_install() {
	dobin stumpwm{,.bin} contrib/stumpish
	common-lisp-install *.{lisp,asd} contrib/*.lisp
	common-lisp-symlink-asdf
	if use emacs; then
		elisp-install / contrib/*.el{,c} || die "Cannot install contrib Elisp files"
	fi
	cp "${FILESDIR}"/README.Gentoo . && sed -i "s:@VERSION@:${PV}:" README.Gentoo
	dodoc README NEWS ChangeLog README.Gentoo
	use doc && doinfo stumpwm.info
}
