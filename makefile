program: derle calistir

derle:
	g++ -I ./include/ -o ./lib/ArrayList.o -c ./src/ArrayList.cpp
	g++ -I ./include/ -o ./lib/Factorial.o -c ./src/Factorial.cpp
	g++ -I ./include/ -o ./bin/Main ./lib/ArrayList.o ./lib/Factorial.o ./src/Main.cpp
calistir:
	./bin/Main