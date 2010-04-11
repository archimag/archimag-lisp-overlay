# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

DESCRIPTION="KSM-Scheme is a Scheme interpreter that integrates easily with functions and variables defined in C language."
HOMEPAGE="http://square.umin.ac.jp/~hchang/ksm/"
SRC_URI="http://square.umin.ac.jp/~hchang/ksm/${P}.tar.gz"

SLOT="0"
LICENSE="GPL-2"

#compile failure on amd64, maybe -* is overkill
KEYWORDS="-* ~x86 ~ppc"

DEPEND=""
IUSE=""
