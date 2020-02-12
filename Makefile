CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: test

clean:
	rm test

Test: functions_to_implement.o  test.cpp
	$(CXX) $(CXXFLAGS) test.cpp functions_to_implement.o -o test

functions_to_implement.o: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp


