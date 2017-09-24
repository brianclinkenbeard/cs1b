CC = g++

all: main

main: main.cpp menu.o constructors.o destructors.o getname.o getacc.o getmonths.o getbal.o getmin.o deposit.o withdraw.o writecheck.o incrmonth.o getinterest.o statement.o
	$(CC) main.cpp -o main menu.o constructors.o destructors.o getname.o getacc.o getmonths.o getbal.o getmin.o deposit.o withdraw.o writecheck.o incrmonth.o getinterest.o statement.o

menu.o: menu.cpp
	$(CC) -c menu.cpp -o menu.o

constructors.o: constructors.cpp
	$(CC) -c constructors.cpp -o constructors.o

destructors.o: destructors.cpp
	$(CC) -c destructors.cpp -o destructors.o

getname.o: getname.cpp
	$(CC) -c getname.cpp -o getname.o

getacc.o: getacc.cpp
	$(CC) -c getacc.cpp -o getacc.o

getmonths.o: getmonths.cpp
	$(CC) -c getmonths.cpp -o getmonths.o

getbal.o: getbal.cpp
	$(CC) -c getbal.cpp -o getbal.o

getmin.o: getmin.cpp
	$(CC) -c getmin.cpp -o getmin.o

deposit.o: deposit.cpp
	$(CC) -c deposit.cpp -o deposit.o

withdraw.o: withdraw.cpp
	$(CC) -c withdraw.cpp -o withdraw.o

writecheck.o: writecheck.cpp
	$(CC) -c writecheck.cpp -o writecheck.o

incrmonth.o: incrmonth.cpp
	$(CC) -c incrmonth.cpp -o incrmonth.o

getinterest.o: getinterest.cpp
	$(CC) -c getinterest.cpp -o getinterest.o

statement.o: statement.cpp
	$(CC) -c statement.cpp -o statement.o

clean:
	rm main *.o

tar:
	tar cfv hw11.tar *.cpp header.h Makefile hw11.scr
