inherit common-lisp-2 eutils

MY_P=${PN}_${PV}

DESCRIPTION="Trivial-timers is a minimally portable implementation of the SBCL timer extension using Bordeaux-Threads used by Clon"
HOMEPAGE="http://www.cliki.net/trivial-timers"
SRC_URI="http://releases.unknownlamer.org/trivial-timers/${MY_P}.tar.gz"

LICENSE="public domain"
SLOT="0"
KEYWORDS="~amd64 ~sparc ~ppc ~x86"
IUSE=""

DEPEND="dev-lisp/bordeaux-threads"

CLSYSTEMS="${PN}"

S="${WORKDIR}"/${MY_P}

src_install () {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc README
}