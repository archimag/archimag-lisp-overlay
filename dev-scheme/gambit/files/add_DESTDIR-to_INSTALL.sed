#INSTALL
#s:\$(INSTALL)*

#INSTALL_DATA
s:\(\$(INSTALL_DATA).*\)\(\$(docdir)\):\1\$(DESTDIR)\2:
s:\(\$(INSTALL_DATA).*\)\(\$(infodir)\):\1\$(DESTDIR)\2:
s:\(\$(INSTALL_DATA).*\)\(\$(libdir)\):\1\$(DESTDIR)\2:
s:\(\$(INSTALL_DATA).*\)\(\$(emacsdir)\):\1\$(DESTDIR)\2:
s:\(\$(INSTALL_DATA).*\)\(\$(prefix)\):\1\$(DESTDIR)\2:
s:\(\$(INSTALL_DATA).*\)\(\$(includedir)\):\1\$(DESTDIR)\2:

#INSTALL_LIB
s:\(\$(INSTALL_LIB).*\)\(\$(libdir)\):\1\$(DESTDIR)\2:

#INSTALL_PROGRAM
s:\(\$(INSTALL_PROGRAM).*\)\(\$(bindir)\):\1\$(DESTDIR)\2:

#mkidirs
s:\(mkidirs \)\(\$(bindir)\):\1\$(DESTDIR)\2:
s:\(mkidirs \)\(\$(docdir) \)\(\$(infodir)\):\1\$(DESTDIR)\2\$(DESTDIR)\3:
s:\(mkidirs \)\(\$(libdir)\):\1\$(DESTDIR)\2:
s:\(mkidirs \)\(\$(emacsdir)\):\1\$(DESTDIR)\2:
s:\(mkidirs \)\(\$(includedir)\):\1\$(DESTDIR)\2:

#create symlinks inside DESTDIR
s:(cd \(\$(prefix) \&\& \$(LN_S)\):(cd \$(DESTDIR)\1:
s:(cd \(\$(bindir) \&\& \$(LN_S)\):(cd \$(DESTDIR)\1:

#this will not work for us, because it wants to delete files outside of DESTDIR
#it should be moved to an uninstall target, but we don't use those anyway
s:rm -f:echo:

#these want to do bad stuff after install
s:\@MAKE_LIBRARY_FOR_INSTALL\@:echo:
s:\@LINK_FOR_INSTALL\@:echo:

#these ignore configure paths
s:libdir = .*:libdir = @libdir@:

#this results in bad path in library
/^MAKE_LIBRARY_LIBS = /{p;s:\(MAKE_LIBRARY_LIBS\):\1_CL:;}
/^MAKE_LIBRARY_LIBS_CL = /s:\$(GAMBCLIB): -lgambc:
/^MAKE_LIBRARY_LIBS_CL = /s:\(\$(rootfromhere)/lib/\): -L\1:

#this results in bad path in executable
/^LINK_LIBS = /{p;s:\(LINK_LIBS\):\1_CL:;}
/^LINK_LIBS_CL = /s:\$(GAMBCLIB): -lgambc:
/^LINK_LIBS_CL = /s:\(\$(rootfromhere)/lib/\): -L\1:
/^LINK_LIBS_CL = /s:\$(GAMBCGSILIB): -L. -lgambcgsi:
/^LINK_LIBS_CL = /s:\$(GAMBCGSCLIB): -L. -lgambcgsc:

