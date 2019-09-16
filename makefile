Hub.exe : main.o  big.o fact.o palin.o
	gcc -o Hub.exe main.o big.o fact.o palin.o
main.o : main.c
	gcc -c main.c
big.o : big.c
	gcc -c big.c
fact.o : fact.c
	gcc -c fact.c
palin.o : palin.c
	gcc -c palin.c

