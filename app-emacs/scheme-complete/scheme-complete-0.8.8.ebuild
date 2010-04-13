# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit elisp

DESCRIPTION="Scheme tab-completion and word-completion for Emacs"
HOMEPAGE="http://synthcode.com/emacs/"
SRC_URI="http://synthcode.com/emacs/${P}.el.gz"

LICENSE="public-domain"
SLOT="0"
KEYWORDS="~amd64 ~x86"
IUSE=""

SITEFILE=60${PN}-gentoo.el
