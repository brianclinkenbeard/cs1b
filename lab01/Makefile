CC = g++

all: rot

rot: rot.cpp rotate.o userinput.o
	$(CC) rot.cpp -o rot rotate.o userinput.o

rotate.o: rotate.cpp
	$(CC) -c rotate.cpp -o rotate.o

userinput.o: userinput.cpp
	$(CC) -c userinput.cpp -o userinput.o

clean:
	rm rot *.o

tar:
	tar cfv rot.tar header.h rot.cpp rotate.cpp userinput.cpp Makefile
