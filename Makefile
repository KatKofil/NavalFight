CC=gcc
SRC=create_grid.c boucle.c main.c afficha.c defaite.c test_couler.c put_couler.c test_taille_grid.c
OBJ=$(SRC:.c=.o)
FLAGS=-Wall

navalfight:	$(OBJ) navalfight.h
	$(CC) -o $@ $(OBJ)

%.o:	%.c
	$(CC) -c $< $(CFLAGS)

clean:
	rm $(OBJ) main_debug.o *~

debug:	main_debug.c navalfight_debug.h test_couler.c defaite.c
	gcc -o debug main_debug.c test_couler.c defaite.c

mrproper:
	rm navalfight debug
