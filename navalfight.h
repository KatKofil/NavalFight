#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


// Prototype create_grid.c
int ft_test_born(int indice_col,int indice_line);
int ft_test_boat(char **grid, int indice_col, int indice_line);
int ft_boat_1_2(char **grid, int indice_col, int indice_line);
int ft_boat_1_3(char **grid, int indice_col, int indice_line);
int ft_boat_1_4(char **grid, int indice_col, int indice_line);
int ft_boat_1_5(char **grid, int indice_col, int indice_line);
int ft_boat_1_6(char **grid, int indice_col, int indice_line);
int ft_boat_2_2(char **grid, int indice_col, int indice_line);
int ft_boat_2_4(char **grid, int indice_col, int indice_line);
int ft_boat_1_4_1_3(char **grid, int indice_col, int indice_line);
char **ft_fill_grid(char **grid);
char **cree_tableau(void);

// Prototype afficha.c
void afficher(char** grille);

// Prototype boucle.c
char * nomjoueur(void);
void viderbuffer(void);
void insert(char **grid, int ligne  , int colonne);
int verifie (char **grid, int ligne  , int colonne);
int attaquer(char **grid);
//void affiche(char** grid);  // A remplacer
void boucle(char **grid, char**);



// Protype main.c
int main(void);
