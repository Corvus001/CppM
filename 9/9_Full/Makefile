# MakeFile for combining stack and linked_list functionality



# Compiler
CC = g++

# Flags
CFLAGS = -I. -std=c++11 -g

# Dependencies
DEPS = linked_list.h


# Object file generation

%.o: %.cpp $(DEPS)
	$(CC) $< -c -o $@ $(CFLAGS)


# Linking

run: main.o linked_list.o 
	$(CC) -o $@ $^ $(CFLAGS)
clean:
	rm -f *.o 
