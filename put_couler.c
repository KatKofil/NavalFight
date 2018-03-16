#include"navalfight.h"

int put_couler_droite(int x,int y, char ** grid, int conteur){
	int resultat = 0;
	conteur++;
	if (grid[x][y] == '+')
		grid[x][y] = 'X';
	if (conteur > 30)
		return 0;
	if (grid[x][y] == '.' || grid[x][y] == '*')
		return 0;
	if(x + 1 < TAILLE_GRID)
		resultat += put_couler_droite(x + 1, y, grid, conteur);
	if (y + 1 < TAILLE_GRID)
		resultat += put_couler_bas(x, y + 1, grid, conteur);
	if (y - 1 > -1)
		resultat += put_couler_haut(x, y - 1, grid, conteur);
	return (resultat);
}

int put_couler_gauche(int x,int y, char ** grid, int conteur){
	int resultat = 0;
	conteur++;
	if (grid[x][y] == '+')
		grid[x][y] = 'X';
	if (conteur > 30)
		return 0;
	if (grid[x][y] == '.' || grid[x][y] == '*')
		return 0;
	if (x - 1 > -1)
		resultat += put_couler_gauche(x - 1, y, grid, conteur);
	if (y + 1 < 17)
		resultat += put_couler_bas(x, y + 1, grid, conteur);
	if (y - 1 > -1)
		resultat += put_couler_haut(x, y - 1, grid, conteur);
	return (resultat);
}

int put_couler_haut(int x,int y, char ** grid, int conteur){
	int resultat = 0;
	conteur++;
	if (grid[x][y] == '+')
		grid[x][y] = 'X';
	if (conteur > 30)
		return 0;
	if (grid[x][y] == '.' || grid[x][y] == '*')
		return 0;
	if (y - 1 > -1)
		resultat += put_couler_haut(x, y - 1, grid, conteur);
	if (x + 1 < 17)
		resultat += put_couler_droite(x + 1, y, grid, conteur);
	if (x - 1 > -1)
		resultat += put_couler_gauche(x - 1, y, grid, conteur);
	return(resultat);
}


int put_couler_bas(int x,int y, char ** grid, int conteur){
	int resultat = 0;
	conteur++;
	if (grid[x][y] == '+')
		grid[x][y] = 'X';
	if (conteur > 30)
		return 0;
	if (grid[x][y] == '.' || grid[x][y] == '*')
		return 0;
	if (y + 1 < 17)
		resultat += put_couler_bas(x, y + 1, grid, conteur);
	if (x + 1 < 17)
		resultat += put_couler_droite(x + 1, y, grid, conteur);
	if (x - 1 > -1)
		resultat += put_couler_gauche(x - 1, y, grid, conteur);
	return(resultat);
}

int put_couler(int x,int y,char ** grid){
	int resultat = 0;
	if (grid[x][y] == '+')
		grid[x][y] = 'X';
	if (x + 1 < 17)
		resultat += put_couler_droite(x + 1, y, grid, 0);
	if (x - 1 > -1)
		resultat += put_couler_gauche(x - 1, y, grid, 0);
	if (y + 1 < 17)
		resultat += put_couler_bas(x, y + 1, grid, 0);
	if (y - 1 > -1)
		resultat += put_couler_haut(x, y - 1, grid, 0);
	return (resultat);
}

