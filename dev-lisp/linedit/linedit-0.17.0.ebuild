# Copyright 1999-2013 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=5

inherit common-lisp-3 eutils flag-o-matic multilib toolchain-funcs

MY_P="${PN}_${PV}"

DESCRIPTION="Linedit is a readline-style library written in Common Lisp."
HOMEPAGE="http://www.common-lisp.net/project/linedit/"
SRC_URI="http://common-lisp.net/project/${PN}/files/${MY_P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="!dev-lisp/cl-${PN}
		dev-lisp/osicat
		dev-lisp/terminfo
		dev-lisp/uffi"

S="${WORKDIR}/${MY_P}"

@cc() {
	local cc=$(tc-getCC)
	echo "${cc}" "${@}"
	"${cc}" "${@}"
}

create_uffi_loader() {
	cat > uffi-loader.lisp <<-EOF
	;;;; -*- mode: lisp; syntax: common-lisp; indent-tabs-mode: nil; base: 10; package: linedit -*-
	(in-package :linedit)
                                                             
	(uffi:load-foreign-library #p"/usr/$(get_libdir)/linedit/signals.so")
	(uffi:load-foreign-library #p"/usr/$(get_libdir)/linedit/terminal_glue.so")
	EOF
}

src_prepare() {
	epatch "${FILESDIR}"/${PV}-${PN}.asd-uffi-glue-gentoo.patch
	create_uffi_loader
}

src_compile() {
	strip-flags
	for filename in signals terminal_glue ; do
		@cc "${filename}.c" ${CFLAGS} ${LDFLAGS} \
	    	-fPIC -DPIC -shared -Wl,-soname="${filename}" -o "${filename}.so" \
	       	|| die "Cannot compile ${filename}.c"
	done
}

src_install() {
	common-lisp-install-sources -t all *.lisp version.lisp-expr
	common-lisp-install-asdf
	exeinto "/usr/$(get_libdir)/${PN}"
	doexe *.so
}
