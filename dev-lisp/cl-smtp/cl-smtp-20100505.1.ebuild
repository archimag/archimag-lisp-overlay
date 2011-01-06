# Copyright 1999-2011 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-3

MY_P=${PN}_${PV}

DESCRIPTION="A Common Lisp client library for the SMTP network protocol."
HOMEPAGE="http://common-lisp.net/project/cl-smtp/
		http://www.cliki.net/CL-SMTP"
SRC_URI="http://common-lisp.net/project/${PN}/${MY_P}.tar.gz"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/cl-base64
		dev-lisp/usocket
		dev-lisp/trivial-gray-streams
		dev-lisp/flexi-streams
		dev-lisp/cl-plus-ssl"

S="${WORKDIR}"/${PN}
