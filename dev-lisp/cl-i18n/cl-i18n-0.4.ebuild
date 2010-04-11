# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

MY_P=${P/./}

DESCRIPTION="A gettext-style internationalization framework for Common Lisp"
HOMEPAGE="http://blog.viridian-project.de/cl-i18n/"
SRC_URI="http://blog.viridian-project.de/wp-content/uploads/2008/01/${MY_P}.tgz"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE=""
