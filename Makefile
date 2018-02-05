CC=gcc
SRC=create_grid.c boucle.c main.c afficha.c
OBJ=$(SRC:.c=.o)
FLAGS=-Wall

navalfight:    $(OBJ) navalfight.h
	$(CC) -o $@ $(OBJ)
%.o:	%.c
	$(CC) -c $< $(CFLAGS)

clean:
	rm *.o *~ coremain.o : main.c
