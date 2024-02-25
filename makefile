CC = g++
CFLAGS = -O0 -o dreieck
SOURCES = $(wildcard src/*.cpp)
HEADERS = $(wildcard src/*.hpp)

all: dreieck

dreieck: $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) $(SOURCES)

.phony clean:
	rm dreieck
