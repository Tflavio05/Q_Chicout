#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*

Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que 
transforme a matriz gerada numa matriz triangular inferior, ou seja, atribuindo 
zero a todos os elementos acima da diagonal principal. Imprima a matriz original 
e a matriz transformada.

*/
int main()
{
	int i, j, VA[4][4], VB[4][4];
	
	srand(time(NULL));
	
	//Matriz normal
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			
			VA[i][j] = rand() % 20 + 1;
			VB[i][j] = VA[i][j];
		}
	}
	
	//Matriz triangular inferior
	for(i = 0; i < 4; i++) {
		//O numero de posiçoes de cada linha vai caindo conforme a contagem.
		for(j = i + 1; j < 4; j++) {
			VB[i][j] = 0;
			
		}
	}
	
	
//Chamar a matriz no formatinho;	
for(i = 0; i < 4; i++) {
	printf("\n");
	for(j = 0; j < 4; j++) {
		printf("  %d  ", VA[i][j]);
	}
}

printf("\n");

for(i = 0; i < 4; i++) {
	printf("\n");
	for(j = 0; j < 4; j++) {
		printf(" %d ", VB[i][j]);
	}
}

			
    return 0;
}
