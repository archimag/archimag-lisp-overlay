# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: /var/cvsroot/gentoo-x86/dev-scheme/hop/hop-1.8.5.ebuild,v 1.1 2008/01/03 13:47:32 hkbst Exp $

inherit multilib
DESCRIPTION="HOP is a new Software Development Kit for the Web 2.0"
HOMEPAGE="http://hop.inria.fr"
SRC_URI="ftp://ftp-sop.inria.fr/mimosa/fp/Hop/${P}.tar.gz"
SLOT="0"
LICENSE="GPL-2"
KEYWORDS="~amd64 ~x86"
#DEPEND="dev-scheme/bigloo"
DEPEND=">=dev-scheme/bigloo-3.0c"
RDEPEND="${DEPEND}"

#IUSE="debug pmem profile ssl locevent threads"
#$(use profile && echo "--profile") 

IUSE="debug devel nolocevent pmem ssl threads"

src_compile() {
	./configure \
		--prefix=/usr \
		--libdir=/usr/$(get_libdir) \
		--etcdir=/etc/hop \
		$(use debug && echo "--debug2") \
		$(use pmem && echo "--pmem2") \
		$(use devel && echo "--devel") \
		$(use nolocevent && echo "--disable-locevent") \
		$(use_enable ssl) \
		$(use_enable threads) \
		--ccflags="${CFLAGS}" \
		|| die "configure failed"
	emake -j1 || die "emake failed"
}

src_install () {
	emake DESTDIR="${D}" install || die "install failed"
}

pkg_postinst() {
	elog "This ebuild is a Work In Progress. The default HOP's"
	elog "configuration file is located in /etc/hop/hoprc.hop."
	elog "You are advised to edit it for more funcionality."
	elog 
	ewarn "Please, do not try to run HOP as \"superuser\"(root),"
	ewarn "as there are many security issues, we haven't looked"
	ewarn "into yet. Create a new User/Group eg. Hop Hop , and"
	ewarn "run HOP with such user priveleges. You have been warned."
	ewarn
	elog "A simple example of running HOP as a user, is eg."
	elog "hop -v5 -p 8080 --log-file /tmp/log"
	elog "It is known, that you may experience problems when you have enabled"
	elog "the \"threads\" USE flag. In such a case, you can use hop's"
	elog "\"--no-thread\" switch which disables threads support."
	elog "For more information run \"hop --help\" from within a valid shell."
	elog
}
