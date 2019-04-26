CXX = g++
CXXFLAGS = -g

all: run

run: HastTable.o main.o
  $(CXX) HashTable.o main.o -o run

HashTable.o: HashTable.cpp
  $(CXX) $(CXXFLAGS) -c HashTable.cpp

main.o: main.cpp
  $(CXX) $(CXXFLAGS) -c main.cpp

clean:
  rm HashTable.o main.o run
