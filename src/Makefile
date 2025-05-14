CC = gcc
EXEC = breakfastinator

$(EXEC): main.o
	$(CC) main.o -o breakfastinator

main.o: main.c
	$(CC) -c main.c

clean:
	rm *.o $(EXEC)