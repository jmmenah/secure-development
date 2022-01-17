#!/bin/bash
nasm -f elf32 -o helloworld-len.o helloworld-len.asm
ld -m elf_i386 -o helloworld-len helloworld-len.o
