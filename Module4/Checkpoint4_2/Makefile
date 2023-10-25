FLAGS = -pedantic-errors -std=c++11

gcd.o: gcd.cpp gcd.h
	g++ $(FLAGS) -c $<

lcm.o: lcm.cpp lcm.h gcd.h
	g++ $(FLAGS) -c $<

calc.o: calc.cpp lcm.h gcd.h
	g++ $(FLAGS) -c $<

calc: gcd.o lcm.o calc.o
	g++ $(FLAGS) $^ -o $@

clean:
	rm -f gcd gcd.o lcm lcm.o calc calc.o

.PHONY: clean