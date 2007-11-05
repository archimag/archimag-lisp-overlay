# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit java-pkg-2

DESCRIPTION="Kawa, the Java-based Scheme system & Language Framework"
HOMEPAGE="http://www.gnu.org/software/kawa/"
my_PV="1.9.1"
my_Pname="kawa"
XQTS_Ver="_1_0_2"
S=${WORKDIR}/kawa-${my_PV}
SRC_URI="http://ftp.ntua.gr/mirror/gnu/kawa/kawa-${my_PV}.tar.gz
		xqtests? ( http://www.w3.org/XML/Query/test-suite/XQTS${XQTS_Ver}.zip )"


LICENSE="MIT"
SLOT="0"
KEYWORDS="~x86 ~amd64"
IUSE="frontend krl sax echo2 swt servlets awt xml jemacs xqtests"

DEPEND=">=virtual/jdk-1.6
		frontend? ( sys-libs/readline )
		xqtests? ( app-arch/unzip )
		sax2? ( dev-java/sax )
		echo2? ( dev-java/echo2 )
		swt? ( >=dev-java/swt-3.3 )
		servlets? ( >=dev-java/servletapi-2.4 )"

xtestsuite="XQTS${XQTS_Ver}"

src_unpack () {
	#
	pwd;echo;echo
	#
	unpack kawa-${my_PV}.tar.gz
	#
	echo -e "\n ${S}\n "
	#
	if use xqtests; then
		dodir ${xtestsuite}
		cd ${xtestsuite}
		unpack XQTS${XQTS_Ver}.zip
	fi
	#
	ls -la;
	ls -la ..;
	ls -la ${S};
	#
}

src_compile() {
	#
	echo -e "\n src_compile_pwd: $(pwd) \n"
	#
local myconf
		myconf="$(use_enable frontend kawa-frontend) \
		$(use_enable xml) \
		$(use_enable krl brl) \
		$(use_enable echo2) \
		$(use_enable jemacs) \
		$(use_enable jemacs swing) \
		$(use_with servlets servlet\
		$(java-pkg_getjar servletapi-2.4 servlet-api.jar)) \
		$(use_with swt swt\
		$(java-pkg_getjar swt-3 swt.jar)) \
		$(use_with awt) \
		$(use_with xqtests XQTS\
		${WORKDIR}/${xtestsuite}) \
		$(use_with sax sax2)" 

#
echo -e "\n Configure flags: $myconf \n" 
#

econf ${myconf} || die "econf failed."

# without --jobs=1 it fails
emake -j1 || die "emake failed."
}

src_test () {
#	emake -j1 check
if emake -j1 check -n &> /dev/null; then
	vecho ">>> Test phase [check]: ${CATEGORY}/${PF}"
	if ! emake -j1 check; then
		hasq test $FEATURES && die "Make check failed. See above for details."
		hasq test $FEATURES || eerror "Make check failed. See above for details."
	fi
fi
	
}

src_install () {
	#
	echo -e "\n src_compile_pwd: $(pwd) \n"
	#
	#einstall || die "einstall failed."
	#rm -Rv ${D}/usr/share/java
	#rm -Rv ${D}/usr/bin/

	java-pkg_newjar kawa-${my_PV}.jar

	# maybe repl.class -> kawa.repl
	java-pkg_dolauncher "kawa" --main kawa.repl
	java-pkg_dolauncher "qexo" --main kawa.repl --pkg_args \
		"--xquery"
	java-pkg_dolauncher "kawa-cgi-servlet" --main \
		gnu.kawa.servlet.CGIServletWrapper

	if use jemacs; then
		java-pkg_dolauncher "jemacs" --main \
			gnu.jemacs.lang.ELisp
	fi
	
	dodoc ChangeLog TODO README NEWS
	doinfo doc/kawa.info*
	cp doc/kawa.man doc/kawa.2
	cp doc/qexo.man doc/qexo.2
	doman doc/*.2


}
