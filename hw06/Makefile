CC = g++

all: main

main: main.cpp initarray.o prarray.o
	$(CC) main.cpp -o main initarray.o prarray.o

initarray.o: initarray.cpp
	$(CC) -c initarray.cpp -o initarray.o

prarray.o: prarray.cpp
	$(CC) -c prarray.cpp -o prarray.o

clean:
	rm main *.o

tar:
	tar cf exam1.tar header.h main.cpp initarray.cpp prarray.cpp answers Makefile
