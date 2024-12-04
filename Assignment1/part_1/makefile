part1: main.o other.o
	gcc $^ -o $@

main.o: main.c other.h
	gcc -c -Werror $< -o $@

other.o: other.c other.h
	gcc -c -Werror $< -o $@

.PHONY: clean

clean:
	rm -f *.o part1
