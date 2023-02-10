#pragma once

#include "ListMyJosephus.hpp"

extern std::ofstream results;

// Test N Values
void TestListN4M3();
void TestListN8M3();
void TestListN16M3();
void TestListN32M3();
void TestListN64M3();
void TestListN128M3();
void TestListN256M3();
void TestListN512M3();
void TestListN1024M3();

// Test M Values
void TestListN512M2();
void TestListN512M4();
void TestListN512M8();
void TestListN512M16();
void TestListN512M32();
void TestListN512M64();
void TestListN512M128();
void TestListN512M256();