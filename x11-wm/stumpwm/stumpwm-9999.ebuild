# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-2 glo-utils eutils elisp-common git

DESCRIPTION="Stumpwm is a tiling, keyboard driven X11 Window Manager written entirely in Common Lisp."
HOMEPAGE="http://www.nongnu.org/stumpwm/"
EGIT_REPO_URI="git://git.savannah.nongnu.org/stumpwm.git"

LICENSE="GPL-2"
SLOT="0"
KEYWORDS=""
IUSE="doc sbcl clisp source emacs"

RESTRICT="strip"

RDEPEND="dev-lisp/cl-ppcre
		sbcl? ( >=dev-lisp/clx-0.7.3_p20081030 )
		>=dev-lisp/cl-launch-2.11-r1
		!sbcl? ( !clisp? ( >=dev-lisp/sbcl-1.0.32 ) )
		!sbcl? ( clisp? ( >=dev-lisp/clisp-2.44[X,new-clx] ) )
		sbcl?  ( >=dev-lisp/sbcl-1.0.32 )
		emacs? ( virtual/emacs app-emacs/slime )"
DEPEND="${RDEPEND}
		sys-apps/texinfo
		doc? ( virtual/texi2dvi )"

SITEFILE=70${PN}-gentoo.el

src_prepare() {
	# cl-launch doesn't like .git, don't know why
	rm -rf .git
	epatch "${FILESDIR}"/${PV}-gentoo-fix-asd-deps.patch
	epatch "${FILESDIR}"/${PV}-gentoo-remove-superfluous-workarounds.patch
}

src_configure() {
	sed "s,@PACKAGE_VERSION@,${PV},g" version.lisp.in > version.lisp
	mv stumpwm.texi.in stumpwm.texi
}

src_compile() {
	addwrite /var/cache/cl-launch
	LISP_FASL_CACHE=/var/cache/cl-launch \
		cl-launch.sh \
		--lisp $(glo_best_flag sbcl clisp) \
		--wrap '
SBCL_OPTIONS="--noinform --userinit /dev/null"
CLISP_OPTIONS="-ansi -K full -norc --quiet"' \
		--path "${CLSOURCEROOT}/clx" \
		--path "${CLSOURCEROOT}/cl-ppcre" \
		--path-current \
		--system stumpwm --dump stumpwm.bin \
		|| die "Cannot create stumpwm binary"
	if use emacs ; then
		elisp-compile contrib/*.el || die "Cannot compile contrib Elisp files"
	fi
	makeinfo ${PN}.texi || die "Cannot build info focs"
	if use doc ; then
		VARTEXFONTS="${T}"/fonts \
			texi2pdf ${PN}.texi || die "Cannot build PDF docs"
	fi
}

src_install() {
	common-lisp-export-impl-args $(glo_best_flag sbcl clisp)
	dobin stumpwm.bin contrib/stumpish
	make_wrapper stumpwm "/usr/bin/stumpwm.bin ${CL_NORC} ${CL_EVAL} '(stumpwm:stumpwm \":0\")'"
	make_session_desktop StumpWM /usr/bin/stumpwm

	if use emacs; then
		elisp-install ${PN} contrib/*.el{,c} || die "Cannot install contrib Elisp files"
		elisp-site-file-install "${FILESDIR}"/${SITEFILE} \
			|| die "elisp-site-file-install failed"
	fi

	cp "${FILESDIR}"/README.Gentoo . && sed -i "s:@VERSION@:${PV}:" README.Gentoo
	dodoc NEWS README README.Gentoo
	doinfo ${PN}.info
	use doc && dodoc ${PN}.pdf

	docinto examples ; dodoc sample-stumpwmrc.lisp

	if use source; then
		rm sample-stumpwmrc.lisp
		common-lisp-install *.{lisp,asd} contrib/*.lisp
		common-lisp-symlink-asdf
	fi
}

pkg_postinst() {
	use emacs && elisp-site-regen
}

pkg_postrm() {
	use emacs && elisp-site-regen
}
