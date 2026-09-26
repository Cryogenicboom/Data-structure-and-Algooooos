CC = g++  

SOURCES = ordered_array.cpp\
searching.cpp\
sorting.cpp\
hash.cpp\
header.h

OUT = datastructure


all: 
	$(CC) $(SOURCES) -o $(OUT)

run: 
	./$(OUT)

# deletes the .o file created.
clean: 
	rm -f $(OUT)

