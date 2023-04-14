#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*Escreva uma função que recebe uma string e retorna 1 se ela contém
um palíndromo, ou 0 do contrário. Um palíndromo é uma sequência que pode
ser lida igualmente da esquerda para a direita ou da direita para esquerda.
Exemplos de palíndromos: “ovo”, “esse”, “eva asse essa ave”.*/

int ehPalindromo(char str[]) {
    int i, j;
    int tamanho = strlen(str);

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        while (!isalpha(str[i])) {
            i++;
        }
        while (!isalpha(str[j])) {
            j--;
        }
        if (tolower(str[i]) != tolower(str[j])) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str[1000];

    printf("Digite uma string: ");
    fgets(str, 1000, stdin);

    if (ehPalindromo(str)) {
        printf("A string eh um palindromo.\n");
    } else {
        printf("A string nao eh um palindromo.\n");
    }

    return 0;
}
