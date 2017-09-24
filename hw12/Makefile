CC = g++

all: main

main: main.cpp menu.o constructor.o destructor.o getrows.o getcols.o input.o add.o sub.o mul.o stream.o
	$(CC) main.cpp -o main menu.o constructor.o destructor.o getrows.o getcols.o input.o add.o sub.o mul.o stream.o

menu.o: menu.cpp
	$(CC) -c menu.cpp -o menu.o

constructor.o: constructor.cpp
	$(CC) -c constructor.cpp -o constructor.o

destructor.o: destructor.cpp
	$(CC) -c destructor.cpp -o destructor.o

getrows.o: getrows.cpp
	$(CC) -c getrows.cpp -o getrows.o

getcols.o: getcols.cpp
	$(CC) -c getcols.cpp -o getcols.o

input.o: input.cpp
	$(CC) -c input.cpp -o input.o

add.o: add.cpp
	$(CC) -c add.cpp -o add.o

sub.o: sub.cpp
	$(CC) -c sub.cpp -o sub.o

mul.o: mul.cpp
	$(CC) -c mul.cpp -o mul.o

stream.o: stream.cpp
	$(CC) -c stream.cpp -o stream.o

clean:
	rm main *.o

tar:
	tar cfv hw12.tar header.h *.cpp hw12.scr Makefile
