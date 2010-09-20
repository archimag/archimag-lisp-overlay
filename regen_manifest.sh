#!/bin/sh

find ./* -iname '*.ebuild' | \
{ [[ $@ ]] && grep $@ || cat; } | \
xargs -P2 -I{} ebuild {} digest --force
