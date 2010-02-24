# Copyright 1999-2009 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI="2"

inherit multilib eutils

MY_P=${P/_/-}

DESCRIPTION="Hop is a higher-order language for programming interactive web applications."
HOMEPAGE="http://hop.inria.fr/"
SRC_URI="ftp://ftp-sop.inria.fr/indes/fp/Hop/${MY_P}.tar.gz"

SLOT="0"
LICENSE="GPL-2"
KEYWORDS="~amd64 ~x86"

DEPEND=">=dev-scheme/bigloo-3.3a[ssl?,threads?]"
RDEPEND="${DEPEND}"

IUSE="ssl threads"

S=${WORKDIR}/${MY_P}

pkg_setup() {
	enewgroup hop
	enewuser hop -1 -1 /var/www hop
}

src_configure() {
	# Hop doesn't use autoconf and consequently a lot of options used by econf give errors
	# Manuel Serrano says: "Please, dont talk to me about autoconf. I simply dont want to hear about it..."
	./configure --prefix=/usr --mandir=/usr/share/man --libdir=/usr/$(get_libdir) --etcdir=/etc/hop $(use_enable ssl) $(use_enable threads) || die "configure failed"
}

src_install () {
	emake DESTDIR="${D}" install || die "install failed"
}
