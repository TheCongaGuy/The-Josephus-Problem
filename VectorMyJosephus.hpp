#pragma once

#include "Destination.hpp"
#include <fstream>
#include <vector>

class VectorMyJosephus
{
     public:
    // Constructor
    // Takes two ints - 
    // an M value to control how many spaces are advanced
    // an N value to set how many destinations there are at the start
    VectorMyJosephus(const int MVal, const int NVal);
    // Destructor
    ~VectorMyJosephus();

    // Make the vector empty
    void clear();
    // Return the current size of the vector (int)
    int currentSize() const;
    // Returns true if the vector is empty (bool)
    bool isEmpty() const;
    // Destroys a destination in the vector
    // Returns a copy of the deleted destination
    Destination eliminateDestination();
    // Prints all remaining destinations in the vector
    void printAllDestinations() const;

    // Get the current round
    int currentRound() const;

    private:
    // Current round of eliminations
    int round;
    // Interval of elimination
    int M;
    // Number of starting locations
    int N;
    // Vector of destinations to choose from
    std::vector<Destination> destinations;

    // Parses a given string into the destination vector
    // Takes a reference to a filestream
    void parseDestinations(std::ifstream& line);
};