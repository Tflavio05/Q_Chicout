#include <stdio.h>
#include <ctype.h>

/*Com o vetor do exercício anterior, faça uma função que transfira as
consoantes para um vetor e as vogais para outro. Depois mostre cada um dos vetores*/

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
