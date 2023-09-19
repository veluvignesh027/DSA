# Makefile
CC = g++
CFLAGS = -std=c++11

# List of source files
SRCS = main.cc insert.cc display.cc delete.cc search.cc sort.cc reverse.cc

# List of object files to be generated from source files
OBJS = $(SRCS:.cc=.o)

# Name of the executable
TARGET = linked_list

# Default target
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# Compile each .cc file into a .o file
%.o: %.cc
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del $(OBJS) $(TARGET)

