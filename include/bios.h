#pragma once

#include "memory.h"


class Bios
{
public:
    explicit Bios(Memory* memory);
    virtual ~Bios();

    void Run();


private:
    Memory* memory_;
};
