main: main.o Block.o
			g++ main.o Block.o -o main

main.o: main.cpp
				g++ -c main.cpp
Block.o: Block.cpp
				g++ -c Block.cpp

clean:
				rm *.o main
