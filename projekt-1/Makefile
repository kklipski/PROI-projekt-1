CC=g++


CCFLAGS=-c -Wall


release: program


debug: CCFLAGS += -g
debug: program


program: tests.o heap.o
	$(CC) tests.o heap.o -o program


tests.o: tests.cpp heap.hpp
	$(CC) $(CCFLAGS) tests.cpp


heap.o: heap.cpp heap.hpp
	$(CC) $(CCFLAGS) heap.cpp


clean:
	rm -f *.o
