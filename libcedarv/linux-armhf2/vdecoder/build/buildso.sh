#!/bin/bash
  rm *.o
gcc -g -c -fPIC *.c  
#-D__LINKFORLINUX
  rm *.a
  ar cq libbdv.a *.o
  gcc -shared -o libbdv.so -Wl,--whole-archive libbdv.a -Wl,--no-whole-archive
  cp libbdv.so /usr/lib/
