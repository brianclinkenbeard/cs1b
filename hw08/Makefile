CC = g++

all: main

main: main.cpp menu.o addrec.o kbdinput.o delrec.o disrec.o
	$(CC) main.cpp -o main menu.o addrec.o kbdinput.o delrec.o disrec.o

menu.o: menu.cpp
	$(CC) -c menu.cpp -o menu.o

addrec.o: addrec.cpp
	$(CC) -c addrec.cpp -o addrec.o

kbdinput.o: kbdinput.cpp
	$(CC) -c kbdinput.cpp -o kbdinput.o

delrec.o: delrec.cpp
	$(CC) -c delrec.cpp -o delrec.o
  
disrec.o: disrec.cpp
	$(CC) -c disrec.cpp -o disrec.o

clean:
	rm main *.o

tar:
	tar cfv hw08.tar header.h main.cpp menu.cpp addrec.cpp kbdinput.cpp delrec.cpp disrec.cpp Makefile hw08.scr
