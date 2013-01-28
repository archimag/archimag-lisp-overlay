# Copyright 1999-2012 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="4"

inherit eutils elisp-common

MY_PN=gambc
MY_PV=${PV//./_}
MY_P=${MY_PN}-v${MY_PV}

DESCRIPTION="Gambit-C is a native Scheme to C compiler and interpreter."
HOMEPAGE="http://www.iro.umontreal.ca/~gambit/"
SRC_URI="http://www.iro.umontreal.ca/~gambit/download/gambit/v${PV%.*}/source/${MY_P}.tgz"

LICENSE="|| ( Apache-2.0 LGPL-2.1 )"
SLOT="0"
#KEYWORDS="~amd64 ~ppc64 ~x86 ~amd64-linux ~x86-linux ~x86-macos"
KEYWORDS=""

DEPEND="emacs? ( virtual/emacs )
		doc? ( sys-apps/texinfo )"
RDEPEND=""

SITEFILE="50gambit-gentoo.el"

S=${WORKDIR}/${MY_P} #-devel

IUSE="emacs static gbootstrap debug noopts doc"

# 13Nov12 pchrist
# To check before this hits the tree:
# 1. what bootstrap target actually does
# 2. whether gboostrap use flag is ok to be used as local use flag
# 3. Doc, what is going on there, what if latex is not installed,
#    what if pdf2ps is not installed etc.
# 4. more testing on configure flags
# 5. there is -O1 optimization flag, probably disables user's CFLAGS , bad
# 6. check if emacs configuration is correct

src_configure() {
	#echo "------";
	#echo $USE;
	#echo "------";
	#die;
	local t=$(tc-getCC);
	local tt="${t##*-}"
	[[ "${tt}" == "gcc" ]] && echo yes || echo no
	econf \
		$(use_enable !static shared)  \
		$(use_enable debug) \
		$(use_enable debug profile) \
		$(use_enable debug coverage) \
		$([[ "${tt}" == "gcc" ]] \
			&& use !noopts \
			&& echo \
				"--enable-gcc-opts \
				--enable-c-opt" \
			|| echo \
				"--disable-gcc-opts \
				--disable-c-opt") \
		--docdir="${EPREFIX}"/usr/share/doc/${PF}  \
		--enable-single-host  \
		--disable-absolute-shared-libs
}

src_compile() {
	#emake bootstrap || die

	if use gbootstrap; then
		einfo "Starting bootstrap..."
		emake bootstrap || die "emake bootstrap failed"
		einfo "Cleaning..."
		emake bootclean || die "emake bootclean failed"
		einfo "Compiling in normal mode."
		emake  || die "emake failed the second time"
	else
		einfo "Compiling in normal mode."
		emake || die "emake failed"
	fi

	if use emacs; then
		elisp-compile misc/*.el || die "failed to compile elisp files"
	fi
}

src_install() {
	emake DESTDIR="${D}" install || die "emake install failed"
}

pkg_postinst() {
	use emacs && elisp-site-regen
}

pkg_postrm() {
	use emacs && elisp-site-regen
}
