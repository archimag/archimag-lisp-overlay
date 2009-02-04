# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit eutils subversion java-pkg-2 java-ant-2

DESCRIPTION="Armed Bear Common Lisp is a Common Lisp implementation for the JVM."
HOMEPAGE="http://common-lisp.net/project/armedbear/"
ESVN_REPO_URI="svn://common-lisp.net/project/armedbear/svn/trunk/j"

LICENSE="GPL-2"
SLOT="0"
KEYWORDS=""
IUSE="jad"

DEPEND=">=virtual/jdk-1.5"
RDEPEND=">=virtual/jre-1.5
	jad? ( dev-java/jad-bin )"

src_compile() {
	eant abcl.compile || die "Can't compile ABCL"
	eant abcl.jar || die "Can't make ABCL jar archive"
}

src_install() {
	java-pkg_dojar dist/abcl.jar
	java-pkg_dolauncher ${PN} --java_args "-server -Xrs" --main org.armedbear.lisp.Main
	dodoc README || die "Can't install README"
}
