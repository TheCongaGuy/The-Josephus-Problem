#include "Destination.hpp"

// Constructor
// Takes the int index paired to this object, and a string name
Destination::Destination(const int newPosition, const std::string newName)
{
    position = newPosition;
    name = newName;
}

// Destructor
Destination::~Destination()
{
    // Empty as no data is being stored in memory
    // I.E. there is nothing to delete
}

// Prints the location index of this item in it's storage container
void Destination::printLocation() const
{
    std::cout << position;
}

// Prints the name of this location
void Destination::printDestinationName() const
{
    std::cout << '"' + name + '"';
}