main: *.o
	g++ -g -o main *.o

*.o: *.cpp
	g++ -c -g *.cpp

run: main
	./main

clean:
	rm -f *.o main