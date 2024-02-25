CC = g++
CFLAGS = -O0 -o dreieck
SOURCES = $(wildcard src/*.cpp)

dreieck:
	$(CC) $(CFLAGS) $(SOURCES)

.phony clean:
	rm dreieck