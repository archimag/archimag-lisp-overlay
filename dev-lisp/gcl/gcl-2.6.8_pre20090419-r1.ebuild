# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2

#removing flag-o-matic results in make install failing due to a segfault
inherit elisp-common flag-o-matic

DESCRIPTION="GNU Common Lisp"
HOMEPAGE="http://www.gnu.org/software/gcl/gcl.html"
SRC_URI="mirror://gentoo/${P}.tar.bz2"

LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="+ansi debug doc emacs +readline tk X"

# See bug #205803
RESTRICT="strip"

RDEPEND="emacs? ( virtual/emacs )
	readline? ( sys-libs/readline )
	>=dev-libs/gmp-4.1
	tk? ( dev-lang/tk )
	X? ( x11-libs/libXt x11-libs/libXext x11-libs/libXmu x11-libs/libXaw )
	virtual/latex-base"
DEPEND="${RDEPEND}
	doc? ( virtual/texi2dvi )
	>=app-text/texi2html-1.64
	>=sys-devel/autoconf-2.52"

src_prepare() {
	# The LANG vars aren't reset early enough so when sed tries to use [a-zA-Z] in
	# option parsing, it may break.
	epatch "${FILESDIR}"/${P}-configure.patch
}

src_configure() {
	local myconfig
	if use tk; then
		myconfig="${myconfig} --enable-tkconfig=/usr/lib --enable-tclconfig=/usr/lib"
	fi
	myconfig="${myconfig} \
		--enable-dynsysgmp \
		--disable-xdr
		$(use_enable readline) \
		$(use_with X x) \
		$(use_enable debug) \
		$(use_enable ansi)"

	einfo "Configuring with the following:
${myconfig}"
	econf ${myconfig}
}

src_compile() {
	emake -j1
	sed -e 's,@EXT@,,g' debian/in.gcl.1 > gcl.1
}

src_test() {
	local make_ansi_tests_clean="rm -f test.out *.fasl *.o \
	*.so *~ *.fn *.x86f *.fasl *.ufsl"
	if use ansi; then
		cd ansi-tests

		( make clean && make test-unixport ) \
		|| die "make ansi-tests failed!"

		cat "${FILESDIR}/bootstrap-gcl" \
		| ../unixport/saved_ansi_gcl

		cat "${FILESDIR}/bootstrap-gcl" \
		|sed s/bootstrapped_ansi_gcl/bootstrapped_r_ansi_gcl/g \
		| ./bootstrapped_ansi_gcl

		( ${make_ansi_tests_clean} && \
		echo "(load \"gclload.lsp\")" \
		| ./bootstrapped_r_ansi_gcl ) \
		|| die "Phase 2, bootstraped compiler failed in tests"

	else

		ewarn "Upstream provides tests only for ansi-gcl."
		ewarn "Please emerge with ansi USE flag enabled"
		ewarn "if you wnat to run the ansi tests."

		cat "${FILESDIR}/bootstrap-gcl" \
		| sed s/bootstrapped_ansi_gcl/bootstrapped_gcl/g \
		| unixport/saved_gcl

		cat "${FILESDIR}/bootstrap-gcl" \
		| sed s/bootstrapped_ansi_gcl/bootstrapped_r_gcl/g \
		| ./bootstrapped_gcl

		for x in "./bootstrapped_r_gcl" "unixport/saved_gcl" ; do
			echo "(compiler::emit-fn t)" \
				| ${x} \
				|| die "Phase 2, bootstraped compiler failed in tests"
		done
	fi
}

src_install() {
	emake DESTDIR="${D}" install

	# the build system need to be seriously patched
	# to install docs into the proper places
	rm -rf "${D}"/usr/share/{doc,info,emacs,lib/info}

	if use emacs; then
		mv elisp/add-default.el 50${PN}-gentoo.el
		elisp-site-file-install 50${PN}-gentoo.el
		elisp-install ${PN} elisp/*.el
	fi

	if use doc; then
		dodoc info/*.dvi
		dodoc xgcl-2/dwdoc.pdf
		dohtml -r xgcl-2/dwdoc
	fi

	dodoc readme* RELEASE* ChangeLog* doc/*
	doman gcl.1
	# FIXME: info files are broken: "Cannot find node `Top'"
	# OTOH, Konqueror has no problem with them
	doinfo info/*.info*
}
