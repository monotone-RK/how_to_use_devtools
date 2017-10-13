memcheck: clean 
	gcc -Og -Wall -Wextra -g -fsanitize=address main.c 
	./a.out

memcheck2: clean
	gcc -Og -Wall -Wextra -g main.c 
	valgrind -v --tool=memcheck --error-limit=no --leak-check=full --show-leak-kinds=all --log-file=valgrind.log ./a.out

# not allowed to use both Asan and valgrind together
# memcheck3: clean 
# 	gcc -Og -Wall -Wextra -g -fsanitize=address main.c 
# 	valgrind -v --tool=memcheck --error-limit=no --leak-check=full --show-leak-kinds=all --log-file=valgrind.log ./a.out

clean:
	rm -f a.out valgrind.log
