# Compiler
CC = gcc

# Directories

SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = build

# output

TARGET = multithread_sum

# files
SRC_FILES = $(SRC_DIR)/main.c
OBJ_FILES = $(SRC_FILES:.c=.o)

# flags
CFLAGS = -I$(INCLUDE_DIR) -pthread -Wall

# build target

$(TARGET): $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o $(TARGET) -pthread

# compile each source file into an object file

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# clean target
clean:
	rm -rf $(OBJ_FILES) $(TARGET)


