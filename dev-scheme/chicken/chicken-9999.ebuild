# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit subversion multilib elisp-common

DESCRIPTION="Chicken is a Scheme interpreter and native Scheme to C compiler"
HOMEPAGE="http://www.call-with-current-continuation.org/"

ESVN_REPO_URI="http://galinha.ucpel.tche.br/svn/chicken-eggs/chicken/trunk"
ESVN_OPTIONS="--username=anonymous --password= --non-interactive"

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
	sed -i -e "s:/lib:/$(get_libdir):g" defaults.make
}

src_compile() {
	unset A

	set > /tmp/envvars

	OPTIONS="PLATFORM=linux PREFIX=/usr"

	# all this is necessary for bootstrapping from svn. yes, I asked :P
	emake ${OPTIONS} confclean || die
	emake ${OPTIONS} spotless  || die
	emake ${OPTIONS} bootstrap || die
	emake ${OPTIONS} confclean || die
	OPTIONS="${OPTIONS} USE_HOST_PCRE=1"
	emake ${OPTIONS} C_COMPILER_OPTIMIZATION_OPTIONS="${CFLAGS}" CHICKEN=./chicken-boot || die

	if use emacs; then
		elisp-compile hen.el || die
	fi
}

RESTRICT=test

src_install() {
	# just in case..
	unset A

	emake ${OPTIONS} DESTDIR="${D}" install || die
	dodoc ChangeLog* NEWS
	dohtml -r html/
	rm -rf "${D}"/usr/share/chicken/doc

	keepdir /usr/$(get_libdir)/chicken/3

	if use emacs; then
		elisp-install ${PN} hen.{el,elc} || die
		elisp-site-file-install "${FILESDIR}"/${SITEFILE} || die
	fi
}

pkg_postinst() {
	use emacs && elisp-site-regen
}

pkg_postrm() {
	use emacs && elisp-site-regen
}
