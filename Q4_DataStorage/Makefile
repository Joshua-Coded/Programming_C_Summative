# Compiler
CC = gcc

# Directories
SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = build

# Output
TARGET = data_storage

# Files
SRC_FILES = $(SRC_DIR)/main.c
OBJ_FILES = $(SRC_FILES:.c=.o)

# Flags
CFLAGS = -I$(INCLUDE_DIR) -Wall

# Build target
$(TARGET): $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o $(TARGET)

# Compile each source file into an object file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target
clean:
	rm -f $(OBJ_FILES) $(TARGET) students.txt

