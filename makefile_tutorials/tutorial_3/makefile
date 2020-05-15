CC=gcc
CFLAGS=-I.

OBJS=main.o func1.o func2.o

hellomake3: $(OBJS)
	$(CC) -o hellomake3 $(OBJS)

main.o: main.c
	$(CC) -c main.c

func1.o: func1.c
	$(CC) -c func1.c

func2.o: func2.c
	$(CC) -c func2.c

clean:
	rm -f *.o hellomake*