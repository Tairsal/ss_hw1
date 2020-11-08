

all:prog

prog: basicMath.o power.o main.o
	gcc -Wall -g -o prog basicMath.o power.o main.o

basicMath.o: basicMath.c myMath.h
	gcc -Wall -g -c basicMath.c

power.o:power.c myMath.h
	gcc -Wall -g -c power.c

main.o: main.c myMath.h
	gcc -Wall -g -c main.c

.PHONY: clean

c: 
	rm -f prog *.o


