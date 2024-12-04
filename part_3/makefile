part3: main.o libmath.a
	gcc $< -lmath -L. -o $@

main.o: main.c
	gcc -c -Werror $< -o $@

libmath.a: mathlib.o
	ar -rcs $@ $<

mathlib.o: mathlib.c mathlib.h
	gcc -c -Werror $< -o $@

.PHONY: clean

clean:
	rm -f *.o *.a part3