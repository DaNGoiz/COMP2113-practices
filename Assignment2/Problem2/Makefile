all: program

program: main2.o searchword.o
	g++ main2.o searchword.o -o main2

main2.o: main2.cpp searchword.h
	g++ -c main2.cpp

searchword.o: searchword.cpp searchword.h
	g++ -c searchword.cpp

clean:
	rm *.o program
