CC = g++
CFLAGS = -O0 -o dreieck
SOURCES = $(wildcard src/*.cpp)

all: dreieck

dreieck:
	$(CC) $(CFLAGS) $(SOURCES)

.phony clean:
	rm dreieck