#include "VectorMyJosephus.hpp"

// Constructor
// Takes two ints - 
// an M value to control how many spaces are advanced when eliminating
// an N value to set how many destinations there are at the start
VectorMyJosephus::VectorMyJosephus(const int MVal, const int NVal)
{
    // Set round value
    round = 1;

    // Assign input values
    M = MVal;
    N = NVal;

    // Check input is within constraints
    if (NVal <= 0) N = 1;
    if (NVal >= 1025) N = 1024;
    
    if (MVal < 0) M = 0;
    if (MVal >= N) M = N - 1;

    // Set the seed for random number generation
    srand(time(NULL));

    // Open the destination file
    std::string discard;
    int line = rand() % 25;
    std::ifstream destinationFile("destinations.csv");

    // Move to the randomly selected line
    for (int i = 0; i < line; i++)
        std::getline(destinationFile, discard);
    
    // Insert locations into the vector
    parseDestinations(destinationFile);
}

// Destructor
VectorMyJosephus::~VectorMyJosephus()
{
    // Empty as no data is being stored in memory
    // I.E. there is nothing to delete
}

// Makes the vector empty
void VectorMyJosephus::clear()
{
    destinations.clear();
}

// Return the current size of the vector
int VectorMyJosephus::currentSize() const
{
    return destinations.size();
}

// Returns true if the vector is empty (bool)
bool VectorMyJosephus::isEmpty() const
{
    return destinations.empty();
}

// Destroys a Destination in the vector
// Returns a copy of the deleted Destination
Destination VectorMyJosephus::eliminateDestination()
{
    // Traversal iterator
    std::vector<Destination>::iterator iHead = destinations.begin();

    // Move forward in the vector to the appropriate round pointer
    iHead += (round * M) % destinations.size();

    // Store a copy of the data about to be deleted
    Destination destinationCopy = *iHead;

    // Remove the destination at that index
    destinations.erase(iHead);

    // Iterate to the next round
    round++;

    return destinationCopy;
}

// Prints all remaining destinations in the vector
void VectorMyJosephus::printAllDestinations() const
{
    // Move through the vector, printing every element
    for (auto destination : destinations)
    {
        destination.printLocation();
        std::cout << ") ";
        destination.printDestinationName();
        std::cout << "| ";
    }
}

// Parses a given string into the destination vector
// Takes a reference to a filestream
void VectorMyJosephus::parseDestinations(std::ifstream& line)
{
    // Catches the data to input into a Destination
    std::string name;

    // Get the starting locations
    for (int i = 0; i < N; i++)
    {
        // Parse the name of the destination
        std::getline(line, name, ';');

        // Construct and insert the Destination into the vector
        destinations.emplace_back(i, name);
    }

    // Close the given file
    line.close();
}

// Get the current round
int VectorMyJosephus::currentRound() const { return round; }