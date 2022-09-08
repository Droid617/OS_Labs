TARGET = main
OBJECTS = main.o
SOURCES = main.c

arg = "empty"

CC = gcc

.PHONY: run clean

$(TARGET): $(OBJECTS)
	$(CC) $< -o $@

$(OBJECTS): $(SOURCES)
	$(CC) -c $< -o $@

run: ./$(TARGET)
ifeq ($(arg),"empty")
	$(info Use 'make run arg=file_name' to add arguments)
else
	make
	./$(TARGET) $(arg)
endif

clean:
	rm -f $(OBJECTS)
	rm -f $(TARGET)

