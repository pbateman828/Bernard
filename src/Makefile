CXX=g++
CXXFLAGS=-g -std=c++11 -Wall -pedantic
BIN=run

SRC=$(wildcard *.cpp)
OBJ=$(SRC:%.cpp=%.o)

all: src/$(OBJ)
	$(CXX) -o bin/$(BIN) bin/$^

build/%.o: src/%.c
	$(CXX) src/$@ -c build/$<

clean:
	rm -f build/*.o
	rm bin/$(BIN)
