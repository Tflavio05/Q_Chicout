#include <stdio.h>
#include <stdlib.h>

/*Implemente uma função que receba como parâmetro um array de
números reais de tamanho N e retorne quantos números negativos há nesse
array. Essa função deve obedecer ao protótipo:
int negativos(float *vet, int N);*/

// Declaração da função que conta os números negativos no vetor
int negativos(float *vet, int N);

int main() {
    int N, i;
    float *vet;

    // Pede ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    // Aloca dinamicamente a memória para o vetor
    vet = (float*) malloc(N * sizeof(float));

    // Pede ao usuário os valores do vetor
    printf("Digite os valores do vetor:\n");
    for (i = 0; i < N; i++) {
        scanf("%f", &*(vet+i));
    }

    // Chama a função que conta os números negativos no vetor e imprime o resultado
    printf("Quantidade de numeros negativos: %d\n", negativos(vet, N));

    // Libera a memória alocada para o vetor
    free(vet);

    return 0;
}

// Implementação da função que conta os números negativos no vetor
int negativos(float *vet, int N) {
    int i, count = 0;

    // Percorre cada elemento do vetor
    for (i = 0; i < N; i++) {
        // Verifica se o valor atual é negativo
        if (*(vet+i) < 0) {
            // Se for, incrementa o contador de números negativos
            count++;
        }
    }

    // Retorna a quantidade de números negativos encontrados
    return count;
}
