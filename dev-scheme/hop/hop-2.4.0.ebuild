# Copyright 1999-2013 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=5

MY_P=${P/_/-}

inherit multilib eutils user

DESCRIPTION="Hop is a higher-order language for programming interactive web applications"
HOMEPAGE="http://hop.inria.fr/"
SRC_URI="ftp://ftp-sop.inria.fr/indes/fp/Hop/${MY_P}.tar.gz
		ftp://ftp.cnic.fr/gentoo-lisp-overlay/${MY_P}.tar.gz"

SLOT="0"
LICENSE="GPL-2"
KEYWORDS="~amd64 ~x86 ~amd64-linux"
IUSE="avahi debug ssl threads"

DEPEND=">=dev-scheme/bigloo-4.0a:=[avahi?,ssl?,threads?,multimedia,sqlite,web]"
RDEPEND="${DEPEND}"

RESTRICT="mirror"

S="${WORKDIR}/${MY_P}"

pkg_setup() {
	if ! use prefix; then
		enewgroup hop
		enewuser hop -1 -1 /var/lib/hop hop
	fi
}

src_prepare() {
	epatch_user
}

src_configure() {
	# Hop doesn't use autoconf and consequently a lot of options used by econf give errors
	# Manuel Serrano says: "Please, dont talk to me about autoconf. I simply dont want to hear about it..."
	./configure \
		--prefix="${EPREFIX}"/usr \
		--mandir="${EPREFIX}"/usr/share/man \
		--libdir="${EPREFIX}"/usr/$(get_libdir) \
		--etcdir="${EPREFIX}"/etc/hop \
		--webletsdir="${EPREFIX}"/usr/share/${PN}/weblets \
		$(use_enable avahi) \
		$(use_enable ssl) \
		$(use_enable threads) \
		$(use debug && echo "--debug") \
		|| die "configure failed"
}

src_compile () {
	emake EFLAGS='-ldopt "${LDFLAGS}"' || die "emake failed"
}

src_install () {
	emake DESTDIR="${D}" install || die "install failed"

	# Create home dir
	keepdir /var/lib/hop
	# Create log dir
	keepdir /var/log/hop

	if ! use prefix; then
		fowners hop:hop  /var/lib/hop
		fowners root:hop /var/log/hop

		fperms 0750 /var/lib/hop
		fperms 0775 /var/log/hop
	fi

	# Init scripts
	newinitd "${FILESDIR}/hop.initd" hop || die
	newconfd "${FILESDIR}/hop.confd" hop || die

	# Documentation
	dodoc ChangeLog README
	newdoc LICENSE COPYING
}
