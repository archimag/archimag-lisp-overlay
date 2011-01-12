# Copyright 1999-2010 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=3
inherit common-lisp-3 eutils

DESCRIPTION="A Common Lisp interface to Gtk+."
HOMEPAGE="http://common-lisp.net/project/cl-gtk2/"
SRC_URI="http://common-lisp.net/project/cl-gtk2/files/${P}.tar.gz"

LICENSE="LLGPL-2.1"
SLOT="0"
KEYWORDS="~amd64 ~ppc ~sparc ~x86"
IUSE="doc"

DEPEND="doc? ( dev-lisp/sbcl
			   sys-apps/texinfo
			   dev-libs/libxslt )"
RDEPEND="dev-lisp/bordeaux-threads
		dev-lisp/cffi
		dev-lisp/closer-mop
		dev-lisp/cl-cairo2
		dev-lisp/cl-opengl
		dev-lisp/iterate
		dev-lisp/metabang-bind
		dev-lisp/trivial-garbage
		>=x11-libs/gtk+-2.16:2"

CLSYSTEMS="cairo/cl-gtk2-cairo  gdk/cl-gtk2-gdk glib/cl-gtk2-glib \
gtk/cl-gtk2-gtk gtk-glext/cl-gtk2-gtkglext pango/cl-gtk2-pango"

src_compile() {
	if use doc ; then
		make -C doc || die "Cannot build docs"
	fi
}

src_install() {
	common-lisp-install-sources -t all cairo gdk glib gtk gtk-glext pango
	common-lisp-install-asdf

	use doc && dohtml -r doc/*
}
