# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

ECVS_SERVER="armedbear-j.cvs.sourceforge.net:/cvsroot/armedbear-j"
if [ -z "${ECVS_BRANCH}" ]; then
	ECVS_BRANCH="HEAD"
fi
ECVS_MODULE="j"
ECVS_USER="anonymous"
ECVS_PASS=""
ECVS_CVS_OPTIONS="-dP"

inherit eutils java-utils-2 cvs

DESCRIPTION="Armed Bear Common Lisp is a Common Lisp implementation for the JVM."
HOMEPAGE="http://armedbear.org/abcl.html"

LICENSE="GPL-2"
SLOT="0"
KEYWORDS=""
IUSE="jad clisp cmucl"

RDEPEND=">=virtual/jdk-1.4
	jad? ( dev-java/jad-bin )"
DEPEND="${RDEPEND}
	!cmucl? ( !clisp? ( dev-lisp/sbcl ) )
	cmucl? ( dev-lisp/cmucl )
	clisp? ( dev-lisp/clisp )"

S=${WORKDIR}/${ECVS_MODULE}

src_unpack() {
	cvs_src_unpack

	cat > "${S}"/customizations.lisp <<EOF
(in-package #:build-abcl)
(setf
*javac-options* "-g"
*jdk* "$(java-config --jdk-home)/"
*java-compiler* "javac"
*jar* "jar")
EOF
	echo ; einfo "Building with the following customizations.lisp:"
	while read line; do einfo "${line}"; done < "${S}"/customizations.lisp
	cat > "${S}"/build.lisp <<EOF
(load "build-abcl")
(funcall 'build-abcl:build-abcl :clean t :full t)
#+sbcl (sb-ext:quit)
#+clisp (ext:quit)
#+cmu (ext:quit)
EOF
}

src_compile() {
	local lisp_compiler lisp_compiler_args
	if use clisp; then
		lisp_compiler="clisp"
		lisp_compiler_args="-ansi build.lisp"
	elif use cmucl; then
		lisp_compiler="lisp"
		lisp_compiler_args="-noinit -nositeinit -batch -load build.lisp"
	else
		lisp_compiler="sbcl"
		lisp_compiler_args="--sysinit /dev/null --userinit /dev/null \
							--disable-debugger --load build.lisp"
	fi
	${lisp_compiler} ${lisp_compiler_args} || die "Failed to compiled ABCL"
}

src_install() {
	exeinto /usr/$(get_libdir)/abcl
	doexe src/org/armedbear/lisp/libabcl.so
	java-pkg_dojar abcl.jar
	java-pkg_dolauncher "${PN}" \
		--main "org.armedbear.lisp.Main" \
		--java_args "-server -Xrs -Djava.library.path=/usr/$(get_libdir)/${PN}/"
	dodoc README
}
