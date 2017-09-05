CC = g++
CFLAGS = -I. -std=c++11 -g
DEPS = str_linked_list.h

all: run clean

%.o: %.cpp $(DEPS)
	$(CC) $< -c -o $@ $(CFLAGS)

# Linking

run: main.o str_linked_list.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o

