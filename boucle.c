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

void viderbuffer(void){  // Vide le buffer (Annule l'entrée '\n' au clavier)
  int c = 0;
  while(c != '\n' && c != EOF){
    c = getchar();
  }
}

void findepartie(void) {
  printf("Gagne !\n");
  exit(0);
}

void insert(char **grid, int ligne  , int colonne){
  int victoire;
  if (grid[ligne][colonne]== 'O'){
    grid[ligne][colonne]= '+';
    printf("\nTouché !\n");
    sleep(1);
    if (couler(ligne, colonne, grid) == 0) {
	  if (put_couler(ligne, colonne, grid) == 0)
		printf("\nBateau coulé !\n");
      sleep(1);
      victoire = ft_detect_defaite(grid);
    }
  }
  if(grid[ligne][colonne]== '.'){
    grid[ligne][colonne]='*';
	printf("\nRaté !\n");
    sleep(1);
  }
  if (victoire == 0) {
    findepartie();
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
    sleep(1);
    printf("\nImpossible de jouer, case déjà attaquée !\n");
    // demande au joueur de choisir une autre case 
    return 1;
  }
  return 1;
}

int attaquer(char **grid) {
  char ligne;
  int colonne;
  int conditionligne = 1;
  int conditioncolonne = 1;
  int i, j;    // Compteur plateau
  int casevalide;
  while (conditionligne == 1) {
    printf("Choississez la ligne (lettre minuscule):\n");
    scanf("%c", &ligne);
    if (ligne >= 97 && ligne <= 113) {
      ligne -= 97;
      conditionligne = 0;
    } else {
      printf("Veuillez saisir une lettre minuscule compris entre a et q\n");
    }
    viderbuffer();
  }
  conditionligne = 1;

  while (conditioncolonne == 1) {
    printf("Choississez la colonne (nombre):\n");
    scanf("%d", &colonne);
    if (colonne >= 0 && colonne <= 16) {
      conditioncolonne = 0;
    } else {
      printf("Veuillez saisir un nombre compris entre 0 et 16\n");
    }
    viderbuffer();
  }
  conditioncolonne = 1;

  for (i = 0; i < 17; i++) {
    for (j = 0; j < 17; j++) {
      if (i == ligne && j == colonne) {
        casevalide = verifie(grid, ligne, colonne);
	if (casevalide == 0) {
	  return 0;
	} else {
	  return 1;
	}
      }
    }
  }
  return 1;
}

void boucle(char **grid1, char **grid2) {
  int compteurprincipale, compteurjoueurun, compteurjoueurdeux;
  compteurprincipale = 0;
  compteurjoueurun = 0;
  compteurjoueurdeux = 0;

  regle();

  char *joueur1 = nomjoueur();
  char *joueur2 = nomjoueur();
  

  while(compteurprincipale == 0) {  // Boucle principale du jeu

    printf("\n------------------------------------------------------------------------------------------\n\n\n");
    
    while(compteurjoueurun == 0) {  // Boucle joueur 1
      printf("Grille de %s\nSélectionnez la ligne et la colonne à attaquer :\n", joueur1);
      afficher(grid1);
      if (attaquer(grid2) == 0) {
	compteurjoueurun = 1;
      } else {
	printf("Veuillez ressaisir les coordonnées. \n");
      }
      
    }
    compteurjoueurun = 0;

    printf("\n------------------------------------------------------------------------------------------\n\n\n");

    while(compteurjoueurdeux == 0) {  // Boucle joueur 2
      printf("Grille de %s\nSélectionnez la ligne et la colonne à attaquer :\n", joueur2);
      afficher(grid2);
      if (attaquer(grid1) == 0) {
	compteurjoueurdeux = 1;
      } else {
	printf("Veuillez ressaisir les coordonnées. \n");
      }
    }
    compteurjoueurdeux = 0;
  }
  return;
}
