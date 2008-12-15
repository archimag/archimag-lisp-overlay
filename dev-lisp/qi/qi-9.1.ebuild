# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

DESCRIPTION="Qi is a Lisp-based functional programming implemented in Common Lisp."
HOMEPAGE="http://www.lambdassociates.org/"
SRC_URI="http://www.lambdassociates.org/Download/Qi${PV}.zip"

LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~amd64"
IUSE=""

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
