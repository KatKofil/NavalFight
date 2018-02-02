#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//test si un bateau est present dans la case et les case adjacente

int ft_test_born(int indice_col,int indice_line){
	if (indice_col > 16)
		return 1;
	if (indice_col < 0)
		return 1;
	if (indice_line > 16)
		return 1;
	if (indice_line < 0)
		return 1;
	return 0;
}

int ft_test_boat(char **grid, int indice_col, int indice_line){
	if (grid[indice_line][indice_col] == 'O')
		return 1;
	return 0;
}

int ft_boat_1_2(char **grid, int indice_col, int indice_line){
	int conteur_col = indice_col;
	int conteur_line = indice_line;

	if (ft_test_boat(grid, conteur_col, conteur_line) != 0)
		return 1;
	if (ft_test_born(conteur_col, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line - 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 2, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 2, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line - 1) != 0)
			return 1;
	}
}

char **ft_fill_grid(char **grid){
	int indice_col = (rand() % 17);
	int indice_line = (rand() % 17);

	ft_test_boat(grid, indice_line, indice_col);
	ft_boat_1_2(grid);
}


int main(void){
	char **grid;
	int conteur_col;
	int conteur_line;
	int test;
	int test1;
	int conteur_boat;

	srand(time(NULL));
	grid = (char **)malloc(sizeof(char *) * 18);
	for (conteur_col = 0; conteur_col < 18; conteur_col++)
		grid[conteur_col] = (char *)malloc(sizeof(char) * 18);
	for (conteur_line = 0; conteur_line < 17; conteur_line++){
		for (conteur_col = 0; conteur_col < 17; conteur_col++)
			grid[conteur_line][conteur_col] = '-';
		grid[conteur_line][conteur_col] = '\0';
	}
	grid[conteur_line][0] = '\0';
	printf("%d\n", test);
	test1 = (rand() % 17);
	printf("%d\n", test1);
	for (int )
	grid = ft_fill_grid(17, 17, grid);
	for (conteur_line = 0; conteur_line < 17; conteur_line++){
		for (conteur_col = 0; conteur_col < 17; conteur_col++)
			printf("%c", grid[conteur_line][conteur_col]);
		printf("\n");
	}
	return 0;
}
