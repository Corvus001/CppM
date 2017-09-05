CC= g++
DIRS= -I.
DEPS= ConstNode.h

all: run clean #run2 clean

run: printNode.o
	$(CC) $^ -o $@ $(DIRS)

printNode.o: printNode.cpp $(DEPS)
	$(CC) $< -c -o $@ $(DIRS)

run2: setNode.o
	$(CC) $^ -o $@ $(DIRS)

setNode.o: setNode.cpp $(DEPS)
	$(CC) $< -c -o $@ $(DIRS)

.PHONY: clean

clean:
	rm -f *.o
