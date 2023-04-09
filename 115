#include <stdio.h>
/*

Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os 
demais elementos. Escreva ao final a matriz obtida.

*/
int main()
{
	int i, j, V[5][5];
	
	for(i = 0; i < 5; i++) {
		
		for(j = 0; j < 5; j++) {
				//Diagonal principal : Lado == Coluna;
			if(i == j) {
				V[i][j] = 1;
			}else {
				V[i][j] = 0;
			}
		}
		
	}
	//Chamar a matriz no formatinho;	
for(i = 0; i < 5; i++) {
	printf("\n");
	for(j = 0; j < 5; j++) {
		printf(" %d ", V[i][j]);
	}
}

			
    return 0;
}
