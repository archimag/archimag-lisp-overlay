# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=1

DESCRIPTION="A new Lisp dialect"
HOMEPAGE="http://www.newlisp.org"
SRC_URI="mirror://sourceforge/newlisp/${P}.tgz"

LICENSE="GPL-2"
SLOT="0"
# please keep sorted
KEYWORDS="~amd64 ~x86"
IUSE="+unicode +readline tk"

DEPEND="readline? ( sys-libs/readline )
		tk? ( dev-lang/tk )"

src_unpack() {
	unpack ${A}; cd "${S}"

	cp Makefile Makefile.old

	# remove bad stuff
	sed -e "s,strip.*,," -e "s,-O.,," -e "s,-g,," -e "s,-m32,," -i makefile_*
	# respect CFLAGS and add -fPIC which is needed at least for amd64
	sed "s,CFLAGS =\(.*\),CFLAGS =\1 -fPIC ${CFLAGS}," -i makefile_*

	# do not assume target directories exist
	sed "s#^install:#install:\n\tmkdir -p \$(datadir)/{doc/${P}/html/guiserver,${PN}/{examples,modules}} \$(bindir) \$(mandir)/man1/#" -i Makefile
	# fix some paths
	sed '/-install .*html$/s:/doc/newlisp/:/doc/newlisp/html/:g' -i Makefile
#	sed '/-install .* modules/s:(datadir)/newlisp:(datadir)/newlisp/modules:g' -i Makefile
	sed '/-install .* examples/s:(datadir)/newlisp:(datadir)/newlisp/examples:g' -i Makefile
	sed "s:/doc/newlisp:/doc/${P}:g" -i Makefile

	# remove duplicate licenses
	sed "/.*COPYING.*/s" -i Makefile

	#disable tests
#	sed "202,212s,./newlisp qa-dot,," -i Makefile
#	sed "s,./newlisp qa-xml,," -i Makefile
#	sed "s,./newlisp qa-setsig,," -i Makefile

	#disable test which fails because it "kill -9"s its own pid.
	sed "s,./newlisp qa-net,," -i Makefile

	# fail on failing install
	sed "s#-install#install#" -i Makefile

	diff -u Makefile.old Makefile
}

src_compile() {
	use unicode && UTF8="_utf8" || UTF8=""
	use readline && READLINE="_readline" || READLINE=""
	emake linux${UTF8}${READLINE} || die "emake failed"
	emake linux_lib${UTF8} || die "emake failed"
}

src_install() {
	emake DESTDIR="${D}" install || die "einstall failed"

	# install some stuff the Makefile doesn't do

	dolib.so newlisp.so
}
