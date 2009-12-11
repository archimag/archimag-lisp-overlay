inherit common-lisp-2 eutils

DESCRIPTION="Clon is a task scheduler library much like cron for lisp that is implemented as a shallow layer on top of SBCL timers"
HOMEPAGE="http://www.cliki.net/Clon"
SRC_URI="http://quotenil.com/clon/${P}.tar.gz"

LICENSE="MIT"
SLOT="0"
KEYWORDS="~amd64 ~sparc ~ppc ~x86"
IUSE=""

DEPEND="dev-lisp/bordeaux-threads
		dev-lisp/trivial-timers"

CLSYSTEMS="${PN}"

src_install() {
	common-lisp-install *.{lisp,asd}
	common-lisp-symlink-asdf
	dodoc ChangeLog COPYING README TODO
	insinto /usr/share/doc/${PF}
	doins -r doc
}