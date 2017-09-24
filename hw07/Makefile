CC = g++ -Wall

all: s14 s15 s16 s17 s18 s19 s20 s22

s14: s14.cpp
	$(CC) s14.cpp -o s14

s15: s15.cpp
	$(CC) s15.cpp -o s15

s16: s16.cpp
	$(CC) s16.cpp -o s16

s17: s17.cpp
	$(CC) s17.cpp -o s17

s18: s18.cpp
	$(CC) s18.cpp -o s18

s19: s19.cpp
	$(CC) s19.cpp -o s19

s20: s20.cpp
	$(CC) s20.cpp -o s20

s22: s22.cpp
	$(CC) s22.cpp -o s22

clean:
	rm s14 s15 s16 s17 s18 s19 s20 s22

tar: 
	tar cfv hw07.tar header.h *.cpp hw07.scr Makefile
