# Copyright 1999-2007 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header:
#
# Copyright 2008 Leonardo Valeri Manera <l.valerimanera@gmail.com>
#
# @ECLASS: eggs.eclass
# @MAINTAINER:
# @BLURB: Eclass for Chicken-Scheme Egg packages
# @DESCRIPTION:
#
# This eclass provides generalized functions to compile, test and
# install eggs, as well as setting a number of variables to default
# or autogenerated values.

# @ECLASS-VARIABLE: NEED_CHICKEN
# @DESCRIPTION:
# If you need anything different from chicken 3.0.0, use the
# NEED_CHICKEN variable before inheriting elisp.eclass.  Set it to the
# major version the egg needs and the dependency will be adjusted.

# @ECLASS-VARIABLE: EGG_TESTABLE
# @DESCRIPTION:
# Enables egg test-phase if set to 'yes'.

VERSION=${NEED_CHICKEN:-3.0.0}
DEPEND=">=dev-scheme/chicken-${VERSION}"
RDEPEND=">=dev-scheme/chicken-${VERSION}"
SLOT="0"
IUSE=""

if [[ $PN == srfi* ]]; then
	EGG_NAME="srfi-${PN##srfi}"
else
	EGG_NAME=$PN
fi

CHICKEN_REPOSITORY=${CHICKEN_REPOSITORY:-/usr/lib/chicken/3}
EGGDOC_DIR="/usr/share/doc/chicken-eggs/${EGG_NAME}"

SRC_URI="http://cleo.uwindsor.ca/cgi-bin/gentoo-eggs/${EGG_NAME}-3-${PV}.tar.gz"

if [[ -n ${OLD_EGGPAGE} ]]; then
	HOMEPAGE="http://www.call-with-current-continuation.org/eggs/${EGG_NAME}"
else
	HOMEPAGE="http://chicken.wiki.br/${EGG_NAME}"
fi

# @FUNCTION: eggs-install_files
# @USAGE:
# @DESCRIPTION:
# Install egg files into the correct locations.
eggs-install_files() {
	ebegin "Installing files"
	eggs-install_files_recursive "${@}"
	einfo "Done with installation."
}

# @FUNCTION: eggs-install_files_recursive
# @USAGE:
# @DESCRIPTION:
# Internal use only.
eggs-install_files_recursive() {
	local destination="${1:-${CHICKEN_REPOSITORY}}"
	local real_destination
	local files=$(ls)
	local file
	for file in ${files}; do
		case ${file} in
			*.html|*.css)
				# Hackish, but working, way of displaying real destinations
				# in info messages. Feel free to improve on it.
				real_destination=${EGGDOC_DIR}
				insinto ${EGGDOC_DIR}
				insopts -m644
				;;
			*.so)
				real_destination=${destination}
				insinto ${destination}
				insopts -m755
				;;
			*)
				real_destination=${destination}
				insinto ${destination}
				insopts -m644
				;;
		esac
		if [[ -d ${file} ]];then
			# To iterate is human, to recurse, divine.
			( cd ${file}; eggs-install_files_recursive ${destination}/${file} )
		else
			einfo "  ${file} => ${real_destination}"
			doins ${file} || die "failed installing ${file}"
			eend $!
		fi
	done
}

# @FUNCTION: eggs-set_paths
# @USAGE:
# @DESCRIPTION:
# Modify the .setup-info file(s) to reflect true installation paths.
eggs-set_paths() {
	ebegin "Processing setup files"
	for setup_file in $(ls *.setup-info); do
		ebegin "  ${setup_file}"
		sed -i -e "s:${S}/binaries:/usr/bin:g" ${setup_file} || die "failed setting binary paths in ${setup_file}"
		sed -i -e "s:${S}/install:${CHICKEN_REPOSITORY}:g" ${setup_file} || die "failed setting extension paths in ${setup_file}"
		sed -i -e "s:${CHICKEN_REPOSITORY}/\(.*\).html:${EGGDOC_DIR}/\1.html:g" ${setup_file} || die "failed setting documentation paths in ${setup_file}"
		eend 0
	done
	einfo "Done processing setup files."
}


eggs_src_compile() {
	chicken-setup -R ${S}/install -P ${S}/binaries || die "egg compilation failed"
}

eggs_src_test() {
	if [[ ${EGG_TESTABLE} == "yes" ]]; then
		chicken-setup -nt -R ${S}/install -P ${S}/binaries || die "egg test phase failed"
	fi
}

eggs_src_install() {
	if [[ -d ${S}/binaries ]]; then
		pushd ${S}/binaries >/dev/null
		dobin $(ls) || die
		popd >/dev/null
	fi
	pushd ${S}/install >/dev/null
	[[ -f index.html ]] && rm index.html
	eggs-set_paths
	eggs-install_files
	popd >/dev/null
}

EXPORT_FUNCTIONS src_compile src_test src_install
