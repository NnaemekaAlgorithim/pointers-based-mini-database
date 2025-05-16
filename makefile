# Compiler and flags
CC = gcc
CFLAGS = -Wall -Iinclude

# Source and output files
SRC = $(wildcard src/*.c)
OBJ = $(SRC:src/%.c=build/%.o)
EXEC = build/student_db

# Default rule
all: $(EXEC)

# Linking
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $@

# Compilation
build/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -rf build/*.o $(EXEC)

# Run the program
run: all
	./$(EXEC)
