#include <stdio.h>

int main()
{
/*
	71. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores 
lidos juntamente com o maior, o menor e a média dos valores.

*/
	float Vetor[5], soma, media, maior = 0, menor = 0;
	int i;
	
	//resolver o problema do menor numero...
	printf("Digite um valor: ");
		scanf("%f", &Vetor[0]);
		menor = Vetor[0];
		maior = Vetor[0];
		soma += Vetor[i];
	
	//montar o vetor e descobir o menor, o maior e a media.
	for(i = 1; i < 5; i++) {
		printf("Digite um valor: ");
		scanf("%f", &Vetor[i]);
		
		if (maior < Vetor[i]) {
		maior = Vetor[i];
			
		}
		
		if (menor > Vetor[i]) {
		menor = Vetor[i];
		
		}
		
		soma += Vetor[i];
	}
	
	printf("\n Os valores lidos foram: \n");
	
	//numeros lidos
	for(i = 0; i < 5; i++) {	
		printf("%f \n", Vetor[i]);
	
	}
	
	media = soma / 5;
	printf("\n O Maior foi: %f, e o Menor foi: %f \n", maior, menor);
	printf(" A media dos numeros eh %f", media);
	
	
	return 0;	
}
