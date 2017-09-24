CC = g++

all: hw05

hw05: hw05.cpp trshape.o prshape.o
	$(CC) hw05.cpp -o hw05 trshape.o prshape.o

trshape.o: trshape.cpp
	$(CC) -c trshape.cpp -o trshape.o

prshape.o: prshape.cpp
	$(CC) -c prshape.cpp -o prshape.o

clean:
	rm hw05 *.o

tar:
	tar cf hw05.tar header.h hw05.cpp hw05.scr trshape.cpp prshape.cpp Makefile
