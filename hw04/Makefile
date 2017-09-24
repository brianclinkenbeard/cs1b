CC = g++

all: hw04

hw04: hw04.cpp hw04menu.o hw04add.o hw04sub.o hw04mul.o hw04det.o
	$(CC) hw04.cpp -o hw04 hw04menu.o hw04add.o hw04sub.o hw04mul.o hw04det.o

hw04menu.o: hw04menu.cpp
	$(CC) -c hw04menu.cpp -o hw04menu.o

hw04add.o: hw04add.cpp
	$(CC) -c hw04add.cpp -o hw04add.o

hw04sub.o: hw04sub.cpp
	$(CC) -c hw04sub.cpp -o hw04sub.o

hw04mul.o: hw04mul.cpp
	$(CC) -c hw04mul.cpp -o hw04mul.o

hw04det.o: hw04det.cpp
	$(CC) -c hw04det.cpp -o hw04det.o

clean:
	rm hw04 *.o

tar:
	tar cf hw04.tar hw04.h hw04.cpp hw04menu.cpp hw04add.cpp hw04sub.cpp hw04mul.cpp hw04det.cpp hw04.scr Makefile
