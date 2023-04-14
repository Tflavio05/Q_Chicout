#include <stdio.h>

/*Crie um programa que contenha uma matriz de float contendo 3 linhas
e 3 colunas. Imprima o endereço de cada posição dessa matriz.*/

int main() {
    float matriz[3][3];
    float *p;
    int i, j;

    // atribui valores à matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = i * 3 + j + 1;
        }
    }

    // imprime o endereço de cada posição da matriz utilizando ponteiros
    printf("Enderecos da matriz:\n");
    p = &matriz[0][0]; // aponta para o primeiro elemento da matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Endereco de matriz[%d][%d]: %p\n", i, j, p);
            p++; // aponta para o próximo elemento da matriz
        }
    }

    return 0;
}
