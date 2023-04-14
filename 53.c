#include <stdio.h>

/*Implementar a função EXP com as seguintes características:
1. Recebe um valor de base e um valor de expoente como parâmetros
do tipo unsigned int.
2. Retorna o resultado de baseexpoente na forma de um unsigned int.
3. Armazena o valor 1 na variável global status se foi bem sucedida,
e 0 se a exponenciação não pôde ser calculada devido a estouro.
4. Utiliza a característica recursiva da exponenciação:
▪ Baseexp = base.baseexp-1

, exp > 0

▪ Baseexp = 1, exp ==0*/

unsigned int status = 0; // Variável global para armazenar o status da operação

unsigned int my_exp(unsigned int base, unsigned int exp) {
    if (exp == 0) {
        status = 1; // A operação foi bem-sucedida
        return 1;
    } else if (exp % 2 == 0) {
        unsigned int temp = my_exp(base, exp/2);
        if (status == 0) return 0; // Houve um estouro, retorna 0
        return temp * temp;
    } else {
        unsigned int temp = my_exp(base, exp-1);
        if (status == 0) return 0; // Houve um estouro, retorna 0
        return base * temp;
    }
}

int main() {
    unsigned int base = 2;
    unsigned int expoente = 10;

    unsigned int resultado = my_exp(base, expoente);

    if (status == 1) {
        printf("%d elevado a %d = %d\n", base, expoente, resultado);
    } else {
        printf("Erro: estouro na exponenciação\n");
    }

    return 0;
}
