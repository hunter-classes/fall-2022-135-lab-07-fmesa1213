main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o
	
main.o: main.cpp funcs.h

clean:
	rm -f main.o funcs.o tests.o
