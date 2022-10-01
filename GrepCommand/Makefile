TARGET = main
OBJECTS = main.o GrepHeader.o

CC = gcc

INCLUDES = -I../Grep_Lab2
CFLAGS = -g -Wall $(INCLUDES)
LDFLAGS += $(INCLUDES)

.PHONY: clean

$(TARGET): $(OBJECTS) ../Grep_Lab2/GrepHeader.h
	$(CC) main.o GrepHeader.o $(LDFLAGS) -o $@

main.o: main.c
	$(CC) $(CFLAGS) -c main.c
	
GrepHeader.o: GrepHeader.c
	$(CC) $(CFLAGS) -c GrepHeader.c

clean:
	rm -f $(OBJECTS)
	rm -f $(TARGET)

