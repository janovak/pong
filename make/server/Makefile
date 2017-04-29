CC = clang++
LFLAGS = -Wall -std=c++14
CFLAGS = -c $(LFLAGS)
LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network
BASEDIR = ../..
SOURCES = $(wildcard $(BASEDIR)/src/server/*.cpp)
OBJECTS = $(addprefix $(BASEDIR)/obj/server/,$(notdir $(SOURCES:.cpp=.o)))
EXECUTABLE = $(BASEDIR)/bin/server/server
BINDIR = /usr/bin

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@mkdir -p $(BASEDIR)/bin/server
	$(CC) $(LFLAGS) $(OBJECTS) -o $@ $(LIBS)

$(BASEDIR)/obj/server/%.o: $(BASEDIR)/src/server/%.cpp
	@mkdir -p $(BASEDIR)/obj/server
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf $(BASEDIR)/obj/server $(BASEDIR)/bin/server

install:
	#install -s $(EXECUTABLE) $(BINDIR)
	sudo cp -u $(EXECUTABLE) $(BINDIR)

uninstall:
	sudo rm $(BINDIR)/$(EXECUTABLE)
