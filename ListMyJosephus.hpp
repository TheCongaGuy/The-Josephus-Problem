#pragma once

#include "Destination.hpp"
#include <fstream>
#include <list>

class ListMyJosephus
{
    public:
    // Constructor
    // Takes two ints - 
    // an M value to control how many spaces are advanced when eliminating
    // an N value to set how many destinations there are at the start
    ListMyJosephus(const int MVal, const int NVal);
    // Destructor
    ~ListMyJosephus();

    // Make the list empty
    void clear();
    // Return the current size of the list (int)
    int currentSize() const;
    // Returns true if the list is empty (bool)
    bool isEmpty() const;
    // Destroys a destination in the list
    // Returns a copy of the deleted destination
    Destination eliminateDestination();
    // Prints all remaining destinations in the list
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
    // List of destinations to choose from
    std::list<Destination> destinations;

    // Parses a given string into the destination list
    // Takes a reference to a filestream
    void parseDestinations(std::ifstream& line);
};