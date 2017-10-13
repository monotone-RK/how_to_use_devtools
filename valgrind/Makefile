TYPE := random
SIZE := 64*1024

memcheck: 
	gcc -Og -Wall -Wextra -g -DDATANUM=$(SIZE) main.c 
	valgrind -v --tool=memcheck --error-limit=no --leak-check=full --show-leak-kinds=all --log-file=valgrind.log ./a.out $(TYPE)

clean:
	rm -f a.out valgrind.log
