#include "TestListMyJosephus.hpp"
#include "TestVectorMyJosephus.hpp"

std::ofstream results("results.log");

/*
    PA2 QUESTIONS:
    1)  Yes, the processor on each individual machine running this program matters.
        Each cpu will have different CPIs (Cycles Per Instruction) as well as different
        ISAs (Instruction Set Architecture) and different Clock Rates in general, which
        will effect how much time it takes to preform operations.

    2)  In general and judging based on time complexity, std::list preforms better than
        std::vector. In the worst case scenario of 1024 items in each, Vector finished
        with an elapsed time of 7.97 milliseconds while List finished with 7.78 milliseconds.
        Additionally, the average of all 512-item runs for Vector resulted with an Elimination Time
        of 5.125 microseconds while List showed 4.239 microseconds. It should be noted that these
        results do depend on input size, with Vector preforming better on average for items <= 256
    
    3)  Changing the N variable, or how many items there are to start with, causes the program's
        total run time to grow linearly. The more items N, means more loops to remove a single item,
        means more processing time. Changing the M variable simply changes what index we are removing,
        not necessarily how many things we are removing. Additionally, since I made finding the index
        an expression of # of rounds * M, we can find the index at constant time, meaning the time on
        average isn't changed.
*/

int main(int argc, char* argv[])
{
    results << "~~List Testing~~" << std::endl;

    std::cout << "--------------Test ListMyJosephus--------------\n";
    TestListN4M3();
    TestListN8M3();
    TestListN16M3();
    TestListN32M3();
    TestListN64M3();
    TestListN128M3();
    TestListN256M3();
    TestListN512M3();
    TestListN1024M3();

    TestListN512M2();
    TestListN512M4();
    TestListN512M8();
    TestListN512M16();
    TestListN512M32();
    TestListN512M64();
    TestListN512M128();
    TestListN512M256();

    results << "~~Vector Testing~~" << std::endl;

    std::cout << "--------------Test VectorMyJosephus--------------\n";
    TestVectorN4M3();
    TestVectorN8M3();
    TestVectorN16M3();
    TestVectorN32M3();
    TestVectorN64M3();
    TestVectorN128M3();
    TestVectorN256M3();
    TestVectorN512M3();
    TestVectorN1024M3();

    TestVectorN512M2();
    TestVectorN512M4();
    TestVectorN512M8();
    TestVectorN512M16();
    TestVectorN512M32();
    TestVectorN512M64();
    TestVectorN512M128();
    TestVectorN512M256();

    return 0;
}