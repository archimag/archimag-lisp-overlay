# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"

MY_P=${P/_/-}

inherit multilib eutils

DESCRIPTION="Hop is a higher-order language for programming interactive web applications"
HOMEPAGE="http://hop.inria.fr/"
SRC_URI="ftp://ftp-sop.inria.fr/members/Cyprien.Nicolas/mirror/${MY_P}.tar.gz
	ftp://ftp-sop.inria.fr/indes/fp/Hop/${MY_P}.tar.gz"

SLOT="0"
LICENSE="GPL-2"
KEYWORDS="~amd64 ~x86"

DEPEND=">=dev-scheme/bigloo-3.4a[ssl?,threads?,multimedia,web]"

RDEPEND="${DEPEND}"

IUSE="ssl threads debug"

S="${WORKDIR}/${MY_P}"

pkg_setup() {
	enewgroup hop
	enewuser hop -1 -1 /var/lib/hop hop
}

src_configure() {
	# Hop doesn't use autoconf and consequently a lot of options used by econf give errors
	# Manuel Serrano says: "Please, dont talk to me about autoconf. I simply dont want to hear about it..."
	./configure \
		--prefix=/usr \
		--mandir=/usr/share/man \
		--libdir=/usr/$(get_libdir) \
		--etcdir=/etc/hop \
		$(use_enable ssl) \
		$(use_enable threads) \
		$(use debug && echo "--debug") \
		|| die "configure failed"
}

src_compile () {
	emake EFLAGS='-ldopt "${LDFLAGS}"' || die "emake failed"
}

src_install () {
	emake -j1 DESTDIR="${D}" install || die "install failed"

	# Create log dir
	keepdir /var/log/hop
	fowners root:hop /var/log/hop
	fperms 0775 /var/log/hop

	# Init scripts
	newinitd "${FILESDIR}/hop.initd" hop || die
	newconfd "${FILESDIR}/hop.confd" hop || die

	# Documentation
	dodoc ChangeLog README
	newdoc LICENSE COPYING
}
