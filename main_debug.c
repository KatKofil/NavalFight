#include "navalfight_debug.h"

void fill_grid(char **grid){
	int conteur_col;
	int conteur_line;

	for (conteur_line = 0; conteur_line < TAILLE_GRID; conteur_line++){
		for (conteur_col = 0; conteur_col < TAILLE_GRID; conteur_col++)
			grid[conteur_line][conteur_col] = '.';
		grid[conteur_line][conteur_col] = '\0';
	}
	grid[conteur_line][0] = '\0';
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
	grid_win_couler[1][4] = '+';
}

void creat_grid_fail_end(char **grid_fail_end){
	grid_fail_end[1][1] = 'X';
	grid_fail_end[1][2] = 'X';
	grid_fail_end[1][3] = 'X';
	grid_fail_end[1][4] = 'X';

	grid_fail_end[3][6] = '+';
	grid_fail_end[3][7] = 'O';
}

void creat_grid_win_end(char **grid_win_end){
	grid_win_end[1][1] = 'X';
	grid_win_end[1][2] = 'X';
	grid_win_end[1][3] = 'X';
	grid_win_end[1][4] = 'X';
}

int test_couler_debug(char **grid){
	int retour = couler(1, 1, grid);
	printf("Grille tester:\n");
	for (int i = 0; i < TAILLE_GRID; i++)
		printf("%s\n", grid[i]);
	printf("La fonction couler renvoie: %d\n", retour);
	if (retour > 0){
	 	printf("Le bateau n'est pas couler\n");
		return 1;
	}
	else{
		printf("Le bateau est couler\n");
		return 0;
	}
}

int test_end_debug(char **grid){
	int retour = ft_detect_defaite(grid);
	printf("Grille tester:\n");
	for (int i = 0; i < TAILLE_GRID; i++){
		printf("%s\n", grid[i]);
	}
	printf("La fonction ft_detect_defaite renvoie: %d\n", retour);
	if (retour > 0){
		printf("La partie n'est pas terminee\n");
		return 1;
	}
	else{
		printf("La partie est terminee\n");
		return 0;
	}
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

	if (test_couler_debug(grid_fail_couler) == 0){
		printf("Error dans la fonction couler, attendu > 0 a == 0\n");
		return 1;
	}
	if (test_couler_debug(grid_win_couler) != 0){
		printf("Error dans la fonction couler, attendu == 0 a != 0\n");
		return 1;
	}
	if (test_end_debug(grid_fail_end) == 0){
		printf("Error dans la fonction couler, attendu > 0 a == 0\n");
		return 1;
	}
	if (test_end_debug(grid_win_couler) != 0){
		printf("Error dans la fonction couler, attendu == 0 a != 0\n");
		return 1;
	}
}
