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
debug: main_debug.c navalfight_debug.h test_couler.c defaite.c
      gcc -o main_debug.o -c main_debug.c 
      gcc -o test_couler.o -c test_couler.c 
      gcc -o defaite.o -c defiate.c
