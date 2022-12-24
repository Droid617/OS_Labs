CC = gcc

.PHONY: clean

one: progOne.o
	$(CC) $< -o $@

progOne.o: progOne.c
	$(CC) -c $< -o $@

two: progTwo.o
	$(CC) $< -o $@

progTwo.o: progTwo.c
	$(CC) -c $< -o $@

clean:
	rm -f progOne.o progTwo.o
	rm -f one two
