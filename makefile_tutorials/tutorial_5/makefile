.SUFFIXES:.c .o
CC=gcc
CFLAGS=-g -c

OBJS=main.o func1.o func2.o
SRCS=main.c func1.c func2.c

TARGET=hellomake4

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

clean:
	rm -f *.o hellomake*