# Copyright (c) 2009 Openmoko Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.


SAMO_LIB := $(shell readlink -es ../samo-lib || readlink -es ../../samo-lib || readlink -es ../../../samo-lib)
include ${SAMO_LIB}/Mk/definitions.mk

CC = gcc
LD = ld

CFLAGS = -g -O3 -Wall -MD -D_REENTRANT -DWIKIPCF -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64
CFLAGS += -I. -I$(WIKI_APP_INCLUDE)
 #-I$(LZMA_INCLUDE)

LDFLAGS = -g -dynamic


TARGETS = hash-gen

vpath %.c $(WIKI_APP_SRC)
 $(LZMA_DIR)

OBJS = main.o
OBJS += hash.o
#OBJS += lcd_buf_draw.o
#OBJS += bmf.o
OBJS += bigram.o
#OBJS += LzmaEnc.o
#OBJS += Alloc.o
#OBJS += Bra.o
#OBJS += LzFind.o
OBJS += search_hash.o


.PHONY: all
all: ${TARGETS}


.PHONY: install
install: all
	true

hash-gen: ${OBJS}
	${CC} ${LDFLAGS} ${OBJS} -o $@

build:
	${MKDIR} "$@"

.PHONY: clean
clean:
	${RM} -r build ${TARGETS} *.o *.d

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@


#include ${SAMO_LIB}/Mk/rules.mk
