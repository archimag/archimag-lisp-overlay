# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="1"

JAVA_PKG_IUSE="source"

inherit subversion eutils java-pkg-2

DESCRIPTION="Kawa, the Java-based Scheme system & Language Framework"
HOMEPAGE="http://www.gnu.org/software/kawa/"
XQTS_Ver="1_0_2"
SRC_URI="xqtests? ( http://www.w3.org/XML/Query/test-suite/XQTS_${XQTS_Ver}.zip )"
ESVN_REPO_URI="svn://sourceware.org/svn/kawa/trunk"

LICENSE="MIT public-domain
		 jemacs? ( GPL-2 )
		 krl? ( GPL-2 )"
SLOT="0"
KEYWORDS="~x86"
IUSE="+awt echo2 +frontend jemacs krl +sax servlets +swing swt +xml xqtests"

COMMON_DEPEND=">=virtual/jdk-1.5
			   frontend? ( sys-libs/readline:0 )
			   sax2? ( dev-java/sax:0 )
			   echo2? ( dev-java/echo2:0 )
			   swt? ( dev-java/swt:3 )
			   servlets? ( dev-java/servletapi:2.4 )"
DEPEND="${COMMON_DEPEND}
		xqtests? ( app-arch/unzip:0 )"
RDEPEND="${COMMON_DEPEND}"

xtestsuite="XQTS_${XQTS_Ver}"

src_unpack () {
	subversion_fetch || die

	if use xqtests; then
		mkdir ${WORKDIR}/${xtestsuite} || die
		cd ${WORKDIR}/${xtestsuite} || die
		unpack ${xtestsuite}.zip || die
	fi
}

src_compile() {
	# speeds up one-shot ebuilds.
	myconf="--disable-dependency-tracking"
	if use jemacs && ! use swing; then
		echo
		einfo "Although the swing USE flag is disabled you chose to enable jemacs,"
		einfo "so swing is enabled anyway."
		echo
		myconf="${myconf} --with-swing"
	else
		myconf="${myconf} $(use_with swing)"
	fi
	if use xqtests; then
		myconf="${myconf} $(use_with xqtests XQTS=${WORKDIR}/${xtestsuite})"
	fi
	if use servlets; then
		myconf="${myconf} --with-servlet=$(java-pkg_getjar servletapi-2.4 servlet-api.jar)"
	fi
	if use swt; then
		myconf="${myconf} --with-swt=$(java-pkg_getjar swt-3 swt.jar)"
	fi

	econf ${myconf} $(use_enable frontend kawa-frontend) \
		  $(use_enable xml) \
		  $(use_enable krl brl) \
		  $(use_enable echo2) \
		  $(use_enable jemacs) \
		  $(use_with awt) \
		  $(use_with sax sax2) || die "econf failed."

	emake || die "emake failed."
}

src_install () {
	emake DESTDIR="${D}" install || die
	rm -rv "${D}"/usr/share/java/ || die

	local SVN_PV=$(grep '^PACKAGE_VERSION' Makefile | sed -e 's/PACKAGE_VERSION = //')
	java-pkg_newjar kawa-${SVN_PV}.jar || die

	java-pkg_dolauncher "kawa" --main kawa.repl || die
	java-pkg_dolauncher "qexo" --main kawa.repl --pkg_args \
		"--xquery" || die
	java-pkg_dolauncher "kawa-cgi-servlet" --main \
		gnu.kawa.servlet.CGIServletWrapper || die
	if use jemacs; then
		java-pkg_dolauncher "jemacs" --main \
			gnu.jemacs.lang.ELisp || die
	fi

	use source && java-pkg_dosrc kawa/* gnu/*

	dodoc ChangeLog TODO README NEWS || die
	doinfo doc/kawa.info* || die
	cp doc/kawa.man doc/kawa.2 || die
	cp doc/qexo.man doc/qexo.2 || die
	doman doc/*.2 || die
}
