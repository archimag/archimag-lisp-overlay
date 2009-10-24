# About #

This overlay contains ebuils required to install cl-gtk2 on gentoo linux that are not available in gentoo-lisp-overlay.

# Installation #

First you should install gentoo-lisp-overlay:

    layman -a lisp

And then install the cl-gtk2 overlay:
    
    layman --overlays=http://github.com/dmitryvk/cl-gtk2-overlay/raw/master/layman-list.xml -a cl-gtk2
