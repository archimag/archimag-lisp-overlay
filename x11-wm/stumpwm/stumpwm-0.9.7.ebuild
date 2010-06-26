# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-3 glo-utils eutils elisp-common autotools

DESCRIPTION="Stumpwm is a tiling, keyboard driven X11 Window Manager written entirely in Common Lisp."
HOMEPAGE="http://www.nongnu.org/stumpwm/"
SRC_URI="http://download.savannah.nongnu.org/releases/stumpwm/${P}.tgz"

LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc clisp ecl +sbcl source emacs"

RESTRICT="strip mirror"

RDEPEND="dev-lisp/cl-ppcre
		sbcl? ( >=dev-lisp/clx-0.7.3_p20081030 )
		>=dev-lisp/cl-launch-2.11-r1
		!sbcl? ( !clisp? ( !ecl? ( >=dev-lisp/sbcl-1.0.32 ) ) )
		!sbcl? ( !clisp? (  ecl? ( >=dev-lisp/ecls-10.4.1 ) ) )
		!sbcl? (  clisp? ( >=dev-lisp/clisp-2.44[X,new-clx] ) )
		sbcl?  ( >=dev-lisp/sbcl-1.0.32 )
		emacs? ( virtual/emacs app-emacs/slime )"
DEPEND="${RDEPEND}
		sys-apps/texinfo
		doc? ( virtual/texi2dvi )"

SITEFILE=70${PN}-gentoo.el

src_prepare() {
	epatch "${FILESDIR}"/${PV}-gentoo-fix-asd-deps.patch
	epatch "${FILESDIR}"/${PV}-gentoo-fix-configure.ac.patch
	eautoreconf
}

src_configure() {
	econf --with-lisp=$(glo_best_flag sbcl clisp ecl)
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
	common-lisp-export-impl-args $(glo_best_flag sbcl clisp ecl)
	dobin stumpwm.bin contrib/stumpish
	make_wrapper stumpwm "/usr/bin/stumpwm.bin ${CL_NORC} ${CL_EVAL} '(stumpwm:stumpwm \":0\")'"
	make_session_desktop StumpWM /usr/bin/stumpwm

	if use emacs; then
		elisp-install ${PN} contrib/*.el{,c} || die "Cannot install contrib Elisp files"
		elisp-site-file-install "${FILESDIR}"/${SITEFILE} \
			|| die "elisp-site-file-install failed"
	fi

	cp "${FILESDIR}"/README.Gentoo . && sed -i "s:@VERSION@:${PV}:" README.Gentoo
	dodoc README NEWS ChangeLog README.Gentoo
	doinfo ${PN}.info
	use doc && dodoc ${PN}.pdf

	docinto examples ; dodoc sample-stumpwmrc.lisp

	if use source; then
		rm sample-stumpwmrc.lisp
		common-lisp-install-sources *.lisp contrib/
		common-lisp-install-asdf ${PN}.asd
	fi
}

pkg_postinst() {
	use emacs && elisp-site-regen
}

pkg_postrm() {
	use emacs && elisp-site-regen
}
