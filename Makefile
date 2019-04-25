CXX = g++
CXXFLAGS = -g

all: run

run: HashEntry.o HashTable.o main.o
	$(CXX) HashEntry.o HashTable.o main.o -o run

HashEntry.o: HashEntry.cpp
	$(CXX) $(CXXFLAGS) -c HashEntry.cpp

HashTable.o: HashTable.cpp
	$(CXX) $(CXXFLAGS) -c HashTable.cpp

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm HashEntry.o HashTable.o main.o run


