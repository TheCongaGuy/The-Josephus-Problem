#include "TestVectorMyJosephus.hpp"
#include <ctime>

// Test N Values
void TestVectorN4M3()
{
    // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[3];

    VectorMyJosephus test(3, 4);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 4 | M = 3" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}
void TestVectorN8M3()
{
        // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[7];

    VectorMyJosephus test(3, 8);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 8 | M = 3" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}
void TestVectorN16M3()
{
        // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[15];

    VectorMyJosephus test(3, 16);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 16 | M = 3" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}
void TestVectorN32M3()
{
    // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[31];

    VectorMyJosephus test(3, 32);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 32 | M = 3" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}
void TestVectorN64M3()
{
        // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[63];

    VectorMyJosephus test(3, 64);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 64 | M = 3" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}
void TestVectorN128M3()
{
    // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[127];

    VectorMyJosephus test(3, 128);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 128 | M = 3" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}
void TestVectorN256M3()
{
    // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[255];

    VectorMyJosephus test(3, 256);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 256 | M = 3" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}
void TestVectorN512M3()
{
    // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[511];

    VectorMyJosephus test(3, 512);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 512 | M = 3" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}
void TestVectorN1024M3()
{
    // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[1023];

    VectorMyJosephus test(3, 1024);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 1024 | M = 3" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}

// Test M Values
void TestVectorN512M2()
{
        // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[511];

    VectorMyJosephus test(2, 512);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 512 | M = 2" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}
void TestVectorN512M4()
{
        // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[511];

    VectorMyJosephus test(4, 512);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 512 | M = 4" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}
void TestVectorN512M8()
{
        // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[511];

    VectorMyJosephus test(8, 512);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 512 | M = 8" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}
void TestVectorN512M16()
{
        // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[511];

    VectorMyJosephus test(16, 512);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 512 | M = 16" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}
void TestVectorN512M32()
{
        // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[511];

    VectorMyJosephus test(32, 512);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 512 | M = 32" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}
void TestVectorN512M64()
{
        // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[511];

    VectorMyJosephus test(64, 512);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 512 | M = 64" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}
void TestVectorN512M128()
{
        // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[511];

    VectorMyJosephus test(128, 512);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 512 | M = 128" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}
void TestVectorN512M256()
{
        // Aculminates time spent during actions
    double totalTime = 0, eliminationTime = 0;
    int totalEliminations = 0;

    // Array of removed destinations
    Destination removed[511];

    VectorMyJosephus test(256, 512);

    std::cout << "Original Destinations:\n";
    test.printAllDestinations();

    // Begin total clock
    clock_t startT = clock();
    while (test.currentSize() > 1)
    {
        int curRound = test.currentRound();
        removed[curRound - 1] = test.eliminateDestination();

        // Temporarilly stop clock to exclude time printing and incrementing
        totalTime += clock() - startT;

        std::cout << "\nROUND #" << curRound << " --- Remaining Destinations:\n";
        test.printAllDestinations();

        totalEliminations++;

        // Restart clock to continue timing
        startT = clock();
    }
    // End total clock
    totalTime += clock() - startT;

    std::cout << "\n-------------------------\nOrder of Elimination\n";
    for (Destination& item : removed)
    {
        item.printLocation();
        std::cout << ". ";
        item.printDestinationName();
        std::cout << std::endl;
    }
    
    std::cout << "-------------------------\nChosen Location:\n";
    test.printAllDestinations();
    std::cout << std::endl;

    // Calculate time
    totalTime = (totalTime / CLOCKS_PER_SEC) * 1000;
    eliminationTime = totalTime / totalEliminations;

    // Write to the results log
    results << "N = 512 | M = 256" << std::endl;
    
    if (totalTime >= 1) results << "Total Time: " << totalTime << " milliseconds\n";
    else if (totalTime * 1000 >= 1) results << "Total Time: " << totalTime * 1000 << " microseconds\n";
    else results << "Total Time ~0 seconds\n\n";

    if (eliminationTime >= 1) results << "Elimination Time: " << eliminationTime << " milliseconds\n\n";
    else if (eliminationTime * 1000 >= 1) results << "Elimination Time: " << eliminationTime * 1000 << " microseconds\n\n";
    else results << "Elimination Time ~0 seconds\n\n";
}