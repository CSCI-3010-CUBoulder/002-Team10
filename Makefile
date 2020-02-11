CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: test

clean:
	rm test

Test: test.cpp functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) test.cpp functions_to_implement.cpp -o test


