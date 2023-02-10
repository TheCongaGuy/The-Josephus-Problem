#include "ListMyJosephus.hpp"

// Constructor
// Takes two ints - 
// an M value to control how many spaces are advanced when eliminating
// an N value to set how many destinations there are at the start
ListMyJosephus::ListMyJosephus(const int MVal, const int NVal)
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
    
    // Insert locations into the list
    parseDestinations(destinationFile);
}

// Destructor
ListMyJosephus::~ListMyJosephus()
{
    // Empty as no data is being stored in memory
    // I.E. there is nothing to delete
}

// Makes the list empty
void ListMyJosephus::clear()
{
    destinations.clear();
}

// Return the current size of the list
int ListMyJosephus::currentSize() const
{
    return destinations.size();
}

// Returns true if the list is empty (bool)
bool ListMyJosephus::isEmpty() const
{
    return destinations.empty();
}

// Destroys a Destination in the list
// Returns a copy of the deleted Destination
Destination ListMyJosephus::eliminateDestination()
{
    // Traversal iterator
    std::list<Destination>::iterator iHead = destinations.begin();

    // Move forward in the list to the appropriate round pointer
    for (unsigned int i = 0; i < (round * M) % destinations.size(); i++)
        iHead++;

    // Store a copy of the data about to be deleted
    Destination destinationCopy = *iHead;

    // Remove the destination at that index
    destinations.erase(iHead);

    // Iterate to the next round
    round++;

    return destinationCopy;
}

// Prints all remaining destinations in the list
void ListMyJosephus::printAllDestinations() const
{
    // Move through the list, printing every element
    for (auto destination : destinations)
    {
        destination.printLocation();
        std::cout << ") ";
        destination.printDestinationName();
        std::cout << "| ";
    }
}

// Parses a given string into the destination list
// Takes a reference to a filestream
void ListMyJosephus::parseDestinations(std::ifstream& line)
{
    // Catches the data to input into a Destination
    std::string name;

    // Get the starting locations
    for (int i = 0; i < N; i++)
    {
        // Parse the name of the destination
        std::getline(line, name, ';');

        // Construct and insert the Destination into the list
        destinations.emplace_back(i, name);
    }

    // Close the given file
    line.close();
}

// Get the current round
int ListMyJosephus::currentRound() const { return round; }