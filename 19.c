#include <stdio.h>
#include <ctype.h>

/*Faça um programa que receba um nome completo do usuário e retorne
a abreviatura deste nome. Não se devem abreviar palavras com dois caracteres
ou menos, tais como as preposições: do, de, etc. A abreviatura deve vir
separada por pontos. Ex: Paulo Jose de Almeida Prado. Abreviatura: P. J. de
A. P.*/

void separarVogaisEConsoantes(char frase[], char vogais[], char consoantes[]) {
    int i, j = 0, k = 0;
    for (i = 0; frase[i] != '\0'; i++) {
        if (isalpha(frase[i])) {
            if (tolower(frase[i]) == 'a' || tolower(frase[i]) == 'e' || tolower(frase[i]) == 'i' || tolower(frase[i]) == 'o' || tolower(frase[i]) == 'u') {
                vogais[j] = frase[i];
                j++;
            } else {
                consoantes[k] = frase[i];
                k++;
            }
        }
    }
    vogais[j] = '\0';
    consoantes[k] = '\0';
}

int main() {
    char frase[1000], vogais[1000], consoantes[1000];
    printf("Digite uma frase: ");
    fgets(frase, 1000, stdin);

    separarVogaisEConsoantes(frase, vogais, consoantes);

    printf("Vogais: %s\n", vogais);
    printf("Consoantes: %s\n", consoantes);

    return 0;
}
