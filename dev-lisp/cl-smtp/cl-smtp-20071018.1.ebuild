# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="A Common Lisp client library for the SMTP network protocol."
HOMEPAGE="http://common-lisp.net/project/cl-smtp/ http://www.cliki.net/CL-SMTP"
SRC_URI="http://common-lisp.net/~sionescu/files/${P}.tar.bz2"
LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
DEPEND="dev-lisp/cl-base64
		dev-lisp/usocket"
