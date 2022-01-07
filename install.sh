#!/bin/sh
if [ -f /usr/local/include ] ; then
	cp io.h /usr/local/include
else
	cp io.h /usr/include
fi
