all: main

main:
	gcc main.c -o main `pkg-config --cflags --libs gtk+-3.0`

clean: 
	rm -f *.o *~ main
