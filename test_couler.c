#include"navalfight.h"

int couler_droite(int x,int y, char ** grid, int conteur){
	int resultat = 0;
	conteur++;
	if (conteur > 10)
		return 0;
	if (grid[x][y] == 'O')
		return 1;
	if (grid[x][y] == '.' || grid[x][y] == '*')
		return 0;
	if(x + 1 < 17)
		resultat += couler_droite(x + 1, y, grid, conteur);
	if (y + 1 < 17)
		resultat += couler_bas(x, y + 1, grid, conteur);
	if (y - 1 > -1)
		resultat += couler_haut(x, y - 1, grid, conteur);
	return (resultat);
}

int couler_gauche(int x,int y, char ** grid, int conteur){
	int resultat = 0;
	conteur++;
	if (conteur > 10)
		return 0;
	if (grid[x][y] == 'O')
		return 1;
	if (grid[x][y] == '.' || grid[x][y] == '*')
		return 0;
	if (x - 1 > -1)
		resultat += couler_gauche(x - 1, y, grid, conteur);
	if (y + 1 < 17)
		resultat += couler_bas(x, y + 1, grid, conteur);
	if (y - 1 > -1)
		resultat += couler_haut(x, y - 1, grid, conteur);
	return (resultat);
}

int couler_haut(int x,int y, char ** grid, int conteur){
	int resultat = 0;
	conteur++;
	if (conteur > 10)
		return 0;
	if (grid[x][y] == 'O')
		return 1;
	if (grid[x][y] == '.' || grid[x][y] == '*')
		return 0;
	if (y - 1 > -1)
		resultat += couler_haut(x, y - 1, grid, conteur);
	if (x + 1 < 17)
		resultat += couler_droite(x + 1, y, grid, conteur);
	if (x - 1 > -1)
		resultat += couler_gauche(x - 1, y, grid, conteur);
	return(resultat);
}


int couler_bas(int x,int y, char ** grid, int conteur){
	int resultat = 0;
	conteur++;
	if (conteur > 10)
		return 0;
	if (grid[x][y] == 'O')
		return 1;
	if (grid[x][y] == '.' || grid[x][y] == '*')
		return 0;
	if (y + 1 < 17)
		resultat += couler_bas(x, y + 1, grid, conteur);
	if (x + 1 < 17)
		resultat += couler_droite(x + 1, y, grid, conteur);
	if (x - 1 > -1)
		resultat += couler_gauche(x - 1, y, grid, conteur);
	return(resultat);
}

int couler(int x,int y,char ** grid){
	int resultat = 0;
	if (x + 1 < 17)
		resultat += couler_droite(x + 1, y, grid, 0);
	if (x - 1 > -1)
		resultat += couler_gauche(x - 1, y, grid, 0);
	if (y + 1 < 17)
		resultat += couler_bas(x, y + 1, grid, 0);
	if (y - 1 > -1)
		resultat += couler_haut(x, y - 1, grid, 0);
	return (resultat);
}

