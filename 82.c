#include <stdio.h>

int main()
{
/*
	 Ler dois conjuntos de números reais, armazená-los em vetores e calcular o 
produto escalar entre eles. Os conjuntos têm 5 elementos cada. Imprimir os 
dois conjuntos e o produto escalar, sendo que o produto escalar é dado por: x1 
* y1 + x2 * y2 + ... + xn * yn.

*/
	float C1[5], C2[5], Mult[5], escalar = 0;
	int i;
	
	//Montagem dos dois conjuntos
	for(i = 0; i < 5; i++) {
		printf("Digite a posicao %d do conjunto 1: ", i);
		scanf("%f", &C1[i]);
		
		printf("Digite a posicao %d do conjunto 2: ", i);
		scanf("%f", &C2[i]);
		
		//Vetor do produto escalar
		Mult[i] = C2[i] * C2[i];
	}
	//Montar o produto escalar
	for(i = 0; i < 5; i++) {
		escalar = escalar + Mult[i];
	}	
	//Mostar conjunto 1
	printf("\n O CONJUNTO 1: ");
	for(i = 0; i < 5; i++) {
		printf("%f \n", C1[i]);
	}
	//Mostar Conjunto 2
	printf("\n O CONJUNTO 2: ");
	for(i = 0; i < 5; i++) {
		printf("%f \n", C2[i]);
	}
	
	
	printf("\n O Produto escalar eh igual a: %f", escalar);
	
	return 0;	
}
