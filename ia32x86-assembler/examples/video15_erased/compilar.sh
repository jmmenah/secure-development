#sudo apt-get install gcc-multilib
gcc -m32 -ggdb3 -O0 -Wall -o overflow -fno-stack-protector -fno-pie -fno-asynchronous-unwind-tables  -o $1 $1.c

