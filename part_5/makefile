part5: main.o libadvmath.so libmath.a
	gcc -Wall $< -L. -ladvmath -lmath -o $@

main.o: main.c
	gcc -c -Werror $< -o $@

libadvmath.so: advmath.o
	gcc -shared $< -o $@

advmath.o: advmath.c advmath.h
	gcc -c -Werror -fPIC $< -o $@

libmath.a: mathlib.o
	ar -rcs $@ $<

mathlib.o: mathlib.c mathlib.h
	gcc -c -Werror $< -o $@

.PHONY: clean

clean:
	rm *.o *.so *.a part5