#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define TAILLE_GRID 15

//fonction main_debug
void fill_grid(char **grid);
void creat_grid_fail_couler(char **grid_fail_couler);
void creat_grid_win_couler(char **grid_win_couler);
void creat_grid_fail_end(char **grid_fail_end);
void creat_grid_win_end(char **grid_win_end);
int test_couler_debug(char **grid);
int test_end_debug(char **grid);

//fonction a tester
int couler(int x, int y, char **grid);
int couler_droite(int x, int y, char **grid, int conteur);
int couler_bas(int x, int y, char **grid, int conteur);
int couler_gauche(int x, int y, char **grid, int conteur);
int couler_haut(int x, int y, char **grid, int conteur);

int ft_detect_defaite(char **grid);
