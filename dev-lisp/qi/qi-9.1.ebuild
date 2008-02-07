# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

DESCRIPTION="Qi is an award-winning Lisp-based functional programming language that offers the best of Common Lisp with the advantages of pattern matching, l calculus consistency, and optional static type checking. It uses sequent calculus notation to define types, and has the most powerful type system of any existing functional language, including ML and Haskell."
HOMEPAGE="http://www.lambdassociates.org/"
SRC_URI="http://www.lambdassociates.org/Download/Qi${PV}.zip"
LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~amd64"

DEPEND="dev-lisp/clisp" # dev-lisp/sbcl )"
RDEPEND="${DEPEND}"

S="${WORKDIR}/Qi ${PV}"

src_compile() {
#	sbcl <<< '(LOAD "install.txt")'
	clisp <<< '(LOAD "install.txt")'
}

src_install() {
#	install_sbcl
	install_clisp

	dolib startup.txt
}

install_clisp() {
	newbin Qi-Linux-CLisp qi
	dolib lispinit.mem
}

# install_sbcl() {
# 	newbin Qi-Linux-SBCL.bat qi
# }
