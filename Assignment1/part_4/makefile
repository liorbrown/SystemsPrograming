part4: main.o libadvmath.so
	gcc -Wall $< -L. -ladvmath -o $@

main.o: main.c
	gcc -c -Werror $< -o $@

libadvmath.so: advmath.o
	gcc -shared $< -o $@

advmath.o: advmath.c advmath.h
	gcc -c -Werror -fPIC $< -o $@

.PHONY: clean

clean:
	rm *.o *.so part4