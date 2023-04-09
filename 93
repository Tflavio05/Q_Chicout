#include <stdio.h>

int main()
{
/*
	Faça um programa para ler 10 números DIFERENTES a serem armazenados 
em um vetor. Os dados deverão ser armazenados no vetor na ordem que forem 
sendo lidos, sendo que caso o usuário digite um número que já foi digitado 
anteriormente, o programa deverá pedir para ele digitar outro número. Note 
que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando 
se ele existe entre os números que já foram fornecidos. Exibir na tela o vetor 
final que foi digitado.

*/
	float Vetor[10], n;
	int i, j;
	
	//leitura normal de um numero sem joga-lo no vetor.
	for(i = 0; i < 10; i++) {
		printf("Digite um numero: ");
		scanf("%f", &n);	
		
		//Segundo looping.	
		for(j = 0; j < i; j++) {
		
			if(n == Vetor[j]) {
				printf("O numero ja foi digitado. Digite outro numero: ");
				scanf("%f", &n);
				
				//para um numero repetido nao contar vez no looping for.
				j--;
			}
			}
		//recebimento na variavel dois do segundo looping.
		Vetor[i] = n;
	}
	
	//Mostrar resultado na tela.
	for(i = 0; i < 10; i++) {
		printf("%f \n", Vetor[i]);
	}
		
	
	return 0;	
}
