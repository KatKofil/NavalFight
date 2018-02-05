#include "navalfight.h"

int ft_detect_defaite(char **grid){
	int conteur_col;
	int conteur_line;

	for (conteur_line = 0; grid[conteur_line][conteur_col] != NULL; conteur_line++){
		for (conteur_col = 0; grid[conteur_line][conteur_col] != NULL; conteur_col++)
			if (grid[conteur_line][conteur_col] == 'O')
				return (1);
	}
	return 0;
}
