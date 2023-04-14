#include <stdio.h>
#include <limits.h>

/*Fazer uma função com as seguintes características:
a. recebe dois números inteiros como parâmetros.
b. retorna 1 se os números são iguais, 0 se são diferentes e –1 se a soma ou o
produto estoura a faixa dos inteiros. Além disso, retorna a soma e o produto
dos dois números.*/

int operacoes(int num1, int num2, int *soma, int *produto) {
    // verifica se a soma ou o produto estoura a faixa dos inteiros
    if ((num1 > 0 && num2 > INT_MAX - num1) || (num1 < 0 && num2 < INT_MIN - num1)) {
        return -1;
    }
    if ((num1 != 0 && num2 != 0) && (num2 > INT_MAX / num1 || num2 < INT_MIN / num1)) {
        return -1;
    }
    
    // calcula a soma e o produto dos números
    *soma = num1 + num2;
    *produto = num1 * num2;
    
    // retorna o resultado da comparação
    if (num1 == num2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num1, num2, soma, produto, resultado;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    resultado = operacoes(num1, num2, &soma, &produto);
    
    if (resultado == -1) {
        printf("A soma ou o produto estoura a faixa dos inteiros.\n");
    } else if (resultado == 0) {
        printf("Os números são diferentes.\n");
    } else {
        printf("Os números são iguais.\n");
    }
    
    printf("A soma dos números é %d.\n", soma);
    printf("O produto dos números é %d.\n", produto);
    
    return 0;
}
