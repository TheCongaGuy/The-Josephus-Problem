#pragma once

#include "VectorMyJosephus.hpp"

extern std::ofstream results;

// Test N Values
void TestVectorN4M3();
void TestVectorN8M3();
void TestVectorN16M3();
void TestVectorN32M3();
void TestVectorN64M3();
void TestVectorN128M3();
void TestVectorN256M3();
void TestVectorN512M3();
void TestVectorN1024M3();

// Test M Values
void TestVectorN512M2();
void TestVectorN512M4();
void TestVectorN512M8();
void TestVectorN512M16();
void TestVectorN512M32();
void TestVectorN512M64();
void TestVectorN512M128();
void TestVectorN512M256();