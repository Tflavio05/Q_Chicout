#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*Faça um programa que receba um nome completo do usuário e retorne
a abreviatura deste nome. Não se devem abreviar palavras com dois caracteres
ou menos, tais como as preposições: do, de, etc. A abreviatura deve vir
separada por pontos. Ex: Paulo Jose de Almeida Prado. Abreviatura: P. J. de
A. P.*/

int main() {
    char nome[100];
    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin); // Lê o nome completo do usuário
    printf("Nome abreviado: ");
    
    char *palavra = strtok(nome, " "); // Separa a primeira palavra do nome
    while (palavra != NULL) { // Enquanto houver palavras no nome
        if (strlen(palavra) > 2) { // Verifica se a palavra tem mais de 2 caracteres
            printf("%c. ", toupper(palavra[0])); // Abrevia a palavra e imprime com ponto
        } else {
            printf("%s ", palavra); // Imprime a palavra sem abreviação
        }
        palavra = strtok(NULL, " "); // Separa a próxima palavra do nome
    }
    
    return 0;
}
