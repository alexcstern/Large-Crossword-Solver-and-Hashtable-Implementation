# Alexander Stern
# acs4wq
CXX=clang++ $(CXXFLAGS)
DEBUG=-Wall -g
CXXFLAGS=-std=c++11

a.out: wordPuzzle.o hashTable.o timer.o
	$(CXX) wordPuzzle.o hashTable.o timer.o
	@echo "compiled successfully"

wordPuzzle.o: wordPuzzle.cpp hashTable.cpp hashTable.h timer.h timer.cpp
	$(CXX) -c -lrt wordPuzzle.cpp hashTable.cpp timer.cpp

hashTable.o: hashTable.cpp hashTable.h
	$(CXX) -c hashTable.cpp

timer.o: timer.cpp timer.h
	$(CXX) -c -lrt timer.cpp

clean:
	-rm -f *.o *~ a.out
