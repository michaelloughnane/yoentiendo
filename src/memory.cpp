#include <iostream>
#include "memory.h"

using namespace std;

// This file is currently much, much less complex than what I expect it will end up being.
// Right now it's primarily a placeholder so I have something to work with on the CPU side
// of things, until I get around to figuring out memory mapping and such properly.

memory::memory()
{
    uint8_t ram[64000] = {0};
}

memory::~memory(){};

uint8_t memory::getOpCode(uint16_t pc)
{
    // This method exists for modularity - once correct memory accessing is implemented,
    // this will not be as simple as accessing a big array. If I do things properly,
    // I hope I'll just be able to make changes within this file and not need to rewrite
    // things in the spots where this method is called.
    return ram[pc];
}
