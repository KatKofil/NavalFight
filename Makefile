CC=gcc
SRC=create_grid.c boucle.c main.c afficha.c defaite.c test_couler.c put_couler.c test_taille_grid.c
OBJ=$(SRC:.c=.o)
FLAGS=-Wall

navalfight:    $(OBJ) navalfight.h
	$(CC) -o $@ $(OBJ)
%.o:	%.c
	$(CC) -c $< $(CFLAGS)

clean:
	rm $(OBJ) *~
