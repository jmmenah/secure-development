#!/bin/bash
# sudo apt install gcc-multilib
nasm -f elf32 -o $1.o $1.asm
ld -m elf_i386 -o $1 $1.o
gcc -m32 -o $1 $1.o
