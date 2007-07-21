# Copyright 1999-2006 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header$

DESCRIPTION="A new Lisp dialect"
HOMEPAGE="http://www.newlisp.org"
SRC_URI="mirror://sourceforge/newlisp/${P}.tgz"

LICENSE="GPL"
# please keep sorted
KEYWORDS="~x86"
IUSE="unicode readline tcltk"

DEPEND="readline? ( sys-libs/readline )
        tcltk? ( dev-lang/tk )"

src_compile() {
	use unicode && UTF8="_utf8" || UTF8=""
	use readline && READLINE="_readline" || READLINE=""
	emake -j1 linux${UTF8}${READLINE} || die "emake failed"
	emake -j1 linux_lib${UTF8} || die "emake failed"
}

src_install() {
	# patch Makefile to fix some directory paths
	sed -i -e '/-install .*html$/s:/doc/newlisp/:/doc/newlisp/html/:g' ${S}/Makefile
	sed -i -e '/-install .* modules/s:(datadir)/newlisp:(datadir)/newlisp/modules:g' ${S}/Makefile
	sed -i -e '/-install .* examples/s:(datadir)/newlisp:(datadir)/newlisp/examples:g' ${S}/Makefile
	sed -i -e 's:/doc/newlisp:/doc/$P:g' ${S}/Makefile

	# patch Makefile to fix typo 
	sed -i -e 's/crypt/crypto/g' ${S}/Makefile
	
	# Makefile assumes these directories are present
	mkdir -p ${D}/usr/bin
	mkdir -p ${D}/usr/share/man/man1
	mkdir -p ${D}/usr/share/doc/${P}/html
	mkdir -p ${D}/usr/share/newlisp/{modules,examples}

	emake DESTDIR=${D} install || die "einstall failed"
	
	# install some stuff the Makefile doesn't do
	dobin examples/newlispdoc
	dolib.so newlisp.so
	insinto /usr/share/newlisp/modules
	doins modules/xmlrpc-client.lsp

	# bzip docs
	ecompress ${D}/usr/share/doc/${P}/{COPYING,CREDITS}
}

src_test() {
	./newlisp qa-dot
	./newlisp qa-xml
    ./newlisp qa-setsig

	#This one fails because it does "kill -9" on its on pid.  When
    #this is fixed, we can go back to using "make test"
	#./newlisp qa-net
}