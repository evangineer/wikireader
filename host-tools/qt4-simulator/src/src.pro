TOPLEVEL = ../../../
SOURCES += $$TOPLEVEL/wiki-app/guilib.c
SOURCES += $$TOPLEVEL/wiki-app/bmf.c
SOURCES += $$TOPLEVEL/wiki-app/bigram.c
SOURCES += $$TOPLEVEL/wiki-app/lcd_buf_draw.c
SOURCES += $$TOPLEVEL/wiki-app/glyph.c
SOURCES += $$TOPLEVEL/wiki-app/file-io-posix.c
SOURCES += $$TOPLEVEL/wiki-app/msg-printf.c
SOURCES += $$TOPLEVEL/wiki-app/time-posix.c
SOURCES += $$TOPLEVEL/wiki-app/malloc-simple.c
SOURCES += $$TOPLEVEL/wiki-app/history.c
SOURCES += $$TOPLEVEL/wiki-app/wikilib.c
SOURCES += $$TOPLEVEL/wiki-app/search.c
SOURCES += $$TOPLEVEL/wiki-app/search_hash.c
SOURCES += $$TOPLEVEL/wiki-app/hexdump.c
SOURCES += $$TOPLEVEL/wiki-app/keyboard.c
SOURCES += $$TOPLEVEL/wiki-app/restricted.c
SOURCES += $$TOPLEVEL/wiki-app/sha1.c
SOURCES += $$TOPLEVEL/samo-lib/lzma/LzmaDec.c
SOURCES += $$TOPLEVEL/samo-lib/lzma/Alloc.c
SOURCES += $$TOPLEVEL/samo-lib/lzma/Bra.c
SOURCES += $$TOPLEVEL/samo-lib/lzma/LzFind.c
INCLUDEPATH += $$TOPLEVEL/wiki-app/
INCLUDEPATH += $$TOPLEVEL/samo-lib/include/
INCLUDEPATH += $$TOPLEVEL/samo-lib/drivers/include/
INCLUDEPATH += $$TOPLEVEL/samo-lib/minilzo/
INCLUDEPATH += $$TOPLEVEL/samo-lib/lzma/
INCLUDEPATH += $$TOPLEVEL/samo-lib/fatfs/src
INCLUDEPATH += $$TOPLEVEL/samo-lib/fatfs/config/c33/read-write
DEPENDPATH = $$INCLUDEPATH

SOURCES += main.cpp
SOURCES += WikiDisplay.cpp
SOURCES += MainWindow.cpp
SOURCES += WikilibThread.cpp
SOURCES += fatfs_stdio.c

TEMPLATE = app

CONFIG += warn_on
CONFIG += thread
CONFIG += qt

TARGET = ../bin/wikisim

HEADERS += WikiDisplay.h
HEADERS += MainWindow.h
HEADERS += WikilibThread.h
