#include <iostream>
#include "cpu.h"
#include "memory.cpp"

using namespace std;

const uint8_t cpu::cycles[256] =
{
    7, 6, 0, 0, 0, 3, 5, 0, 3, 2, 2, 0, 0, 4, 6, 0,
    2, 5, 0, 0, 0, 4, 6, 0, 2, 4, 0, 0, 0, 4, 7, 0,
    6, 6, 0, 0, 3, 3, 5, 0, 4, 2, 2, 0, 4, 4, 6, 0,
    2, 5, 0, 0, 0, 4, 6, 0, 2, 4, 0, 0, 0, 4, 7, 0,
    6, 6, 0, 0, 0, 3, 5, 0, 3, 2, 2, 0, 3, 4, 6, 0,
    2, 5, 0, 0, 0, 4, 6, 0, 2, 4, 0, 0, 0, 4, 7, 0,
    6, 6, 0, 0, 0, 3, 5, 0, 4, 2, 2, 0, 5, 4, 6, 0,
    2, 5, 0, 0, 0, 4, 6, 0, 2, 4, 0, 0, 0, 4, 7, 0,
    0, 6, 0, 0, 3, 3, 3, 0, 2, 0, 2, 0, 4, 4, 4, 0,
    2, 6, 0, 0, 4, 4, 4, 0, 2, 5, 2, 0, 0, 5, 0, 0,
    2, 6, 2, 0, 3, 3, 3, 0, 2, 2, 2, 0, 4, 4, 4, 0,
    2, 5, 0, 0, 4, 4, 4, 0, 2, 4, 2, 0, 4, 4, 4, 0,
    2, 6, 0, 0, 3, 3, 5, 0, 2, 2, 2, 0, 4, 4, 6, 0,
    2, 5, 0, 0, 0, 4, 6, 0, 2, 4, 0, 0, 0, 4, 7, 0,
    2, 6, 0, 0, 3, 3, 5, 0, 2, 2, 2, 0, 4, 4, 6, 0,
    2, 5, 0, 0, 0, 4, 6, 0, 8, 9, 0, 0, 0, 4, 7, 0
};

cpu::cpu()
{
    uint8_t accumulator = 0;
    uint8_t indexRegX = 0;
    uint8_t indexRegY = 0;
    uint8_t bitFlags = 0;
    uint8_t stackPointer = 0;
    uint16_t programCounter = 0;
    int counter = 0;
}

void cpu::initialize(int interruptPeriod, int initialPC, memory* mem)
{
    programCounter = initialPC;
    counter = interruptPeriod;

    while(true)
    {
        uint8_t opCode = mem->getOpCode(programCounter++);
        counter -= cycles[opCode]; // This counter may be de-incremented more during opcode logic.

        switch(opCode)
        {
            // tbd
        }

        if(counter <= 0)
        {
            bool interruptRequired = false;

            // Check for interrupts, etc.

            counter += interruptPeriod;
            if(interruptRequired)
                break;
        }
    }
}

