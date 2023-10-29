all: main3

main3: quadratic.o main3.o
	g++ -pedantic-errors -std=c++11 $^ -o $@

clean:
	rm -f main3 quadratic.o main3.o

.PHONY: clean