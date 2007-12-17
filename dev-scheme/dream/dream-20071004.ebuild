DESCRIPTION="Tiny (!) R4RS Scheme Interpreter, written in x86 Assembly, including its own Assembler (in Scheme)"
HOMEPAGE="http://www.stripedgazelle.org/joey/dream.html"
SRC_URI="http://www.stripedgazelle.org/cgi-bin/wiki_joey/${PN}${PV}.tar.gz"

##
## I couldn't find out what license terms dream is distributed as, so I'm assuming it's something MIT-ish
## * [2007/12/18] jyujin: sent an email about this to the author (Mr. David Joseph Smith)
##
LICENSE="MIT"


SLOT="0"
KEYWORDS="~x86 ~amd64"

S=${WORKDIR}/${PN}

src_compile() {
	mv dream dream-bin
	./dream-bin dream.scm
}

src_install() {
	insinto /usr
	dobin dream

	insinto /usr/share/scm/dream
	doins asm86.scm
	doins bootstrap.scm

	dodoc README
}

