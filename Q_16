#include <stdio.h>

int main()
{
// Faça um programa que receba do usuário o número de lados e o tamanho dos lados de um polígono regular e imprima o valor da área do polígono. 
// O programa deve utilizar uma estrutura switch-case para decidir que fórmula de cálculo utilizar, de acordo com o número de lados do polígono.
// Se o número de lados for diferente de 3, 4 ou 6, o programa deve informar: “não sei calcular a área”. Áreas:

//  Triângulo: A = L*L*1.73/4
//  Quadrado: A = L*L
//  Hexágono: A = 6*L*L*1.73/4;

    int nLados = 0, tipo;
    float area = 0, tLados = 0;

    
    printf("Digite o numero de lados e o tamanho dos lados, respectivamente: ");
    scanf("%d %f", &nLados, &tLados);
    
        //switch-case
        switch(nLados)
    { 
        case 3:
            tipo = 1;
            area = tLados * tLados * 1.73 / 4;
            printf("%f", area);
            break;
            
        case 4:
            tipo = 1;
            area = tLados * tLados;
            printf("%f", area);
            break;
            
        case 6:
             tipo = 3;
            area = 6 * tLados * tLados * 1.73 / 4;
            printf("%f", area);
            break;
        
        default:
            printf("não sei calcular a área");
            
    }
    return 0;
}
