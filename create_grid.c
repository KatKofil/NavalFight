#include "navalfight.h"

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
	if (indice_col < 16){
		grid[indice_line][indice_col] = 'O';
		grid[indice_line][indice_col + 1] = 'O';
		return 0;
	}
	return 1;
}

int ft_boat_1_3(char **grid, int indice_col, int indice_line){
	int conteur_col = indice_col;
	int conteur_line = indice_line;

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
	if (ft_test_born(conteur_col + 1, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line - 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 2, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 2, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 2, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 2, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 2, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col + 2, conteur_line - 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 3, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 3, conteur_line) != 0)
			return 1;
	}
	if (indice_col < 15){
		grid[indice_line][indice_col] = 'O';
		grid[indice_line][indice_col + 1] = 'O';
		grid[indice_line][indice_col + 2] = 'O';
		return 0;
	}
	return 1;
}

int ft_boat_1_4(char **grid, int indice_col, int indice_line){
	int conteur_col = indice_col;
	int conteur_line = indice_line;

	if (ft_test_boat(grid, conteur_col, conteur_line) != 0)
		return 1;
	if (ft_test_born(conteur_col + 1, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line - 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 2) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 2) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line + 2) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 3) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 3) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line + 3) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 3) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line + 3) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line + 3) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 4) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 4) != 0)
			return 1;
	}
	if (indice_line < 14){
		grid[indice_line][indice_col] = 'O';
		grid[indice_line + 1][indice_col] = 'O';
		grid[indice_line + 2][indice_col] = 'O';
		grid[indice_line + 3][indice_col] = 'O';
		return 0;
	}
	return 1;
}

int ft_boat_1_5(char **grid, int indice_col, int indice_line){
	int conteur_col = indice_col;
	int conteur_line = indice_line;

	if (ft_test_boat(grid, conteur_col, conteur_line) != 0)
		return 1;
	if (ft_test_born(conteur_col + 1, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line - 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 2) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 2) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line + 2) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 3) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 3) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line + 3) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 3) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line + 3) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line + 3) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 4) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 4) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line + 4) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line + 4) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line + 4) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 4) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 5) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 5) != 0)
			return 1;
	}
	if (indice_line < 13){
		grid[indice_line][indice_col] = 'O';
		grid[indice_line + 1][indice_col] = 'O';
		grid[indice_line + 2][indice_col] = 'O';
		grid[indice_line + 3][indice_col] = 'O';
		grid[indice_line + 4][indice_col] = 'O';
		return 0;
	}
	return 1;
}

int ft_boat_1_6(char **grid, int indice_col, int indice_line){
	int conteur_col = indice_col;
	int conteur_line = indice_line;

	if (ft_test_boat(grid, conteur_col, conteur_line) != 0)
		return 1;
	if (ft_test_born(conteur_col, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line - 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 1) != 0)
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
	if (ft_test_born(conteur_col + 1, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line - 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 2, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 2, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 2, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 2, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 2, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col + 2, conteur_line - 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 3, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 3, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 3, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 3, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 3, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col + 3, conteur_line - 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 4, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 4, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 4, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 4, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 4, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col + 4, conteur_line - 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 5, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 5, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 5, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 5, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 5, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col + 5, conteur_line - 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 6, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 6, conteur_line) != 0)
			return 1;
	}
	if (indice_col < 12){
		grid[indice_line][indice_col] = 'O';
		grid[indice_line][indice_col + 1] = 'O';
		grid[indice_line][indice_col + 2] = 'O';
		grid[indice_line][indice_col + 3] = 'O';
		grid[indice_line][indice_col + 4] = 'O';
		grid[indice_line][indice_col + 5] = 'O';
		return 0;
	}
	return 1;
}

int ft_boat_2_2(char **grid, int indice_col, int indice_line){
	int conteur_col = indice_col;
	int conteur_line = indice_line;

	if (ft_test_boat(grid,  conteur_col, conteur_line) != 0)
		return 1;
	if (ft_test_born(conteur_col - 1, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line - 1) != 0)
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
	if (ft_test_born(conteur_col + 1, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line - 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 2) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 2, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 2, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 2) != 0)
			return 1;
	}
	if (indice_col < 15 && indice_line < 15){
		grid[indice_line][indice_col] = 'O';
		grid[indice_line + 1][indice_col] = 'O';
		grid[indice_line][indice_col + 1] = 'O';
		grid[indice_line + 1][indice_col + 1] = 'O';
		return 0;
	}
	return 1;
}

int ft_boat_2_4(char **grid, int indice_col, int indice_line){
	int conteur_col = indice_col;
	int conteur_line = indice_line;

	if (ft_test_boat(grid,  conteur_col, conteur_line) != 0)
		return 1;
	if (ft_test_born(conteur_col - 1, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line - 1) != 0)
			return 1;
	}

	if (ft_test_born(conteur_col + 1, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line - 1) != 0)
			return 1;
	}

	if (ft_test_born(conteur_col + 2, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 2, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 2, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col + 2, conteur_line - 1) != 0)
			return 1;
	}

	if (ft_test_born(conteur_col + 3, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 3, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 3, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col + 3, conteur_line - 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 4, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 4, conteur_line) != 0)
			return 1;
	}

	if (ft_test_born(conteur_col, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 2) != 0)
			return 1;
	}

	if (ft_test_born(conteur_col + 1, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 2) != 0)
			return 1;
	}

	if (ft_test_born(conteur_col + 2, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 2, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 2, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col + 2, conteur_line + 2) != 0)
			return 1;
	}

	if (ft_test_born(conteur_col + 3, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 3, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 3, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col + 3, conteur_line + 2) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 3, conteur_line + 4) == 0){
		if (ft_test_boat(grid, conteur_col + 3, conteur_line + 4) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 4, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 4, conteur_line + 1) != 0)
			return 1;
	}

	if (indice_col < 13 && indice_line < 15){
		grid[indice_line][indice_col] = 'O';
		grid[indice_line + 1][indice_col] = 'O';
		grid[indice_line][indice_col + 1] = 'O';
		grid[indice_line][indice_col + 2] = 'O';
		grid[indice_line][indice_col + 3] = 'O';
		grid[indice_line + 1][indice_col + 1] = 'O';
		grid[indice_line + 1][indice_col + 2] = 'O';
		grid[indice_line + 1][indice_col + 3] = 'O';
		return 0;
	}
	return 1;
}

int ft_boat_1_4_1_3(char **grid, int indice_col, int indice_line){
	int conteur_col = indice_col;
	int conteur_line = indice_line;

	if (ft_test_boat(grid, conteur_col, conteur_line) != 0)
		return 1;
	if (ft_test_born(conteur_col + 1, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line - 1) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line - 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line + 1) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line + 1) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 2) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 2) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line + 2) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 3) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 3) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col - 1, conteur_line + 3) == 0){
		if (ft_test_boat(grid, conteur_col - 1, conteur_line + 3) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col, conteur_line + 4) == 0){
		if (ft_test_boat(grid, conteur_col, conteur_line + 4) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line + 3) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 3) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 1, conteur_line + 4) == 0){
		if (ft_test_boat(grid, conteur_col + 1, conteur_line + 4) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 2, conteur_line + 3) == 0){
		if (ft_test_boat(grid, conteur_col + 2, conteur_line + 3) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 2, conteur_line + 2) == 0){
		if (ft_test_boat(grid, conteur_col + 2, conteur_line + 2) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 3, conteur_line + 3) == 0){
		if (ft_test_boat(grid, conteur_col + 3, conteur_line + 3) != 0)
			return 1;
	}
	if (ft_test_born(conteur_col + 2, conteur_line + 4) == 0){
		if (ft_test_boat(grid, conteur_col + 2, conteur_line + 4) != 0)
			return 1;
	}
	if (indice_line < 13 && indice_col < 14){
		grid[indice_line][indice_col] = 'O';
		grid[indice_line + 1][indice_col] = 'O';
		grid[indice_line + 2][indice_col] = 'O';
		grid[indice_line + 3][indice_col] = 'O';
		grid[indice_line + 3][indice_col + 1] = 'O';
		grid[indice_line + 3][indice_col + 2] = 'O';
		return 0;
	}
	return 1;
}


char **ft_fill_grid(char **grid){
	int indice_col = (rand() % 17);
	int indice_line = (rand() % 17);

	while (ft_boat_1_2(grid, indice_col, indice_line) != 0){
		indice_col = (rand() % 17);
		indice_line = (rand() % 17);
	}
	indice_col = (rand() % 17);
	indice_line = (rand() % 17);
	while (ft_boat_1_3(grid, indice_col, indice_line) != 0){
		indice_col = (rand() % 17);
		indice_line = (rand() % 17);
	}
	indice_col = (rand() % 17);
	indice_line = (rand() % 17);
	while (ft_boat_1_4(grid, indice_col, indice_line) != 0){
		indice_col = (rand() % 17);
		indice_line = (rand() % 17);
	}
	indice_col = (rand() % 17);
	indice_line = (rand() % 17);
	while (ft_boat_1_5(grid, indice_col, indice_line) != 0){
		indice_col = (rand() % 17);
		indice_line = (rand() % 17);
	}
	indice_col = (rand() % 17);
	indice_line = (rand() % 17);
	while (ft_boat_1_6(grid, indice_col, indice_line) != 0){
		indice_col = (rand() % 17);
		indice_line = (rand() % 17);
	}
	indice_col = (rand() % 17);
	indice_line = (rand() % 17);
	while (ft_boat_2_2(grid, indice_col, indice_line) != 0){
		indice_col = (rand() % 17);
		indice_line = (rand() % 17);
	}
	indice_col = (rand() % 17);
	indice_line = (rand() % 17);
	while (ft_boat_2_4(grid, indice_col, indice_line) != 0){
		indice_col = (rand() % 17);
		indice_line = (rand() % 17);
	}
	indice_col = (rand() % 17);
	indice_line = (rand() % 17);
	while (ft_boat_1_4_1_3(grid, indice_col, indice_line) != 0){
		indice_col = (rand() % 17);
		indice_line = (rand() % 17);
	}
	return grid;
}

char **cree_tableau(void){
	char **grid;
	int conteur_col;
	int conteur_line;

	srand(time(NULL));
	grid = (char **)malloc(sizeof(char *) * 18);
	for (conteur_col = 0; conteur_col < 18; conteur_col++)
		grid[conteur_col] = (char *)malloc(sizeof(char) * 18);
	for (conteur_line = 0; conteur_line < 17; conteur_line++){
		for (conteur_col = 0; conteur_col < 17; conteur_col++)
			grid[conteur_line][conteur_col] = '.';
		grid[conteur_line][conteur_col] = '\0';
	}
	grid[conteur_line][0] = '\0';
	grid = ft_fill_grid(grid);
	return grid;
}
