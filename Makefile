CC = clang++
LFLAGS = -Wall -std=c++14
CFLAGS = -c $(LFLAGS)
LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network
SOURCES = $(wildcard src/*.cpp)
OBJECTS = $(addprefix obj/,$(notdir $(SOURCES:.cpp=.o)))
EXECUTABLE = bin/pong
BINDIR = /usr/bin

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@mkdir -p  bin
	$(CC) $(LFLAGS) $(OBJECTS) -o $@ $(LIBS)

obj/%.o: src/%.cpp
	@mkdir -p obj
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm obj/*.o $(EXECUTABLE)

install:
	#install -s $(EXECUTABLE) $(BINDIR)
	sudo cp -u $(EXECUTABLE) $(BINDIR)

uninstall:
	sudo rm $(BINDIR)/$(EXECUTABLE)
