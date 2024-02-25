CC = g++
CFLAGS = -O0 -o dreieck
CFLAGS_DBG = -O0 -ggdb -o dreieck
SOURCES = $(wildcard src/*.cpp)
HEADERS = $(wildcard src/*.hpp)

all: dreieck

dreieck: $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) $(SOURCES)

debug: $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS_DBG) $(SOURCES)

.phony clean:
	rm dreieck
