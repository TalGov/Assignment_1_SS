CC = clang
CFLAGS = -Wall -Werror

SRCS = main.c advancedClassificationLoop.c basicClassification.c
OBJS = $(SRCS:.c=.o)

.PHONY: all clean

all: main

main: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c NumClass.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f main $(OBJS)
