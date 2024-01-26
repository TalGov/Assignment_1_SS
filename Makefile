CC = gcc
CFLAGS = -Wall -std=c11

all: loops recursives recursived loopd mains maindloop maindrec

loops: basicClassificationLoop.o
    ar rcs libclassloops.a basicClassificationLoop.o

recursives: basicClassificationRecursion.o
    ar rcs libclassrec.a basicClassificationRecursion.o

recursived: basicClassificationRecursion.o
    $(CC) -shared -o libclassrec.so basicClassificationRecursion.o

loopd: basicClassificationLoop.o
    $(CC) -shared -o libclassloops.so basicClassificationLoop.o

mains: main.o libclassloops.a
    $(CC) -o mains main.o -L. -lclassloops

maindloop: main.o libclassloops.so
    $(CC) -o maindloop main.o -L. -lclassloops -Wl,-rpath,./

maindrec: main.o libclassrec.so
    $(CC) -o maindrec main.o -L. -lclassrec -Wl,-rpath,./

clean:
    rm -f *.o *.a *.so mains maindloop maindrec

basicClassificationLoop.o: basicClassificationLoop.c NumClass.h
    $(CC) $(CFLAGS) -c basicClassificationLoop.c

basicClassificationRecursion.o: basicClassificationRecursion.c NumClass.h
    $(CC) $(CFLAGS) -c basicClassificationRecursion.c

main.o: main.c NumClass.h
    $(CC) $(CFLAGS) -c main.c
