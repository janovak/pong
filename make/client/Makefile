CC = clang++
LFLAGS = -Wall -std=c++14
CFLAGS = -c $(LFLAGS)
LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network
BASEDIR = ../..
SOURCES = $(wildcard $(BASEDIR)/src/client/*.cpp)
OBJECTS = $(addprefix $(BASEDIR)/obj/client/,$(notdir $(SOURCES:.cpp=.o)))
EXECUTABLE = $(BASEDIR)/bin/client/pong
BINDIR = /usr/bin

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@mkdir -p $(BASEDIR)/bin/client
	$(CC) $(LFLAGS) $(OBJECTS) -o $@ $(LIBS)

$(BASEDIR)/obj/client/%.o: $(BASEDIR)/src/client/%.cpp
	@mkdir -p $(BASEDIR)/obj/client
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf $(BASEDIR)/obj/client $(BASEDIR)/bin/client

install:
	#install -s $(EXECUTABLE) $(BINDIR)
	sudo cp -u $(EXECUTABLE) $(BINDIR)

uninstall:
	sudo rm $(BINDIR)/$(EXECUTABLE)
