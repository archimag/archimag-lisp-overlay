# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="3"

inherit eutils multilib

DESCRIPTION="Chicken is a Scheme interpreter and native Scheme to C compiler"
HOMEPAGE="http://www.call-cc.org/"
SRC_URI="http://code.call-cc.org/releases/${PV}/${P}.tar.gz"

LICENSE="BSD"
SLOT="0"
KEYWORDS="~alpha ~amd64 ~ppc ~ppc64 ~x86"
IUSE="emacs"

DEPEND="sys-apps/texinfo
		emacs? ( virtual/emacs )"
RDEPEND="emacs? ( virtual/emacs app-emacs/scheme-complete )"

## the major mode for Chicken source
SITEFILE=50hen-gentoo.el

src_prepare() {
	#Because chicken's Upstream have a custom to use variables that also
	#portage uses. Fixes #393561
	unset A ARCH
	sed "s,\$(PREFIX)/lib,\$(PREFIX)/$(get_libdir)," -i defaults.make || die "sed failed"
	sed "s,\$(DATADIR)/doc,\$(SHAREDIR)/doc/${P}," -i defaults.make || die "sed failed"
}

src_compile() {
	OPTIONS="PLATFORM=linux PREFIX=/usr"
	#Because chicken's Upstream have a custom to use variables that also
	#portage uses. Fixes #393561
	unset A ARCH

	#upstream does not yet support parallel builds, bug 265881
	#LINKER_OPTIONS doesn't seem to be incorporated into Makefile.linux -
	#might have to patch it...
	emake -j1 ${OPTIONS} C_COMPILER_OPTIMIZATION_OPTIONS="${CFLAGS}" \
		LINKER_OPTIONS="${LDFLAGS}" \
		HOSTSYSTEM="${CBUILD}" || die "emake failed"
}

# chicken's testsuite is not runnable before install
# upstream has been notified of the issue
RESTRICT=test

src_install() {
	#Because chicken's Upstream have a custom to use variables that also
	#portage uses. Fixes #393561
	unset A ARCH

	#upstream does not yet support parallel builds, bug 265881
	emake -j1 ${OPTIONS} DESTDIR="${D}" HOSTSYSTEM="${CBUILD}" \
		LINKER_OPTIONS="${LDFLAGS}" \
	install || die

	rm "${D}"/usr/share/doc/${P}/LICENSE || die
	dodoc NEWS || die

	if use emacs; then
		elisp-install ${PN} hen.{el,elc} || die
		elisp-site-file-install "${FILESDIR}"/${SITEFILE} || die
	fi
}

pkg_postinst()
{
	#Because we pass DESTDIR= to make back in src_install(), the build
	#won't automatically run chicken-install -update-db at that time.
	chicken-install -update-db
}
