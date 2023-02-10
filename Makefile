# Builds a standard version of the program without debug symbols
prog: Destination.hpp ListMyJosephus.hpp TestListMyJosephus.hpp VectorMyJosephus.hpp TestVectorMyJosephus.hpp
	@echo Building...
	@g++ -o main main.cpp destination.cpp listMyJosephus.cpp testListMyJosephus.cpp vectorMyJosephus.cpp testVectorMyJosephus.cpp
	@./main

# Runs the program in the background without printing to speed up time, and
# outputs result.log to the terminal
time: Destination.hpp ListMyJosephus.hpp TestListMyJosephus.hpp VectorMyJosephus.hpp TestVectorMyJosephus.hpp
	@echo Getting Results
	@g++ -o main main.cpp destination.cpp listMyJosephus.cpp testListMyJosephus.cpp vectorMyJosephus.cpp testVectorMyJosephus.cpp
	@./main > /dev/null 2>&1
	@cat results.log

# Builds the program to Class Standards with all warnings, debug symbols, and std=c++11 flags
debug: Destination.hpp ListMyJosephus.hpp TestListMyJosephus.hpp VectorMyJosephus.hpp TestVectorMyJosephus.hpp
	@echo Building...
	@g++ -g -Wall -std=c++11 -o main main.cpp destination.cpp listMyJosephus.cpp testListMyJosephus.cpp vectorMyJosephus.cpp testVectorMyJosephus.cpp
	@./main
