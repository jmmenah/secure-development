#!/bin/bash
nasm -f elf32 -o helloworld.o helloworld.asm
ld -m elf_i386 -o helloworld helloworld.o
#Consultar llamadas al sistema /usr/include/asm/unistd_32.h
