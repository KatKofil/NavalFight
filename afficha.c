#include"navalfight.h"


void regle(){
printf("------------------------------------Bataille Naval--------------------------------------\n");
printf("Règles :\n");
printf("\n");
printf(". = Vide\n");
printf("* = Raté \n");
printf("X = coulé \n");
printf("+ = touché \n");
printf("\n");

}



void afficher(char** grille){
  int ligne, colonne;
  char lettre = 'A';
  //printf("Plateau du joueur %c : \n",player.nom);
  for(colonne = 0 ; colonne <= TAILLE_GRID - 1 ; ++colonne)
    if(colonne < 10)
      printf("  %d  ",colonne);
    else
      printf(" %d  ",colonne);
  printf("\n");

  for(ligne = 0 ; ligne < TAILLE_GRID ; ++ligne){
    printf("-------------------------------------------------------------------------------------\n");
   
    for(colonne = 0 ; colonne < TAILLE_GRID ; ++colonne)
      printf("| %c  ",grille [ligne][colonne]);
    printf("\033[0m");
    // printf("|  %d",ligne+1);
    
    printf("|  %c   ", lettre);
    lettre++; 


    
    printf("\n");
  }
  printf("-------------------------------------------------------------------------------------\n");
}

