SUBDIRS = \
	nor \
	nand

AM_CPPFLAGS = \
	-I$(top_srcdir)/src \
	-I$(top_builddir)/src

METASOURCES = AUTO
noinst_LTLIBRARIES = libflash.la
libflash_la_SOURCES = \
	common.c \
	mflash.c

libflash_la_LIBADD = \
	$(top_builddir)/src/flash/nor/libocdflashnor.la \
	$(top_builddir)/src/flash/nand/libocdflashnand.la

noinst_HEADERS = \
	common.h \
	mflash.h

EXTRA_DIST = startup.tcl

MAINTAINERCLEANFILES = $(srcdir)/Makefile.in
