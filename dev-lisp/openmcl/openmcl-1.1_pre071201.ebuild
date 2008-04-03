# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-common-3

MY_PV=${PV##*_pre}

DESCRIPTION="OpenMCL is a Common Lisp implementation, derived from Digitool's MCL product"
HOMEPAGE="http://openmcl.clozure.com/"
SRC_URI="amd64? ( ftp://clozure.com/pub/testing/${PN}-linuxx8664-snapshot-${MY_PV}.tar.gz )"
#		 ppc?   ( ftp://clozure.com/pub/testing/${PN}-linuxppc-snapshot-${MY_PV}.tar.gz )"
LICENSE="LLGPL-2.1"
SLOT="0"
#KEYWORDS="-* ~amd64 ~ppc ~ppc64"
KEYWORDS="-* ~amd64"
IUSE=""

DEPEND=""

PROVIDE="virtual/commonlisp"

S=${WORKDIR}/ccl

src_compile() {
	if use amd64; then
		 echo "(ccl:rebuild-ccl :full t)" | ./lx86cl64 -b -Q
	fi
	if use ppc; then
		echo "(ccl:rebuild-ccl :full t)" | ./ppccl -b -Q
	fi
	if use ppc64; then
		echo "(ccl:rebuild-ccl :full t)" | ./ppccl64 -b -Q
	fi

	# remove non-owner write permissions on the full-image
	chmod go-w * # LX86CL64
}

src_install() {
	local INSTALL_DIR="/var/${PF}"

	sed "s,/usr/local/src,${INSTALL_DIR}," -i scripts/openmcl*

	( use amd64 || use ppc64 ) && newbin scripts/openmcl64 openmcl
	use ppc && dobin scripts/openmcl

	rm -r "${S}"/scripts/
	dodir /var/"${PF}" && cp -R "${S}" "${D}/${INSTALL_DIR}"
}

pkg_postinst() {
	standard-impl-postinst openmcl || die
}

pkg_postrm() {
	standard-impl-postrm openmcl /usr/bin/openmcl
	if [ ! -x /usr/bin/openmcl ]; then
		rm -rf /usr/lib/openmcl/ || die
	fi
}
