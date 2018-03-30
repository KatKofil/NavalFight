#include "navalfight.h"

void test_taille_grid(){
  if(TAILLE_GRID > 26 || TAILLE_GRID < 13){ // taille trop grande ou trop petite
    printf("Erreur sur la taille du tableau \n");
    exit(1);
  }
}
		     
		     
