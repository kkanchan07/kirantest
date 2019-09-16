Hub.exe : main.o  big.o fact.o palin.o rev.o
	gcc -o Hub.exe main.o big.o fact.o rev.o palin.o
main.o : main.c
	gcc -c main.c
rev.o : rev.c
	gcc -c rev.c
big.o : big.c
	gcc -c big.c
fact.o : fact.c
	gcc -c fact.c
palin.o : palin.c
	gcc -c palin.c

