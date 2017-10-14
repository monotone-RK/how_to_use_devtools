# 1. perf top
# 2. perf list
# 3. perf stat
# 4. perf record
# 5. perf report

TYPE := random
SIZE := 64*1024

compile:
	gcc -Og -Wall -Wextra -g -DDATANUM=$(SIZE) main.c 

stat: clean compile
	perf stat ./a.out $(TYPE)

record: clean compile
	perf record -g ./a.out $(TYPE)

view: record
	perf report -g -G --stdio

clean:
	rm -f a.out perf.data
