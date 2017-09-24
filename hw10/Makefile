CC = g++

all: main

main: main.cpp
	$(CC) main.cpp -o main -Wall

clean:
	rm main

tar:
	tar cfv hw10.tar header.h main.cpp infile.txt Makefile questions.txt
