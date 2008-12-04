# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit common-lisp-2

DESCRIPTION="cl-launch is a utility to make Common Lisp software easily invokable from the command-line."
HOMEPAGE="http://www.cliki.net/cl-launch"
SRC_URI="http://fare.tunes.org/files/cl-launch/cl-launch_${PV}.tar.gz"
LICENSE="No-Problem-Bugroff LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"

CL_LAUNCH_FASLDIR=/var/cache/cl-launch

src_install() {
	dobin cl-launch.sh
	common-lisp-install launcher.lisp wrapper.sh cl-launch.asd
	common-lisp-symlink-asdf
	keepdir "${CL_LAUNCH_FASLDIR}"
}
