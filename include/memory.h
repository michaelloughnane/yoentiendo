#include <cstdint>

class memory
{
    public:
        memory();
        ~memory();

        public:
            uint8_t getOpCode(uint16_t pc);

        private:
            uint8_t ram[64000];   
};