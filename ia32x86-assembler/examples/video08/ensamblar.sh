#!/bin/bash
nasm -f elf32 -o suma.o suma.asm
ld -m elf_i386 -o suma suma.o
objdump -d -M intel suma
