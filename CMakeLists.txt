cmake_minimum_required(VERSION 3.8)

project(pdp11)

# Use C++11 standard for compiling
set(CMAKE_CXX_STANDARD 11)

# Bring source files in src/ directory into the project
set(SOURCE_FILES src/main.cpp src/cpu.cpp src/decoder.cpp src/emulator.cpp
    src/memory.cpp src/instruction.cpp src/bios.cpp)

# Bring header files in include/ directory into the project
set(HEADER_FILES include/cpu.h include/decoder.h include/emulator.h include/memory.h
    include/instruction.h include/bios.h)

# Add all sources to target
add_executable(pdp11 ${SOURCE_FILES} ${HEADER_FILES})

# Add paths to includes
target_include_directories(pdp11 PUBLIC include)


