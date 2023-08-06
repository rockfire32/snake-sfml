CXX=g++
CXXFLAGS=-Wall -Wextra -O2 -m64
LDFLAGS=-lsfml-system -lsfml-window -lsfml-graphics

INCLUDE=-Isrc/include
SOURCES=$(shell find . -name *.cpp)
TARGETS=$(SOURCES:.cpp=.o)

EXEC=snake-sfml

default: $(TARGETS)
	$(CXX) $(CXXFLAGS) $(TARGETS) -o $(EXEC) $(INCLUDE) $(LDFLAGS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCLUDE)

clean:
	rm -rf $(shell find . -name *.o)

