# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=1

#removing flag-o-matic results in make install failing due to a segfault
inherit elisp-common flag-o-matic

DEB_PV=36
MY_PV="2.6.8"

DESCRIPTION="GNU Common Lisp"
HOMEPAGE="http://www.gnu.org/software/gcl/gcl.html"
SRC_URI="mirror://debian/pool/main/g/gcl/gcl_${PV}.orig.tar.gz
	mirror://debian/pool/main/g/gcl/gcl_${PV}-${DEB_PV}.diff.gz"

LICENSE="GPL-2"
SLOT="0"
#Tested on ~x86 and ~amd64 only
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="emacs +readline debug X tk doc +ansi"

RESTRICT="strip"

RDEPEND="emacs? ( virtual/emacs )
	readline? ( sys-libs/readline )
	>=dev-libs/gmp-4.1
	tk? ( dev-lang/tk )
	X? ( x11-libs/libXt x11-libs/libXext x11-libs/libXmu x11-libs/libXaw )
	virtual/latex-base"
DEPEND="${RDEPEND}
	>=app-text/texi2html-1.64
	>=sys-devel/autoconf-2.52"

src_unpack() {
	unpack ${A} && cd "${S}"
	epatch ../gcl_${PV}-${DEB_PV}.diff
}

src_compile() {
	local myconfig=""
	if use tk; then
		myconfig="${myconfig} \
		--enable-tkconfig=/usr/lib \
		--enable-tclconfig=/usr/lib"
	fi
	myconfig="${myconfig} \
	$(use_enable readline readline) \
	$(use_with X x) \
	$(use_enable debug debug) \
	$(use_enable ansi ansi) \
	--enable-infodir=/usr/share/info \
	--enable-emacsdir=/usr/share/emacs/site-lisp/gcl"

	einfo "Configuring with the following:${myconfig}"
	econf ${myconfig} || die "Configure failed"
	make || die "make failed"
	sed -e 's,@EXT@,,g' debian/in.gcl.1 >gcl.1
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
	make DESTDIR="${D}" install || die "make install failed"
	mv -v "${D}"/default.el elisp/

	if use emacs; then
		mv -v elisp/add-default.el "${T}"/50gcl-gentoo.el
		elisp-site-file-install "${T}"/50gcl-gentoo.el
		elisp-install ${PN} elisp/*
		chmod -Rv 0644 "${D}"/usr/share/emacs/site-lisp/gcl/*
	else
		rm -Rv "${D}"/usr/share/emacs
	fi

	if use doc; then
		mv -v "${D}"/usr/share/doc/dwdoc.* "${D}"/usr/share/doc/dwdoc
		mv -v "${D}"/usr/share/doc/*.dvi "${D}"/usr/share/doc/dwdoc
		mkdir -pv "${D}"/usr/share/doc/${PF}/tex
		cp -Rv "${D}"/usr/share/doc/dwdoc "${D}"/usr/share/doc/${PF}/tex
		rm -Rv "${D}"/usr/share/doc/dwdoc
	else
		rm -Rv "${D}"/usr/share/doc/dwd*
	fi


	cat "${D}"/usr/bin/gcl
	dosed /usr/bin/gcl
	cat "${D}"/usr/bin/gcl
	fperms 0755 /usr/bin/gcl

	dosed /usr/lib/${PN}-${MY_PV}/gcl-tk/gcltksrv
	fperms 0755 /usr/lib/${PN}-${MY_PV}/gcl-tk/gcltksrv

	rm -Rv doc/CVS
	dodoc readme* RELEASE* ChangeLog* doc/*

	for i in "${D}"/usr/share/doc/gcl-{tk,si}; do
		mv -v $i "${D}"/usr/share/doc/${PF}
	done

	doman gcl.1
	doinfo info/*.info*
	find "${D}"/usr/lib/gcl-${MY_PV}/ -type f \( -perm 640 -o -perm 750 \) -exec chmod -v 0644 '{}' \;
}

pkg_postinst() {
	use emacs && elisp-site-regen
}

pkg_postrm() {
	use emacs && elisp-site-regen
}

