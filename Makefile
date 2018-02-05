run:
	g++ -std=c++11 -O Node.cpp
	./a.out
	
check:
	valgrind --leak-check=full g++ -std=c++11 -O Node.cpp
