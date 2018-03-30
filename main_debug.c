#include "navalFight_test.h"

void fill_grid(char **grid){
	int conteur_col;
	int conteur_line;

	for (conteur_line = 0; conteur_line < TAILLE_GRID; conteur_line++){
		for (conteur_col = 0; conteur_col < TAILLE_GRID; conteur_col)
			grid[conteur_line][conteur_col] = '.';
		grid[conteur_line][conteur_col] = '\0';
	}
	grid[conteur_line][0];
}

void creat_grid_fail_couler(char **grid_fail_couler){
	grid_fail_couler[1][1] = '+';
	grid_fail_couler[1][2] = '+';
	grid_fail_couler[1][3] = 'O';
	grid_fail_couler[1][4] = 'O';
}

void creat_grid_win_couler(char **grid_win_couler){
	grid_win_couler[1][1] = '+';
	grid_win_couler[1][2] = '+';
	grid_win_couler[1][3] = '+';
	grid_win_couler[1][4] = 'O';
}

void creat_grid_fail_end(char **grid_fail_couler){
	grid_fail_end[1][1] = 'X';
	grid_fail_end[1][2] = 'X';
	grid_fail_end[1][3] = 'X';
	grid_fail_end[1][4] = 'X';

	grid_fail_end[3][6] = '+';
	grid_fail_end[3][7] = 'O';
}

void creat_grid_win_end(char **grid_fail_couler){
	grid_fail_couler[1][1] = '+';
	grid_fail_couler[1][2] = '+';
	grid_fail_couler[1][3] = 'O';
	grid_fail_couler[1][4] = 'O';
}

int main(void){

	char **grid_fail_couler;
	char **grid_win_couler;
	char **grid_fail_end;
	char **grid_win_end;

	grid_fail_couler = (char **)malloc(sizeof(char *) * TAILLE_GRID + 1);
	for (int i = 0; i < TAILLE_GRID + 1; i++)
		grid_fail_couler[i] = (char *)malloc(sizeof(char) * TAILLE_GRID + 1);
	fill_grid(grid_fail_couler);

	grid_win_couler = (char **)malloc(sizeof(char *) * TAILLE_GRID + 1);
	for (int i = 0; i < TAILLE_GRID + 1; i++)
		grid_win_couler[i] = (char *)malloc(sizeof(char) * TAILLE_GRID + 1);
	fill_grid(grid_win_couler);

	grid_fail_end = (char **)malloc(sizeof(char *) * TAILLE_GRID + 1);
	for (int i = 0; i < TAILLE_GRID + 1; i++)
		grid_fail_end[i] = (char *)malloc(sizeof(char) * TAILLE_GRID + 1);
	fill_grid(grid_fail_end);

	grid_win_end = (char **)malloc(sizeof(char *) * TAILLE_GRID + 1);
	for (int i = 0; i < TAILLE_GRID + 1; i++)
		grid_win_end[i] = (char *)malloc(sizeof(char) * TAILLE_GRID + 1);
	fill_grid(grid_win_end);

	creat_grid_fail_couler(grid_fail_couler);
	creat_grid_win_couler(grid_win_couler);
	creat_grid_fail_end(grid_fail_end);
	creat_grid_win_end(grid_win_end);

	test_couler_debug(grid_fail_couler);
	test_couler_debug(grid_win_couler);
	test_end_debug(grid_fail_end);
	test_end_debug(grid_win_couler);
}
