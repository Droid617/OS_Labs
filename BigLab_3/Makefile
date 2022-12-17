CC = gcc

.PHONY: clean

first: firstProg.o
	$(CC) $< -o $@

firstProg.o: firstProg.c
	$(CC) -c $< -o $@

second: secondProg.o
	$(CC) $< -o $@

secondProg.o: secondProg.c
	$(CC) -c $< -o $@

clean:
	rm -f firstProg.o secondProg.o
	rm -f first second
