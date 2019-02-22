CXX = g++
CXX_FLAGS = -std=c++11

main: main.o BubbleSort.o InsertionSort.o
	g++ ./build/BubbleSort.o ./build/InsertionSort.o ./build/main.o -o ./build/main


main.o: ./src/main.cpp
	${CXX} ${CXX_FLAGS} -c ./src/main.cpp -o ./build/main.o

InsertionSort.o: ./src/InsertionSort.cpp ./src/InsertionSort.hpp
	${CXX} ${CXX_FLAGS} -c ./src/InsertionSort.cpp -o ./build/InsertionSort.o

BubbleSort.o: ./src/BubbleSort.cpp ./src/BubbleSort.hpp
	${CXX} ${CXX_FLAGS} -c ./src/BubbleSort.cpp -o ./build/BubbleSort.o
