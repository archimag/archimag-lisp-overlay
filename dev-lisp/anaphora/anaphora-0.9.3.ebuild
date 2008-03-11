# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: Exp $

inherit common-lisp-2

DESCRIPTION="Anaphoric macro collection for Common Lisp"
HOMEPAGE="http://www.common-lisp.net/project/${PN}/"
SRC_URI="http://common-lisp.net/project/${PN}/files/${P}.tar.gz"
LICENSE="public-domain"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
SLOT="0"
DEPEND="!dev-lisp/cl-${PN}"
