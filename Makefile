CC = g++  

SOURCES = main.cpp\
Search_Sort\searching.cpp\
Search_Sort\sorting.cpp\
Hashmaps\hash.cpp\
header.h

OUT = datastructure


all: 
	$(CC) $(SOURCES) -o $(OUT)

run: 
	./$(OUT)

# deletes the .o file created.
clean: 
	rm -f $(OUT)

