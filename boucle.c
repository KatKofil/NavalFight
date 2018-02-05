#include "navalfight.h"

char * nomjoueur(){
  char *chaine, *temporaire;
  chaine = malloc(20* sizeof(char));
  temporaire = chaine;
  
  printf("Choisissez le nom du joueur :\n");
  do{
    *temporaire = getchar();
  } while(*temporaire++ != '\n');
  
  printf("Vous avez choisi %s\n", chaine);
  return chaine;
}

void viderbuffer(void){
  int c = 0;
  while(c != '\n' && c != EOF){
    c = getchar();
  }
}


void insert(char **grid, int ligne  , int colonne){

  if (grid[ligne][colonne]== 'O'){
    grid[ligne][colonne]= '+';
  }
  if(grid[ligne][colonne]== '.'){
    grid[ligne][colonne]='*';
  }
}


// Verifie si case vide 

int verifie (char **grid, int ligne  , int colonne){
     
     if(grid[ligne][colonne]== '.'){
      insert(grid, ligne, colonne);
      return 0;
     }

      if(grid[ligne][colonne]== 'O'){ // bea
        insert(grid, ligne, colonne);
        return 0;        
      }
      if(grid[ligne][colonne]== '*' || grid[ligne][colonne]== '+'|| grid[ligne][colonne]== 'X'){
        printf("Impossible de jouer\n");
        // demande au joueur de choisir une autre case 
        return 1;
      }
      return 1;
}

int attaquer(char **grid) {
  int ligne, colonne;
  int i, j;    // Compteur plateau
  printf("Choississez la ligne :\n");
  scanf("%d", &ligne);
  printf("Choississez la colonne :\n");
  scanf("%d", &colonne);

  if ((ligne < 0 || ligne > 17) || colonne < 0 || ligne > 17) {  // Si les coordonnes choisis sont en dehors du tableau
    return 1;
  }

  for (i = 0; i < 17; i++) {
    for (j = 0; j < 17; j++) {
      if (i == ligne && j == colonne) {
	verifie(grid, ligne, colonne);
	return 0;
	/* } else {
	 * p->plateau[i][j] = 'X';
	 */
	
      }
    }
  }
  return 1;
}
/*
void affiche(char** grid) {
  int i, j;
  for (i = 0; i < 17; i++) {
    for (j = 0; j < 17; j++) {
      printf("%3c", grid[i][j]);
      if (j == 16) {
	printf("\n");
      }
    }
  }
}*/

void boucle(char **grid1, char **grid2) {
  int compteurprincipale, compteurjoueurun, compteurjoueurdeux;
  compteurprincipale = 0;
  compteurjoueurun = 0;
  compteurjoueurdeux = 0;

  char *joueur1 = nomjoueur();
  char *joueur2 = nomjoueur();
  

  
  while(compteurprincipale == 0) {  // Boucle principale du jeu

    printf("\n--------------------------------------------------------------------------------------------\n\n\n");
    
    while(compteurjoueurun == 0) {  // Boucle joueur 1
      printf("Grille de %s\nSélectionnez la ligne et la colonne à attaquer :\n", joueur1);
      afficher(grid1);
      if (attaquer(grid2) == 0) {
	
	compteurjoueurun = 1;
      }
      
    }
    compteurjoueurun = 0;
    
    /* if (fonction qui dit que tous est coule est vrai) 
     * printf("Gagne !\n");
     * return;
     */

    printf("\n--------------------------------------------------------------------------------------------\n\n\n");

    while(compteurjoueurdeux == 0) {  // Boucle joueur 2
      printf("Grille de %s\nSélectionnez la ligne et la colonne à attaquer :\n", joueur2);
      afficher(grid2);
      if (attaquer(grid1) == 0) {
	
	
	compteurjoueurdeux = 1;
      }
    }
    compteurjoueurdeux = 0;

    /* if (fonction qui dit que tous est coule est vrai) 
     * printf("Gagne !\n");
     * return;
     */

    

    viderbuffer();

  }
  return;
}
