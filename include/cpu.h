#include <cstdint>

class cpu
{
    public:
        cpu();
        ~cpu();

    public:
        void initialize(int interruptPeriod, int initialPC, memory* mem);

    private:
        const static uint8_t cycles[256];
        uint8_t accumulator;
        uint8_t indexRegX;
        uint8_t indexRegY;
        uint8_t bitFlags;
        uint8_t stackPointer;
        uint16_t programCounter;
        int counter;
};