CC = clang++
LFLAGS = -Wall -std=c++14
CFLAGS = -c $(LFLAGS)
LIBFLAGS = -lsfml-graphics -lsfml-window -lsfml-system
SOURCES = $(wildcard src/*.cpp)
OBJECTS = $(addprefix obj/,$(notdir $(SOURCES:.cpp=.o)))
EXECUTABLE = bin/pong
BINDIR = /usr/bin

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@mkdir -p  bin
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ $(LIBFLAGS)

obj/%.o: src/%.cpp
	@mkdir -p obj
	$(CC) $(CFLAGS) $(LIBS) -o $@ $^

clean:
	rm obj/*.o $(EXECUTABLE)

install:
	#install -s $(EXECUTABLE) $(BINDIR)
	sudo cp -u $(EXECUTABLE) $(BINDIR)

uninstall:
	sudo rm $(BINDIR)/$(EXECUTABLE)
