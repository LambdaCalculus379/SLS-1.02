CC = gcc
PROG = finger
OBJS = finger.o lprint.o net.o sprint.o util.o
CFLAGS = -O2 -include ../bsd/bsd.h -I../bsd -DSHADOW_PWD
LDFLAGS = -N
LDLIBS = ../libbsd/libbsd.a -lshadow

all: $(PROG)

$(PROG): $(OBJS)

clean:
	rm -f *.o *~ core

clobber: clean
	rm -f $(PROG)
