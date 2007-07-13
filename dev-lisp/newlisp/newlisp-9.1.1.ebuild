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

src_unpack() {
	unpack ${A}
	cd ${S}
}

src_compile() {
	if use unicode ; then
	  if use readline ; then
	  	make linux_utf8_readline
	  else
	    make linux_utf8
	  fi
	  make linux_lib_utf8
	else
	  if use readline ; then
	    make linux_readline
	  else
	    make linux
	  fi
	  make linux_lib
	fi
}

src_install() {
	# newlisp has got an installation system that seems to break the
	# standard filesystem hierarchy, so we do our own install procedure
	# here.
    dobin newlisp
	dolib.so newlisp.so
    dobin examples/newlispdoc
	
	insinto /usr/share/newlisp
    doins init.lsp.example

	insinto /usr/share/newlisp/examples
	for example in examples/httpd-conf.lsp \
		examples/link.lsp \
		examples/syntax.cgi ; do
		doins ${example}
	done

	insinto /usr/share/newlisp/modules
	for module in modules/sqlite3.lsp \
		modules/postscript.lsp \
		modules/unix.lsp \
		modules/pop3.lsp \
		modules/mysql5.lsp \
		modules/crypto.lsp \
		modules/ftp.lsp \
		modules/gmp.lsp \
		modules/stat.lsp \
		modules/zlib.lsp \
		modules/mysql.lsp \
		modules/odbc.lsp \
		modules/xmlrpc-client.lsp \
		modules/infix.lsp \
		modules/smtp.lsp \
		modules/cgi.lsp ; do
		doins ${module}
	done


    dodoc doc/COPYING
    dodoc doc/CREDITS
    dohtml doc/newlisp_manual.html
    dohtml doc/newlisp_index.html
    dohtml doc/manual_frame.html
    dohtml doc/CodePatterns.html
    dohtml doc/newLISPdoc.html
    dohtml doc/newLISP-9.1-Release.html


    doman doc/newlisp.1
    doman doc/newlispdoc.1

	if use tcltk ; then
		newbin newlisp-tk/newlisp-tk.tcl newlisp-tk
		doman doc/newlisp-tk.1
		dohtml newlisp-tk/newlisp-tk.html

		insinto /usr/share/newlisp/examples
		doins examples/tcltk.lsp

		insinto /usr/share/newlisp/newlisp-tk
		doins newlisp-tk/*.lsp

		insinto /usr/share/newlisp/newlisp-tk/images
		doins newlisp-tk/images/*
	fi
}

src_test() {
    ./newlisp qa-dot
    ./newlisp qa-xml
    ./newlisp qa-setsig

	#This one fails because it does "kill -9" on its on pid.  When
    #this is fixed, we can go back to using "make test"
	#./newlisp qa-net
}