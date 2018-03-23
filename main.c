#include "navalfight.h"

int main() {
	test_taille_grid();
	srand(time(NULL));
	char ** grid1 = cree_tableau();
	char ** grid2 = cree_tableau();
	boucle(grid1, grid2);
	return 0;
}
