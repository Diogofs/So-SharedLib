install:
	gcc -g -fPIC -shared -Wl,-soname,libsharedprog.so fatorial.c fibonacci.c quicksort.c minmax.c -o libsharedprog.so.01
	ln -s libsharedprog.so.01 libsharedprog.so
	cp libsharedprog.so.01 /usr/lib
	cp libsharedprog.so /usr/lib
	rm libsharedprog.so*
	cp funcs.h /usr/include

run:
	gcc prog.c -o program -lsharedprog


clean:
	rm -rf libsharedprog.so* *.o program
