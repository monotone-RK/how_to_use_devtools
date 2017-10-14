TYPE := random
SIZE := 64*1024

run: clean
	gcc -Og -Wall -Wextra -g -pg -DDATANUM=$(SIZE) main.c 
	./a.out $(TYPE)

profile: gmon.out
	gprof a.out gmon.out > profile.log

view: gmon.out
	gprof a.out gmon.out | gprof2dot | dot -Tpng -o output.png

clean:
	rm -f a.out gmon.out profile.log output.png
