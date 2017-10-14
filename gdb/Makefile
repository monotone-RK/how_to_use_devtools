# basic usage
# 1. break main
# 2. run

TYPE := random
SIZE := 64*1024

debug: 
	gcc -Og -Wall -Wextra -g3 -DDATANUM=$(SIZE) main.c 
	gdb --args ./a.out random

clean:
	rm -f a.out
