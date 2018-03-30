#include "navalfight.h"

// Test si un bateau ne dépasse pas de la grille

int ft_test_born(int indice_col,int indice_line){
	if (indice_col > TAILLE_GRID - 1)
		return 1;
	if (indice_col < 0)
		return 1;
	if (indice_line > TAILLE_GRID - 1)
		return 1;
	if (indice_line < 0)
		return 1;
	return 0;
}

// Test si un bateau est présent sur la case

int ft_test_boat(char **grid, int indice_col, int indice_line){
  if (grid[indice_line][indice_col] == 'O')
    return 1;
  return 0;
}

// Teste si on ne depasse pas de la taille de la grille et qu'il n'y a pas deja de bateau

int ft_boat_verifie(char **grid, int indice_col, int indice_line, int size_col, int size_line) {  
  int conteur_col = indice_col;
  int conteur_line = indice_line;
  
  for (indice_line; indice_line < conteur_line + size_line; indice_line++)  
    for (indice_col = conteur_col; indice_col < conteur_col + size_col; indice_col++) {

      // Si on est sur la ligne 0 ou la colonne 0
      if (indice_col == 0 || indice_line == 0) { 
	//if (ft_test_born(indice_col, indice_line) == 0)
	  if (ft_test_boat(grid, indice_col, indice_line) != 0 || ft_test_boat(grid, indice_col + 1, indice_line) != 0 || ft_test_boat(grid, indice_col, indice_line + 1) != 0) {
	    return 1;
	  } else {
	    continue;
	  }
      }

      /* if (indice_col >= TAILLE_GRID - size_col - 1 || indice_line >= TAILLE_GRID - size_line - 1) {
	if (ft_test_born(indice_col, indice_line) == 0) {
	  if (ft_test_boat(grid, indice_col, indice_line) != 0 || ft_test_boat(grid, indice_col - 1, indice_line) != 0 || ft_test_boat(grid, indice_col, indice_line - 1) != 0) {
	    return 1;
	  } else {
	    continue;
	  }
	  
	} else {
	  return 1;
	}
	}*/
	
      // Sinon, pour les autres cases
	
      // Vérifie sur la case actuelle et adjacente si on ne dépasse pas de la grille
      if (ft_test_born(indice_col, indice_line) == 0 && ft_test_born(indice_col - 1, indice_line) == 0 && ft_test_born(indice_col + 1, indice_line) == 0 && ft_test_born(indice_col, indice_line - 1) == 0 && ft_test_born(indice_col, indice_line + 1) == 0) { 

	if (ft_test_boat(grid, indice_col, indice_line) != 0 || ft_test_boat(grid, indice_col - 1, indice_line) != 0 || ft_test_boat(grid, indice_col + 1, indice_line) != 0 || ft_test_boat(grid, indice_col, indice_line + 1) != 0 || ft_test_boat(grid, indice_col, indice_line - 1) != 0) {  
	  return 1;
	}
	  
      } else { // Sinon, on a dépassé de la grille
	return 1;
      }
    }

  // Si on a réussi toutes les vérifications, on retourne 0
  return 0;
}

int ft_boat_put(char **grid, int indice_col, int indice_line, int size_col, int size_line) {  // Fonction qui appelle les vérifications et met un caractère
  int conteur_col = indice_col;
  int conteur_line = indice_line;

  if (ft_test_boat(grid, conteur_col, conteur_line) != 0) {  // Teste si il y a bateau sur la case actuelle
    return 1;
  }

  if (ft_boat_verifie(grid, indice_col, indice_line, size_col, size_line) != 0)
    return 1;


  
  
  for (conteur_line; conteur_line < indice_line + size_line; conteur_line++){  // Met le caractere 'O'
    for (conteur_col = indice_col; conteur_col < indice_col + size_col; conteur_col++) {
      printf("cont col %d cont lin %d size col %d size lin %d\n",conteur_col, conteur_line, size_col, size_line);
      //if ((conteur_col < TAILLE_GRID - size_col - 1) || (conteur_line < TAILLE_GRID - size_line - 1)){
	grid[conteur_line][conteur_col] = 'O';
	//}
    }
  }
  return 0;
  
}

// Choisis des coordonnées aléatoires

char **ft_fill_grid(char **grid, int size_col, int size_line){
	int indice_col = (rand() % TAILLE_GRID);
	int indice_line = (rand() % TAILLE_GRID);

	while (ft_boat_put(grid, indice_col, indice_line, size_col, size_line) != 0){
		indice_col = (rand() % TAILLE_GRID);
		indice_line = (rand() % TAILLE_GRID);
	}
	indice_col = (rand() % TAILLE_GRID);
	indice_line = (rand() % TAILLE_GRID);
    
	return grid;
}

// Cree une grille et appelle la fonction de placement des bateaux

char **cree_tableau(void){
	char **grid;
	int conteur_col;
	int conteur_line;

	grid = (char **)malloc(sizeof(char *) * TAILLE_GRID + 1);
	for (conteur_col = 0; conteur_col < TAILLE_GRID + 1; conteur_col++)
		grid[conteur_col] = (char *)malloc(sizeof(char) * TAILLE_GRID + 1);
	for (conteur_line = 0; conteur_line < TAILLE_GRID; conteur_line++){
		for (conteur_col = 0; conteur_col < TAILLE_GRID; conteur_col++)
			grid[conteur_line][conteur_col] = '.';
		grid[conteur_line][conteur_col] = '\0';
	}
	grid[conteur_line][0] = '\0';

	

	//grid = ft_fill_grid(grid, 18, 18);
	
	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);
	
	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);
	
	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);

	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);
	grid = ft_fill_grid(grid, 2, 2);
	
	grid = ft_fill_grid(grid, 2, 2);

	
	return grid;
}
