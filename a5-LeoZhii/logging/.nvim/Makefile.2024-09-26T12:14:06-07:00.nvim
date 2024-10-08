CC = clang

all: logging

run: logging
	./logging

logging: logging.o log.o
	$(CC) logging.o log.o -o logging

logging.o : logging.c
	$(CC) -c logging.c -o logging.o

log.o : log.c log.h
	$(CC) -c log.c -o log.o

clean:
	rm -f logging *.o
