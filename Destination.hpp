#pragma once

#include <iostream>
#include <string>

class Destination
{
    public:
    // Constructor
    // Takes the int index paired to this object, and a string name
    Destination(const int newPosition = 0, const std::string newName = "N/A");
    // Destructor
    ~Destination();

    // Print info about destination
    void printLocation() const;
    void printDestinationName() const;

    private:
    // Position of the destination inside of the container it is stored
    int position;
    // Name of the destination
    std::string name;
};