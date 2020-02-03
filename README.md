# Z80 Core

## Overview
A simple to use C/C++ Z80 Cpu library that can be used to emulate various
Z80 Systems. Such as computer systems like the 
ZX Spectrum, MSX, Sega Master System & and Sega Game Gear.

The goal of this research project was to write a simple yet structured design 
to better understand and emulate all the components of the original Z80 CPU.
Allowing for a readable codebase for others interested in how the Z80 works.

## Getting Started

### Build Requirements
* CMake 3+
* C++17

### Steps to build the Project
```
mkdir -p build
cd ./build
cmake  ..
make all
```

### Testing
```
mkdir -p build
cd ./build
cmake  ..
make test
```

### Project Goals 
- [X] Provide Z80 Emulation support for the [Zilog_Z180](https://en.wikipedia.org/wiki/Zilog_Z180) based architectures.
- [X] Support all the undocumented opcodes. See [Undocumented Instructions](documents/z80-documented-v0.91.pdf).
- [X] Create a simple Parser for the Z80 Assembly/Assembler mnemonics, to enable easy to read unit testing.
- [X] Create Unit tests that execute all Z80 instructions and core functionality.
- [X] Create build automaton support using Docker and Github Actions
- [ ] Add Emscripten & WebAssembly build support
- [ ] Provide Github API Development Wiki.
