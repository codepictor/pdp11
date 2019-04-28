#pragma once

#include "memory.h"
#include "cpu.h"


class Emulator
{
public:
    explicit Emulator();
    virtual ~Emulator();

    void Start();

    void Dump();


private:
    Memory memory_;
    Cpu cpu_;
};


