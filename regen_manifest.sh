#!/bin/sh

if [[ "$*" ]]; then
	find ./* -name Manifest -delete
fi

find ./* -iname '*.ebuild' | \
{ [[ $@ ]] && grep $@ || cat; } | \
xargs -P2 -I{} ebuild {} digest --force
