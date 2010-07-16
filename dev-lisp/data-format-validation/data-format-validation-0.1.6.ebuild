# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=2
inherit common-lisp-2


DESCRIPTION="DATA-FORMAT-VALIDATION is a library for Common Lisp providing a consistent regular interface for converting (and validating) external data (in the form of strings usually) into internal data types and for formatting internal data back into external presentable strings, all according to a conversion or type specification."
HOMEPAGE="http://www.jarw.org.uk/lisp/cl-data-format-validation.html"
SRC_URI="http://github.com/downloads/archimag/archimag-lisp-overlay/${P}.tar.bz2"

LICENSE="GPL-3"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""

RDEPEND="dev-lisp/cl-ppcre"

