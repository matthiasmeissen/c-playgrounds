# Compiler
CC = clang

# Compiler Flags
CFLAGS = -Wall -g

# Executable Name
TARGET = main

# Object Files Needed
OBJS = main.o utils.o


# A make rule is written like this:
# target: prerequisite1 prerequisite2 (and more)
#	command_to_build

# The prerequsistes (or dependencies) are things the target depends on
# When any of them have canged more recently than target, make knows it has to rebuild the target


# The first rule is the default one that runs when you type make
# It say: In order to build the TARGET you need all OBJS files
# The command says: clang main.o utils.o -o main
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)


# Rule to build main.o
# In order to build main.o you need main.c and utils.c
main.o: main.c utils.h
	$(CC) $(CFLAGS) -c main.c

# Rule to build utils.o
# In order to build utils.o you need utils.c utils.h
utils.o: utils.c utils.h
	$(CC) $(CFLAGS) -c utils.c

# This does not create a file and can be executed with make clean
clean:
	rm -f $(OBJS)
