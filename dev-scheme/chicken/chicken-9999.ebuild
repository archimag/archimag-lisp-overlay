# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header:

inherit subversion multilib elisp-common

DESCRIPTION="Chicken is a Scheme interpreter and native Scheme to C compiler"
HOMEPAGE="http://www.call-with-current-continuation.org/"

ESVN_REPO_URI="https://galinha.ucpel.tche.br/svn/chicken-eggs/chicken/trunk"
ESVN_OPTIONS="--non-interactive --username anonymous"

LICENSE="BSD"
SLOT="0"
KEYWORDS=""
IUSE="emacs"

DEPEND=">=dev-libs/libpcre-7.6
		sys-apps/texinfo
		emacs? ( virtual/emacs )"

SITEFILE=50hen-gentoo.el

src_unpack() {
	subversion_fetch || die
	cd "${S}"
	sed "s,/lib,/$(get_libdir),g" -i defaults.make
}

src_compile() {
	OPTIONS="PLATFORM=linux PREFIX=/usr"

	# all this is necessary for bootstrapping from svn. yes, I asked :P
	emake ${OPTIONS} confclean || die
	emake ${OPTIONS} spotless  || die
	emake ${OPTIONS} bootstrap || die
	emake ${OPTIONS} confclean || die
	emake ${OPTIONS} C_COMPILER_OPTIMIZATION_OPTIONS="$CFLAGS" \
		 USE_HOST_PCRE=1 CHICKEN=./chicken-boot || die

	use emacs && elisp-comp hen.el
}

RESTRICT=test

src_install() {
	# just in case..
	unset A

	emake ${OPTIONS} DESTDIR="${D}" CHICKEN=./chicken-boot install || die
	dodoc ChangeLog* NEWS
	dohtml -r html/
	rm -rf "${D}"/usr/share/chicken/doc

	if use emacs; then
		elisp-install ${PN} *.{el,elc}
		elisp-site-file-install "${FILESDIR}"/${SITEFILE}
	fi
}

pkg_postinst() {
	use emacs && elisp-site-regen
}

pkg_postrm() {
	use emacs && elisp-site-regen
}
