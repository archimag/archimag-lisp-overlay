# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit multilib elisp-common eutils

DESCRIPTION="Chicken is a Scheme interpreter and native Scheme to C compiler"
SRC_URI="http://chicken.wiki.br/dev-snapshots/2007/11/03/${P}.tar.gz"

HOMEPAGE="http://www.call-with-current-continuation.org/"

LICENSE="BSD"
SLOT="0"
KEYWORDS=""
IUSE="emacs debug static performance doc"

DEPEND="emacs? ( virtual/emacs )"

SITEFILE=50hen-gentoo.el

src_unpack() {

	local hacks_name
	unpack ${P}.tar.gz
	cd $S
	hacks_name="apply-hack.$(sh config-arch.sh).s"
	cat ${FILESDIR}/fix-GNU-stack.s >>\
$hacks_name
	if ! use static; then
		epatch "${FILESDIR}/rules-make.patch"
		epatch "${FILESDIR}/defaults-make.patch"
	fi
}

src_compile() {
	if ! use static; then

		ln -vs libchicken.so.1.1 libchicken.so
		ln -vs libchicken.so.1.1 libchicken.so.1
		ln -vs libuchicken.so.1.1 libuchicken.so
		ln -vs libuchicken.so.1.1 libuchicken.so.1
	fi

	local myconf
	if use debug; then
		myconf="${myconf} DEBUGBUILD=1"
	fi
	if use static; then
		myconf="${myconf} STATICBUILD=1"
	fi
	if use performance; then
		myconf="${myconf} SYMBOLGC=1 NOAPPLYHOOK=1"
	fi

	echo -e "\n Enable -> $myconf \n";

	emake \
	PLATFORM=linux \
	PREFIX=/usr \
	A=".a" O=".o" \
	${myconf} \
	C_COMPILER_OPTIMIZATION_OPTIONS="$CFLAGS" \
	|| die "emake failed"

##	local myconf

##	myconf="emake PLATFORM=linux O=.o A=.a \
##C_COMPILER_OPTIMIZATION_OPTIONS=\"${CFLAGS}\" \
##PREFIX=/usr"
##	if use debug; then
##		myconf="${myconf} DEBUGBUILD=1"
##	fi
##	if use static; then
##		myconf="${myconf} STATICBUILD=1"
##	fi
##	if use performance; then
##		myconf="${myconf} SYMBOLGC=1 NOAPPLYHOOK=1"
##	fi


##	eval $myconf || die "make failed"

	use emacs && elisp-comp hen.el
}

#src_test() {
#	local DD
#	DD="${D}/usr/lib/"
#	mkdir -p ${DD}
#	cp -v libchicken.a ${DD}
#	cp -v libuchicken.a ${DD}
#	cd tests;
#	chmod +x runtests.sh;
#	./runtests.sh \
#	|| die "Test phase failed"
#	sleep 100
#}

src_install() {
	emake PLATFORM=linux O=".o" A=".a" \
	PREFIX=${D}/usr install \
	|| die "make install failed"

	dodoc ChangeLog* README NEWS
	if use doc; then
		dodoc chicken.pdf
	fi
	dohtml -r html/
	rm -rf ${D}/usr/share/chicken/doc

	if use emacs; then
		elisp-install ${PN} *.{el,elc}
		elisp-site-file-install ${FILESDIR}/${SITEFILE}
	fi

	if ! use static; then
		cd ${D}/usr/lib/
		ln -vs libchicken.so.1.1 libchicken.so
		ln -vs libchicken.so.1.1 libchicken.so.1
		ln -vs libuchicken.so.1.1 libuchicken.so
		ln -vs libuchicken.so.1.1 libuchicken.so.1
	fi
}

pkg_postinst() {
	use emacs && elisp-site-regen
}

pkg_postrm() {
	use emacs && elisp-site-regen
}
